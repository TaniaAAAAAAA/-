//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
StringGrid1->RowCount=2;
StringGrid1->Cells[0][0]="����� �������";
StringGrid1->Cells[1][0]="��� � �����";
StringGrid2->RowCount=2;
StringGrid2->Cells[0][0]="����� �������";
StringGrid2->Cells[1][0]="��� � �����";

}
//���������� �������� ������
struct Element
{
char naz[20];
char tim[10];
Element* next;
Element* prev;
};
Element* first=0, *last=0;
//��������� ������� ��������. ��������� ������� - �����: ����� ������� �� ���
void fir(char *naz, char* tim)
{
first=new Element;
strcpy(first->naz,naz);
strcpy(first->tim,tim);
first->next=0;
first->prev=0;
last=first;
}

//��������� �������� �� ������� ������.
//��������� ������� - �����: ����� ������� �� ���

void add_beg(char *naz, char* tim)
{
Element* c=new Element;
strcpy(c->naz,naz);
strcpy(c->tim,tim);
c->prev=0;
c->next=first;
first->prev=c;
first=c;
}

//��������� �������� �� ���� ������.
//��������� ������� - �����: ����� ������� �� ���
void add_end(char *naz, char* tim)
{
Element* c=new Element;
strcpy(c->naz,naz);
strcpy(c->tim,tim);
c->next=0;
c->prev=last;
last->next=c;
last=c;
}

//��������� �������� ������ � ������� �� ����������.
//�������� ������� - ��������� StringGrid
void print_beg(TStringGrid*sg)
{ int i=1; sg->RowCount=i+1; Element* c=first;
if(first==0) ShowMessage("�������"); while(c!=0)
{ sg->RowCount=i+1;
sg->Cells[0][i]=AnsiString(c->naz);
sg->Cells[1][i]=AnsiString(c->tim);
c=c->next; i++;
}
}


//��������� �������� ������ � ���������� �� �������.
//�������� ������� - ��������� StringGrid
void print_end(TStringGrid*sg)
{
int i=1; sg->RowCount=i+1; Element* c=last;
if (last==0) ShowMessage("Empty2"); while(c!=0)
{ sg->RowCount=i+1;
sg->Cells[0][i]=AnsiString(c->naz);
sg->Cells[1][i]=AnsiString(c->tim);
c=c->prev;
i++;
}
}

//���������� ������ �������� ���� �������� �1
void insert(Element *c1, char *naz, char* tim)
{
Element *c=new Element, *c2=c1->next;
strcpy(c->naz,naz);	// ���� ����� ������ ��������
strcpy(c->tim,tim);
c->next=0;	c->prev=0;
c->prev=c1;	// ��'�������� ������ �������� � ��������� ���������
c1->next=c;	// ���� � ��������� �������,
if(c2!=0)
{ c->next=c2;	// ����� ������� ��'������� � ���������,
c2->prev=c;
}	// ������ ����� ������� ��� �������.
else last=c;
}

//��������� �������� c
void del_el(Element* c)
{ Element* c1,*c2;
c1=c->prev;	// ��������� �������
c2=c->next;	// ��������� �������
if(c1!=0)	// ���� � ��������� �������,
c1->next=c2;	// �� ��'������� � ��������� ���������,
else first=c2;	// ������ ��������� ��� ������.
if(c2!=0)	// ���� � ��������� �������,
c2->prev=c1;	// ��������� ������� ��'������� � ���������,
else last=c1;	// ������ ��������� ������� ��� �������.
delete c;	// ��������� ���'��
}


//���������� ������ �������� � ����������� �� �����
void sort(char *naz, char* tim)
{
Element *c=first;
TTime tm=TTime(tim); // ��� � �������, ���� ������������.
if(tm<TTime(first->tim))// ���� ��� ������ �������� ����� �� ��� �������,
{ add_beg(naz, tim); // ����� ������� ������������ ����� ������
return;	}

//����������� �� �������, ������ ��� tm � ����� �� ��� ��������(����������� ���� ��� ����������)
while(c->next!=0 && tm>TTime(c->next->tim)) c=c->next;
if(c->next==0)	// ���� ������� � � ������� � ������,
add_end(naz, tim);	// ����� ������� ������������ ���� ����������,
else	// ������ ����� �������
insert(c,naz,tim);	// ������������ ���� ���������� ��������
}

//�������� ������ � ����
void ochistka()
{ Element* c;
while(last!=0)
{ c=last;
last=last->prev;
delete c;
}
first=0;
}













//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(first==0)
fir(Edit1->Text.c_str(), Edit2->Text.c_str());
else
sort(Edit1->Text.c_str(), Edit2->Text.c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
print_beg(StringGrid1);
print_end(StringGrid2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Element* c1=first; Element* c2=last;
bool ok=true;
if(strcmp(c1->naz, c2->naz)==0)
ShowMessage("����������� �� ��������� �������. ��� ����=" + AnsiString(c2->tim));
else
{ ShowMessage("�� ����������� �� ��������� �������");
return;
}
// ����������� �� ������� � ���� ����� � ����������� �������
while(TTime(c1->tim)<=TTime(c2->tim))
{ if(strcmp(c1->naz, c2->naz)!=0)
{ ok=false;
ShowMessage("��������� ������� � �����");
break;
}
c1=c1->next;
c2=c2->prev;
}
if(ok) ShowMessage("��������� ������� � ����� �����");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
ochistka();
Edit1->Clear();
Edit2->Clear();
for (int i=1; i<StringGrid1->RowCount; i++)
for (int j=0; j<2; j++)
StringGrid1->Cells[j][i]="";
for (int i=1; i<StringGrid2->RowCount; i++)
for (int j=0; j<2; j++)
StringGrid2->Cells[j][i]="";

}
//---------------------------------------------------------------------------

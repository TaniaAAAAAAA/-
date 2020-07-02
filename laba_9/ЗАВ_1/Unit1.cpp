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
StringGrid1->Cells[0][0]="Назва станції";
StringGrid1->Cells[1][0]="Час у дорозі";
StringGrid2->RowCount=2;
StringGrid2->Cells[0][0]="Назва станції";
StringGrid2->Cells[1][0]="Час у дорозі";

}
//Оголошення елемента списку
struct Element
{
char naz[20];
char tim[10];
Element* next;
Element* prev;
};
Element* first=0, *last=0;
//Створення першого елемента. Параметри функції - рядки: назва станції та час
void fir(char *naz, char* tim)
{
first=new Element;
strcpy(first->naz,naz);
strcpy(first->tim,tim);
first->next=0;
first->prev=0;
last=first;
}

//Долучення елемента до початку списку.
//Параметри функції - рядки: назва станції та час

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

//Долучення елемента до кінця списку.
//Параметри функції - рядки: назва станції та час
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

//Виведення елементів списку з першого до останнього.
//Параметр функції - компонент StringGrid
void print_beg(TStringGrid*sg)
{ int i=1; sg->RowCount=i+1; Element* c=first;
if(first==0) ShowMessage("Порожній"); while(c!=0)
{ sg->RowCount=i+1;
sg->Cells[0][i]=AnsiString(c->naz);
sg->Cells[1][i]=AnsiString(c->tim);
c=c->next; i++;
}
}


//Виведення елементів списку з останнього до першого.
//Параметр функції - компонент StringGrid
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

//Вставлення нового елемента після елемента с1
void insert(Element *c1, char *naz, char* tim)
{
Element *c=new Element, *c2=c1->next;
strcpy(c->naz,naz);	// Поля даних нового елемента
strcpy(c->tim,tim);
c->next=0;	c->prev=0;
c->prev=c1;	// Зв'язування нового елемента з попереднім елементом
c1->next=c;	// Якщо є наступний елемент,
if(c2!=0)
{ c->next=c2;	// новий елемент зв'язується з наступним,
c2->prev=c;
}	// інакше новий елемент стає останнім.
else last=c;
}

//Вилучення елемента c
void del_el(Element* c)
{ Element* c1,*c2;
c1=c->prev;	// Попередній елемент
c2=c->next;	// Наступний елемент
if(c1!=0)	// Якщо є попередній елемент,
c1->next=c2;	// він зв'язується з наступним елементом,
else first=c2;	// інакше наступний стає першим.
if(c2!=0)	// Якщо є наступний елемент,
c2->prev=c1;	// попередній елемент зв'язується з наступним,
else last=c1;	// інакше попередній елемент стає останнім.
delete c;	// Звільнення пам'яті
}


//Вставлення нового елемента з сортуванням за часом
void sort(char *naz, char* tim)
{
Element *c=first;
TTime tm=TTime(tim); // Час у елементі, який вставляється.
if(tm<TTime(first->tim))// Якщо час нового елемента менше за час першого,
{ add_beg(naz, tim); // новий елемент вставляється перед першим
return;	}

//Проходження за списком, допоки час tm є більше за час елементів(відшукування місця для вставлення)
while(c->next!=0 && tm>TTime(c->next->tim)) c=c->next;
if(c->next==0)	// Якщо елемент с є останнім у списку,
add_end(naz, tim);	// новий елемент вставляється після останнього,
else	// інакше новий елемент
insert(c,naz,tim);	// вставляється після знайденого елемента
}

//Очищення списку з кінця
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
ShowMessage("Повернулися до початкової станції. Час руху=" + AnsiString(c2->tim));
else
{ ShowMessage("Не повернулися до початкової станції");
return;
}
// Проходження за списком з обох кінців і порівнювання станцій
while(TTime(c1->tim)<=TTime(c2->tim))
{ if(strcmp(c1->naz, c2->naz)!=0)
{ ok=false;
ShowMessage("Зворотний маршрут є інший");
break;
}
c1=c1->next;
c2=c2->prev;
}
if(ok) ShowMessage("Зворотний маршрут є такий самий");
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

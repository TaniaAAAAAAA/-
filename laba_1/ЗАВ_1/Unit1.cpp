//---------------------------------------------------------------------------

#include <vcl.h>
#include<math.h>
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
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
const float b=7.1; //���� ��������� ������� ����
float t,a,x,y;
t=StrToFloat(Edit1->Text); //�������� �������� t
//���������� �� �������� ���������
a=sqrt(b+pow(t,2));
x=pow(cos(b),2)+pow(sin(a),2);
y=pow(x,2)+pow(fabs(x),1./3.);

//	��������� ���������� ���������
Edit2->Text=FloatToStr(a); 
Edit3->Text=FloatToStr(x); 
Edit4->Text=FloatToStr(y);
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Clear(); //�������� ���������� Edit1
Edit2->Clear();//�������� ���������� Edit2
Edit3->Clear();//�������� ���������� Edit3
Edit4->Clear();//�������� ���������� Edit4

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

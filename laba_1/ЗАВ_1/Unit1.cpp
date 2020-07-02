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
const float b=7.1; //опис константи дійсного типу
float t,a,x,y;
t=StrToFloat(Edit1->Text); //введення значення t
//обчислення за заданими формулами
a=sqrt(b+pow(t,2));
x=pow(cos(b),2)+pow(sin(a),2);
y=pow(x,2)+pow(fabs(x),1./3.);

//	виведення результатів обчислень
Edit2->Text=FloatToStr(a); 
Edit3->Text=FloatToStr(x); 
Edit4->Text=FloatToStr(y);
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Clear(); //очищення компонента Edit1
Edit2->Clear();//очищення компонента Edit2
Edit3->Clear();//очищення компонента Edit3
Edit4->Clear();//очищення компонента Edit4

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
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

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
int n;
double y,x = StrToFloat(Edit1->Text);
if(x<=-4){y=x*x-8; n=1;}
else
if(-4<x && x<0){y=3*x-2; n=2;}
else {y=2-x; n=3;}
Edit2->Text="Виконано умову №"+IntToStr(n)+"y="+FloatToStr(y);
}
//---------------------------------------------------------------------------

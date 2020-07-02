//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
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



void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
Edit1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
float x,y;
   x=StrToFloat(Edit1->Text);

   y = (0.2*x*x-x)/((sqrt(3)+x)*(1+2*x))+2*pow(x-1,3)/(pow(sin(x),2)+1);


   Edit2->Text=FloatToStr(y);
}
//---------------------------------------------------------------------------

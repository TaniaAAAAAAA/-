//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include<math.h>
#include<stdlib.h>
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
Edit3->Clear();
Edit4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
const float m=7.4;
float x,y,p,b;


b=StrToFloat(Edit1->Text);

x = atan(x*x+sqrt(b+m));
p = cos(pow(exp(fabs(b-x))-log10(fabs(x-b)),2));
y = pow(pow(sin(m*p-M_PI),2)/(b*x+p),1./3);

Edit2->Text=FloatToStr(x);
Edit3->Text=FloatToStr(p);
Edit4->Text=FloatToStr(y);
}
//---------------------------------------------------------------------------

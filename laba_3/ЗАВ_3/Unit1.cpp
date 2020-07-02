//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#include <stdlib.h>
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
Edit3->Clear();
Edit4->Clear();
Edit5->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{float a,b,c,s,p;
                  a=StrToFloat(Edit1->Text);
                  b=StrToFloat(Edit2->Text);
                  c=StrToFloat(Edit3->Text);

p=(a+b+c)/2;
s=p(p-a)(p-b)(p-c);

       Edit4->Text=FloatToStr(s);
       Edit5->Text=FloatToStr(p);

}
//---------------------------------------------------------------------------

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
Memo1->Clear();
Edit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
float A[8], sum=0;
for(int i=0;i<8;i++)
{A[i] = StrToFloat(Memo1->Lines->Strings[i]);
sum+=A[i];
 Edit1->Text = FormatFloat("0.000",sum) ;}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop




#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float A[15];
int i;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
Memo1->Clear();
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

{ Memo1->Clear();

for(i = 0; i < 15; i++)

{ A[i] = log10(i + 1) + tan(pow(2., i+1)); Memo1->Lines->Add(FormatFloat("0.000", A[i])); } }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 float min = A[0]; int ind = 0;
 for(i=1;i<15;i++)
 if(min>A[i]){min=A[i]; ind=i;}
 Edit1->Text = FormatFloat("0.000",min)+ "������� -" + IntToStr(ind+1);

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include<math.h>
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{
float m,z,w;


// ������������ �����, ��������� � Edit1, � ����� ����� m
m=StrToFloat(Edit1->Text);

//	��������� �������� z 
z=pow(sin(sqrt(fabs(m))),2);


//	��������� �������� w 
w=2*m+exp(z);

	// ������������ ������� ����� z � ����� ��������� Edit2
         Edit2->Text=FloatToStr(z);

// ������������ ������� ����� w � ����� ��������� Edit3
Edit3->Text=FloatToStr(w);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
Edit1->Text="";      // ����� ���� Edit1
Edit2->Clear( );	// ����� ���� Edit2
Edit3->Clear( );	// ����� ���� Edit3
Edit1->SetFocus( );

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

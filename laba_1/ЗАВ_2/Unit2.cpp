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


// перетворення рядка, введеного в Edit1, в дійсне число m
m=StrToFloat(Edit1->Text);

//	обрахунок значення z 
z=pow(sin(sqrt(fabs(m))),2);


//	обрахунок значення w 
w=2*m+exp(z);

	// перетворення дійсного числа z в рядок редактора Edit2
         Edit2->Text=FloatToStr(z);

// перетворення дійсного числа w в рядок редактора Edit3
Edit3->Text=FloatToStr(w);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
Edit1->Text="";      // очищає вміст Edit1
Edit2->Clear( );	// очищає вміст Edit2
Edit3->Clear( );	// очищає вміст Edit3
Edit1->SetFocus( );

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

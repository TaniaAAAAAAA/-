//---------------------------------------------------------------------------

#include <vcl.h>
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

void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
if(RadioButton1->Checked)
Panel1->Color=RGB(ScrollBar1->Position,
ScrollBar2->Position,ScrollBar3->Position);
else
Panel2->Color=RGB(ScrollBar1->Position,
ScrollBar2->Position,ScrollBar3->Position);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
ScrollBar1->Enabled = CheckBox1->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
            ScrollBar2->Enabled = CheckBox2->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
            ScrollBar3->Enabled = CheckBox3->Checked;

}
//---------------------------------------------------------------------------

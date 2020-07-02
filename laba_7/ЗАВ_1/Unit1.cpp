//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
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
SG1->RowCount=2;
SG1->Cells[1][0]="Прізвище"; SG1->Cells[2][0]="Дата народження";
}
struct person
{ char priz[15]; char birth[15]; };
person p[15];
int n=0;


//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(n>10) { ShowMessage("Переповнення масиву"); return; }
strcpy(p[n].priz, Edit1->Text.c_str());
strcpy(p[n].birth, Edit2->Text.c_str());
SG1->Cells[0][n+1]=IntToStr(n+1);
SG1->Cells[1][n+1]=AnsiString(p[n].priz);
SG1->Cells[2][n+1]=AnsiString(p[n].birth);
n++;
SG1->RowCount++;

}
person young(person p[], int n)
{ person max_p=p[0];
for(int i=0; i<n; i++)
if(TDate(max_p.birth) < TDate(p[i].birth)) max_p=p[i];
return max_p;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
person max=young(p,n);
Edit3->Text=AnsiString(max.priz)+" "+AnsiString(max.birth);

}
//---------------------------------------------------------------------------

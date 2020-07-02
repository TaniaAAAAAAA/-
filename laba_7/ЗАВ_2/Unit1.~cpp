//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
struct osoba
{ AnsiString prizv, imja;
bool st;
union // Об'єднання може зберігати
{ char VirgSername[25]; // чи то дівоче прізвище жінки,
bool ArmySrv; // чи ознаку служби в Збройних Силах для чоловіків
} P;
} ;
osoba ch[30]; // Масив із 30-ти структур
int i=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{


}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
if(RadioGroup1->ItemIndex==0)
{ ch[i].st=0; RadioGroup2->Visible=0;
Edit3->Visible=1; Label3->Visible=1;
}
else
{ ch[i].st=1; RadioGroup2->Visible=1;
Label3->Visible=0; Edit3->Visible=0;
}
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
ch[i].prizv=Edit1->Text;
ch[i].imja=Edit2->Text;
ch[i].st=RadioGroup1->ItemIndex;
if(ch[i].st) ch[i].P.ArmySrv=RadioGroup2->ItemIndex;
else strcpy(ch[i].P.VirgSername,Edit3->Text.c_str());
i++;
        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
SG1->RowCount=i;
for(int k=0;k<i;k++)
{ SG1->Cells[0][k]=ch[k].prizv;
SG1->Cells[1][k]=ch[k].imja;
if(ch[k].st)
{ SG1->Cells[2][k]="чоловіча";
if(ch[k].P.ArmySrv)SG1->Cells[3][k]="ні";
else SG1->Cells[3][k]="так";
}
else { SG1->Cells[2][k]="жіноча";
SG1->Cells[3][k]=ch[k].P.VirgSername;
}
}

}
//---------------------------------------------------------------------------

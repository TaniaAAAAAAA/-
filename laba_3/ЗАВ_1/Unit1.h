//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TScrollBar *ScrollBar1;
        TScrollBar *ScrollBar2;
        TScrollBar *ScrollBar3;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

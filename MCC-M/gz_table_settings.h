//---------------------------------------------------------------------------

#ifndef gz_table_settingsH
#define gz_table_settingsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class Tgz_table_sett : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TEdit *rm_item1;
        TEdit *rm_item2;
        TEdit *rm_item3;
        TEdit *rm_item5;
        TEdit *rm_item6;
        TEdit *rm_item4;
        TEdit *rm_item8;
        TEdit *rm_item7;
        TCheckBox *rm_item1_cb;
        TCheckBox *rm_item2_cb;
        TCheckBox *rm_item4_cb;
        TCheckBox *rm_item3_cb;
        TCheckBox *rm_item6_cb;
        TCheckBox *rm_item5_cb;
        TCheckBox *rm_item8_cb;
        TCheckBox *rm_item7_cb;
        TGroupBox *GroupBox2;
        TButton *SendToDBase;
        void __fastcall SendToDBaseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tgz_table_sett(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tgz_table_sett *gz_table_sett;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include <vcl.h>
#include "data.h"

#pragma hdrstop

#include "gz_table_settings.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tgz_table_sett *gz_table_sett;

extern AnsiString rs_items[8];       //Массив строки РС МКС

//---------------------------------------------------------------------------
__fastcall Tgz_table_sett::Tgz_table_sett(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall Tgz_table_sett::SendToDBaseClick(TObject *Sender)
{
rs_items[0]=rm_item1->Text;
rs_items[1]=rm_item2->Text;
rs_items[2]=rm_item3->Text;
rs_items[3]=rm_item4->Text;
rs_items[4]=rm_item5->Text;
rs_items[5]=rm_item6->Text;
rs_items[6]=rm_item7->Text;
rs_items[7]=rm_item8->Text;
//TK=rs_items;
}
//---------------------------------------------------------------------------


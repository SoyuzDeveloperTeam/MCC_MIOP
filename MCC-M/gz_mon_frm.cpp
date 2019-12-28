//---------------------------------------------------------------------------

#include <vcl.h>
#include "gz_table_form.cpp"
#pragma hdrstop

#include "gz_mon_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGZ_frm *GZ_frm;
//---------------------------------------------------------------------------
__fastcall TGZ_frm::TGZ_frm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TGZ_frm::gz_up_tableClick(TObject *Sender)
{
gz_table_frm->Show();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <DateUtils.hpp>


#include "gz_table_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tgz_table_frm *gz_table_frm;
//---------------------------------------------------------------------------
AnsiString RsMks[8]; //������ ������ �� ���
int Day; //���� ������
AnsiString days[] = { "�����������", "�����������", "�������", "�����", "�������", "�������", "�������" };

AnsiString TestDate="19.09.19";

//���� ����� � ������ �� ��� ��������
AnsiString ZARYA_LAUNCH_DATE="20.11.98";
AnsiString DateString;
AnsiString TimeString;
//---------------------------------------------------------------------------
void PRisV(){
 /*RsMks[0]=
   RsMks[1]=
 */
}
//---------------------------------------------------------------------------
__fastcall Tgz_table_frm::Tgz_table_frm(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall Tgz_table_frm::DMB_timerTimer(TObject *Sender)    //������ 1000 ��
{
RsMks[5]="���� ��-12";
Day = DayOfWeek(Now());                             //������� ���� ������
day_name->Caption=days[Day-1];                      //�������� ������ ���
RsMksString->Caption="�� ��� ( \"����\" / \"������\" \"����\" / \"�����\" / \"�������\" / \"",RsMks[5],"\" / \"";         //������ �� ���
DayYearN->Caption=IntToStr(DayOfTheYear(Now()));    //����� ����
date_string->Caption=DateString;                    //����� ���� ���������
DateString = FormatDateTime("mm/dd/yy", Now());     //�������������� ���� ��-��-��
TimeString = FormatDateTime("hh/nn/ss", Now());     //�������������� ������� ��-��-��
dmt->Caption=TimeString;                            //����� ������� ����������
obj_data->Caption=IntToStr(DaysBetween(ZARYA_LAUNCH_DATE,/*Now()*/TestDate));                             //����� ������ ��������

}
//---------------------------------------------------------------------------



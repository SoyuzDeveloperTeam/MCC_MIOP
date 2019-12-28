object MainFrm: TMainFrm
  Left = 294
  Top = 246
  BorderStyle = bsSingle
  Caption = #1052#1048#1054#1055' - '#1062#1059#1055
  ClientHeight = 498
  ClientWidth = 1365
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 0
    Top = 0
    Width = 597
    Height = 25
    Caption = #1084#1086#1076#1077#1083#1080#1088#1086#1074#1072#1085#1080#1077' '#1080' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1086#1085#1085#1086#1077' '#1086#1073#1077#1089#1087#1077#1095#1077#1085#1080#1077' '#1087#1086#1083#1105#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 832
    Top = 88
    Width = 441
    Height = 336
    Align = alCustom
    Caption = 'Label2'
  end
  object MainMenu: TMainMenu
    Left = 8
    Top = 576
    object N1: TMenuItem
      Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
      object N2: TMenuItem
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1089#1086#1089#1090#1086#1103#1085#1080#1077' ...'
      end
    end
    object N3: TMenuItem
      Caption = #1060#1086#1088#1084#1072#1090#1099
      object N8: TMenuItem
        Caption = #1043#1083#1072#1074#1085#1099#1081' '#1047#1072#1083' - '#1101#1082#1088#1072#1085
        OnClick = N8Click
      end
      object N11: TMenuItem
        Caption = #1043#1083#1072#1074#1085#1099#1081' '#1047#1072#1083' - '#1056#1047
      end
    end
    object N9: TMenuItem
      Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
      object N10: TMenuItem
        Caption = #1042#1099#1074#1086#1076
      end
      object gztzblesett: TMenuItem
        Caption = #1058#1072#1073#1083#1086' '#1043#1047
        OnClick = gztzblesettClick
      end
    end
    object N4: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N5: TMenuItem
        Caption = #1055#1086#1084#1086#1097#1100
      end
      object N6: TMenuItem
        Caption = '-'
      end
      object N7: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      end
    end
  end
end

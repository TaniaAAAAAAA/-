object Form1: TForm1
  Left = 192
  Top = 125
  Width = 756
  Height = 410
  Caption = #1047#1072#1089#1090#1086#1089#1091#1074#1072#1090#1080' union'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label4: TLabel
    Left = 240
    Top = 72
    Width = 57
    Height = 13
    Caption = #1055#1056#1030#1047#1042#1048#1065#1045
  end
  object Label5: TLabel
    Left = 408
    Top = 72
    Width = 35
    Height = 13
    Caption = #1057#1058#1040#1058#1068
  end
  object Label6: TLabel
    Left = 488
    Top = 72
    Width = 167
    Height = 13
    Caption = #1057#1083#1091#1078#1073#1072' '#1074' '#1072#1088#1084#1110#1111'/ '#1044#1110#1074#1086#1095#1077' '#1087#1088#1110#1079#1074#1080#1097#1077
  end
  object Label7: TLabel
    Left = 320
    Top = 72
    Width = 22
    Height = 13
    Caption = #1030#1052#39#1071
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 8
    Width = 209
    Height = 337
    Caption = #1059#1074#1077#1076#1110#1090#1100' '#1074#1110#1076#1086#1084#1086#1089#1090#1110
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 24
      Width = 49
      Height = 13
      Caption = #1055#1088#1110#1079#1074#1080#1097#1077
    end
    object Label2: TLabel
      Left = 8
      Top = 48
      Width = 19
      Height = 13
      Caption = #1030#1084#39#1103
    end
    object Label3: TLabel
      Left = 32
      Top = 208
      Width = 123
      Height = 13
      Caption = #1059#1074#1077#1076#1110#1090#1100' '#1076#1110#1074#1086#1095#1077' '#1087#1088#1110#1079#1074#1080#1097#1077
    end
    object Edit1: TEdit
      Left = 80
      Top = 16
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 80
      Top = 40
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object RadioGroup1: TRadioGroup
      Left = 0
      Top = 80
      Width = 209
      Height = 57
      Caption = #1054#1073#1077#1088#1110#1090#1100' '#1089#1090#1072#1090#1100
      Items.Strings = (
        #1046#1110#1085#1086#1095#1072
        #1063#1086#1083#1086#1074#1110#1095#1072)
      TabOrder = 2
      OnClick = RadioGroup1Click
    end
    object RadioGroup2: TRadioGroup
      Left = 0
      Top = 152
      Width = 209
      Height = 49
      Caption = #1054#1073#1077#1088#1110#1090#1100' '#1086#1079#1085#1072#1082#1091' '#1089#1083#1091#1078#1073#1080' '#1074' '#1072#1088#1084#1110#1111
      Items.Strings = (
        #1058#1072#1082
        #1053#1110)
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 32
      Top = 232
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object Button1: TButton
      Left = 56
      Top = 280
      Width = 75
      Height = 25
      Caption = #1042#1074#1077#1089#1090#1080' '#1076#1072#1085#1110
      TabOrder = 5
      OnClick = Button1Click
    end
  end
  object Button2: TButton
    Left = 392
    Top = 24
    Width = 217
    Height = 25
    Caption = #1055#1077#1088#1077#1075#1083#1103#1085#1091#1090#1080' '#1091#1089#1110' '#1074#1110#1076#1086#1084#1086#1089#1090#1110
    TabOrder = 1
    OnClick = Button2Click
  end
  object SG1: TStringGrid
    Left = 232
    Top = 88
    Width = 473
    Height = 257
    TabOrder = 2
    ColWidths = (
      64
      96
      85
      212
      129)
    RowHeights = (
      24
      24
      24
      24
      127)
  end
end

object Form1: TForm1
  Left = 704
  Top = 107
  Width = 519
  Height = 255
  Caption = #1055#1056'_3__'#1047#1040#1042#1044#1040#1053#1053#1071'_1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 112
    Width = 8
    Height = 13
    Caption = 'R'
  end
  object Label2: TLabel
    Left = 8
    Top = 144
    Width = 8
    Height = 13
    Caption = 'G'
  end
  object Label3: TLabel
    Left = 8
    Top = 176
    Width = 7
    Height = 13
    Caption = 'B'
  end
  object Panel1: TPanel
    Left = 344
    Top = 8
    Width = 145
    Height = 33
    Caption = #1055#1072#1085#1077#1083#1100' '#8470'1'
    TabOrder = 0
  end
  object Panel2: TPanel
    Left = 344
    Top = 56
    Width = 145
    Height = 33
    Caption = #1055#1072#1085#1077#1083#1100' '#8470'2'
    TabOrder = 1
  end
  object ScrollBar1: TScrollBar
    Left = 40
    Top = 112
    Width = 449
    Height = 17
    Max = 255
    PageSize = 0
    TabOrder = 2
    OnChange = ScrollBar1Change
  end
  object ScrollBar2: TScrollBar
    Left = 40
    Top = 144
    Width = 449
    Height = 17
    PageSize = 0
    TabOrder = 3
    OnChange = ScrollBar1Change
  end
  object ScrollBar3: TScrollBar
    Left = 40
    Top = 176
    Width = 449
    Height = 17
    PageSize = 0
    TabOrder = 4
    OnChange = ScrollBar1Change
  end
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 145
    Height = 89
    Caption = #1042#1080#1073#1110#1088' '#1055#1072#1085#1077#1083#1110
    TabOrder = 5
    object RadioButton1: TRadioButton
      Left = 8
      Top = 24
      Width = 129
      Height = 17
      Caption = #1055#1072#1085#1077#1083#1100' '#8470'1'
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 8
      Top = 48
      Width = 121
      Height = 17
      Caption = #1055#1072#1085#1077#1083#1100' '#8470'2'
      TabOrder = 1
    end
  end
  object GroupBox2: TGroupBox
    Left = 144
    Top = 0
    Width = 193
    Height = 89
    Caption = #1044#1086#1079#1074#1086#1083#1080#1090#1080' '#1089#1082#1083#1072#1076#1086#1074#1091' '#1082#1086#1083#1100#1086#1088#1091
    TabOrder = 6
    object CheckBox1: TCheckBox
      Left = 8
      Top = 16
      Width = 121
      Height = 17
      Caption = #1063#1077#1088#1074#1086#1085#1080#1081
      Checked = True
      State = cbChecked
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 8
      Top = 40
      Width = 129
      Height = 17
      Caption = #1047#1077#1083#1077#1085#1080#1081
      Checked = True
      State = cbChecked
      TabOrder = 1
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 8
      Top = 64
      Width = 137
      Height = 17
      Caption = #1057#1080#1085#1110#1081
      Checked = True
      State = cbChecked
      TabOrder = 2
      OnClick = CheckBox3Click
    end
  end
end

object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Evgeniy_Pelikh_IST-21-1'
  ClientHeight = 266
  ClientWidth = 537
  Color = clGrayText
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnActivate = FormActivate
  TextHeight = 13
  object Label1: TLabel
    Left = 128
    Top = 132
    Width = 239
    Height = 14
    Caption = #1047#1072#1076#1072#1090#1080' '#1089#1090#1080#1083#1100' '#1074#1110#1082#1085#1072' '#1082#1086#1088#1076#1086#1085#1110#1074' (BorderStyle):'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 144
    Top = 16
    Width = 193
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 168
    Top = 47
    Width = 145
    Height = 34
    Caption = #1047#1072#1076#1072#1090#1080' '#1079#1072#1075#1086#1083#1086#1074#1086#1082
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 416
    Top = 188
    Width = 81
    Height = 35
    Caption = #1047#1072#1082#1088#1080#1090#1080
    TabOrder = 2
    OnClick = Button2Click
  end
  object ComboBox1: TComboBox
    Left = 144
    Top = 152
    Width = 193
    Height = 21
    TabOrder = 3
    OnChange = ComboBox1Change
    Items.Strings = (
      'bsNone'#11
      'bsSingle'#11
      'bsSizeable'#11
      'bsDialog'#11
      'bsToolWindow'#11
      'bsSizeToolWin')
  end
end

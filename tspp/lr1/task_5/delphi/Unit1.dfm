object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Evgeniy_Pelikh_IST-21-1'
  ClientHeight = 289
  ClientWidth = 452
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnActivate = FormActivate
  OnClose = FormClose
  OnCloseQuery = FormCloseQuery
  OnDeactivate = FormDeactivate
  OnPaint = FormPaint
  OnResize = FormResize
  OnShow = FormShow
  DesignSize = (
    452
    289)
  TextHeight = 13
  object Button1: TButton
    Left = 363
    Top = 168
    Width = 81
    Height = 33
    Caption = 'Form'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 363
    Top = 223
    Width = 81
    Height = 31
    Caption = 'Close'
    TabOrder = 1
    OnClick = Button2Click
  end
  object ListBox1: TListBox
    Left = 4
    Top = 14
    Width = 329
    Height = 259
    Anchors = [akLeft, akTop, akRight, akBottom]
    ItemHeight = 13
    TabOrder = 2
  end
end

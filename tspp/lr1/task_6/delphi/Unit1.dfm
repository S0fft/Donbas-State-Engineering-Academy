object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Evgeniy_Pelikh_IST-21-1'
  ClientHeight = 344
  ClientWidth = 400
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnClick = FormClick
  OnDblClick = FormDblClick
  OnMouseDown = FormMouseDown
  OnMouseEnter = FormMouseEnter
  OnMouseLeave = FormMouseLeave
  OnMouseMove = FormMouseMove
  OnMouseUp = FormMouseUp
  OnMouseWheel = FormMouseWheel
  OnMouseWheelDown = FormMouseWheelDown
  OnMouseWheelUp = FormMouseWheelUp
  DesignSize = (
    400
    344)
  TextHeight = 13
  object Label1: TLabel
    Left = 184
    Top = 7
    Width = 16
    Height = 14
    Caption = 'X='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 184
    Top = 26
    Width = 17
    Height = 14
    Caption = 'Y='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object LX: TLabel
    Left = 204
    Top = 7
    Width = 7
    Height = 14
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object LY: TLabel
    Left = 204
    Top = 26
    Width = 7
    Height = 14
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ListBox1: TListBox
    Left = 24
    Top = 46
    Width = 353
    Height = 229
    Anchors = [akLeft, akTop, akRight, akBottom]
    ItemHeight = 13
    TabOrder = 0
  end
end

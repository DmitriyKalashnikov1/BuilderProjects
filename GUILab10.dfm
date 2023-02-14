object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 338
  ClientWidth = 666
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ImCanvas: TImage
    Left = 231
    Top = 0
    Width = 435
    Height = 338
    Align = alRight
  end
  object StartX: TEdit
    Left = 8
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'StartX'
  end
  object StopX: TEdit
    Left = 8
    Top = 67
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'StopX'
  end
  object StepX: TEdit
    Left = 8
    Top = 94
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'StepX'
  end
  object Plot: TButton
    Left = 8
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Plot'
    TabOrder = 3
    OnClick = PlotClick
  end
  object StringGrid: TStringGrid
    Left = 8
    Top = 218
    Width = 217
    Height = 120
    ColCount = 3
    TabOrder = 4
  end
end

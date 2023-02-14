object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Lab8'
  ClientHeight = 292
  ClientWidth = 330
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object SaveData: TButton
    Left = 128
    Top = 144
    Width = 75
    Height = 25
    Caption = 'SaveData'
    TabOrder = 0
    OnClick = SaveDataClick
  end
  object LoadData: TButton
    Left = 128
    Top = 192
    Width = 75
    Height = 25
    Caption = 'LoadData'
    TabOrder = 1
    OnClick = LoadDataClick
  end
  object Text: TEdit
    Left = 112
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 2
    OnChange = OnChange
  end
  object Output: TEdit
    Left = 72
    Top = 99
    Width = 196
    Height = 21
    TabOrder = 3
  end
  object SaveDialog: TSaveDialog
    Top = 72
  end
  object OpenDialog: TOpenDialog
    Top = 8
  end
end

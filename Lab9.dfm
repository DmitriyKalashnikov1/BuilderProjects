object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 582
  ClientWidth = 878
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object ImCanvas: TImage
    Left = 0
    Top = 0
    Width = 878
    Height = 536
    Align = alClient
    Stretch = True
    ExplicitLeft = -8
    ExplicitTop = 64
    ExplicitHeight = 582
  end
  object Label: TLabel
    Left = 0
    Top = 569
    Width = 878
    Height = 13
    Align = alBottom
    ExplicitWidth = 3
  end
  object Slider: TScrollBar
    Left = 0
    Top = 536
    Width = 878
    Height = 33
    Align = alBottom
    Max = 255
    PageSize = 0
    TabOrder = 0
    OnChange = SliderChange
    ExplicitTop = 555
  end
  object OpenDialog: TOpenDialog
    Left = 24
  end
  object MainMenu: TMainMenu
    object File: TMenuItem
      Caption = 'File'
      object OpenImage: TMenuItem
        Caption = 'OpenImage'
        OnClick = OpenImageClick
      end
      object ConvertImage: TMenuItem
        Caption = 'ConvertImage'
        OnClick = ConvertImageClick
      end
      object Exit: TMenuItem
        Caption = 'Exit'
        OnClick = ExitClick
      end
    end
  end
end

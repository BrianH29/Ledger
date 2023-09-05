object MainView: TMainView
  Left = 0
  Top = 0
  Caption = #44032#44228#48512
  ClientHeight = 556
  ClientWidth = 555
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 521
    Width = 44
    Height = 19
    Caption = #51077#44552' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 200
    Top = 521
    Width = 44
    Height = 19
    Caption = #52636#44552' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DepositBtn: TButton
    Left = 8
    Top = 9
    Width = 51
    Height = 25
    Caption = #51077#44552
    TabOrder = 0
    OnClick = DepositBtnClick
  end
  object ListView1: TListView
    Left = 8
    Top = 40
    Width = 537
    Height = 465
    Columns = <
      item
        Caption = #49692#49436
      end
      item
        Caption = #45216#51676
      end
      item
        Caption = #48516#47448
      end
      item
        Caption = #51077#44552
      end
      item
        Caption = #52636#44552
      end
      item
        Caption = #48708#44256
      end>
    GridLines = True
    RowSelect = True
    TabOrder = 1
    ViewStyle = vsReport
    OnColumnClick = ListView1ColumnClick
  end
  object EditBtn: TBitBtn
    Left = 122
    Top = 8
    Width = 51
    Height = 25
    Caption = #54200#51665
    TabOrder = 2
    OnClick = EditBtnClick
  end
  object WithdrawBtn: TBitBtn
    Left = 67
    Top = 8
    Width = 51
    Height = 25
    Caption = #52636#44552
    TabOrder = 3
    OnClick = WithdrawBtnClick
  end
  object DeleteBtn: TButton
    Left = 179
    Top = 9
    Width = 51
    Height = 25
    Caption = #49325#51228
    TabOrder = 4
    OnClick = DeleteBtnClick
  end
  object ConvertToExcel: TButton
    Left = 236
    Top = 8
    Width = 51
    Height = 25
    Caption = 'save'
    TabOrder = 5
    OnClick = ConvertToExcelClick
  end
  object open: TButton
    Left = 293
    Top = 9
    Width = 51
    Height = 25
    Caption = 'open'
    TabOrder = 6
    OnClick = openClick
  end
  object DepositTotal: TStaticText
    Left = 58
    Top = 521
    Width = 13
    Height = 23
    Caption = '0'
    Color = clHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 7
  end
  object WithdrawTotal: TStaticText
    Left = 258
    Top = 521
    Width = 13
    Height = 23
    Caption = '0'
    Color = clHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
    TabOrder = 8
  end
end

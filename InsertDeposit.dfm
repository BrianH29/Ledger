object DepositMain: TDepositMain
  Left = 0
  Top = 0
  Caption = #51077#44552
  ClientHeight = 223
  ClientWidth = 272
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object InsertDate: TLabel
    Left = 13
    Top = 24
    Width = 33
    Height = 13
    Caption = #46321#47197#51068
  end
  object Label1: TLabel
    Left = 24
    Top = 56
    Width = 22
    Height = 13
    Caption = #48516#47448
  end
  object Label2: TLabel
    Left = 24
    Top = 88
    Width = 22
    Height = 13
    Caption = #44552#50529
  end
  object Label3: TLabel
    Left = 24
    Top = 120
    Width = 22
    Height = 13
    Caption = #48708#44256
  end
  object DepositType: TEdit
    Left = 64
    Top = 53
    Width = 169
    Height = 21
    TabOrder = 0
  end
  object DepositAmount: TEdit
    Left = 64
    Top = 80
    Width = 169
    Height = 21
    NumbersOnly = True
    TabOrder = 1
  end
  object DepositNote: TEdit
    Left = 64
    Top = 112
    Width = 169
    Height = 50
    TabOrder = 2
  end
  object DepositDate: TDateTimePicker
    Left = 64
    Top = 16
    Width = 169
    Height = 21
    Date = 45166.696036122690000000
    Time = 45166.696036122690000000
    DateFormat = dfLong
    TabOrder = 3
  end
  object DepositInsert: TButton
    Left = 64
    Top = 171
    Width = 169
    Height = 30
    Caption = #46321#47197
    TabOrder = 4
    OnClick = DepositInsertClick
  end
end

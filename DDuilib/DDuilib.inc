{$IFDEF FPC}
  {$IFNDEF UseLowVer}
    {$DEFINE UseLowVer}
  {$ENDIF}
{$ENDIF}

{$IFNDEF UNICODE}
   {$DEFINE UseLowVer}
{$ENDIF}

// ����֧��
{$IF Defined(FPC) or not Defined(UseLowVer)}
   {$DEFINE SupportGeneric}
{$ifend}
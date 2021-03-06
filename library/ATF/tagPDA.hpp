// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HDC__.hpp>
#include <HINSTANCE__.hpp>
#include <HWND__.hpp>


START_ATF_NAMESPACE
    struct tagPDA
    {
        unsigned int lStructSize;
        HWND__ *hwndOwner;
        void *hDevMode;
        void *hDevNames;
        HDC__ *hDC;
        unsigned int Flags;
        unsigned __int16 nFromPage;
        unsigned __int16 nToPage;
        unsigned __int16 nMinPage;
        unsigned __int16 nMaxPage;
        unsigned __int16 nCopies;
        HINSTANCE__ *hInstance;
        __int64 lCustData;
        unsigned __int64 (WINAPIV *lpfnPrintHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        unsigned __int64 (WINAPIV *lpfnSetupHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        const char *lpPrintTemplateName;
        const char *lpSetupTemplateName;
        void *hPrintTemplate;
        void *hSetupTemplate;
    };
END_ATF_NAMESPACE

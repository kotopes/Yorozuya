// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$32DCFD36CB3697A42DF99114FB97BCE8.hpp>
#include <$B3416E6FB39B42CBB1BB7EBCCCE11F2F.hpp>
#include <$E858F86FA0700251E2C79447730AE6C1.hpp>


START_ATF_NAMESPACE
    union $4B3AC5E4704437C445220E2D10C00C40
    {
        $32DCFD36CB3697A42DF99114FB97BCE8 APC;
        $E858F86FA0700251E2C79447730AE6C1 IOC;
        $B3416E6FB39B42CBB1BB7EBCCCE11F2F HWND;
        void *hEvent;
        void (WINAPIV *NotificationRoutine)(_RPC_ASYNC_STATE *, void *, _RPC_ASYNC_EVENT);
    };
END_ATF_NAMESPACE

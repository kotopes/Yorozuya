// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_select_guild_master_lastconn_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_ptr _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next(nullptr);
        info::_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_clbk _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user(nullptr);
        info::_qry_case_select_guild_master_lastconnsize4_ptr _qry_case_select_guild_master_lastconnsize4_next(nullptr);
        info::_qry_case_select_guild_master_lastconnsize4_clbk _qry_case_select_guild_master_lastconnsize4_user(nullptr);
        
        void _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_wrapper(struct _qry_case_select_guild_master_lastconn* _this)
        {
           _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user(_this, _qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next);
        };
        int _qry_case_select_guild_master_lastconnsize4_wrapper(struct _qry_case_select_guild_master_lastconn* _this)
        {
           return _qry_case_select_guild_master_lastconnsize4_user(_this, _qry_case_select_guild_master_lastconnsize4_next);
        };
        
        hook_record _qry_case_select_guild_master_lastconn_functions[] = {
        {   (LPVOID)0x14025d680L,
            (LPVOID *)&_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_user,
            (LPVOID *)&_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_next,
            (LPVOID)cast_pointer_function(_qry_case_select_guild_master_lastconnctor__qry_case_select_guild_master_lastconn2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_select_guild_master_lastconn::*)())&_qry_case_select_guild_master_lastconn::ctor__qry_case_select_guild_master_lastconn) },
        {   (LPVOID)0x14025d6a0L,
            (LPVOID *)&_qry_case_select_guild_master_lastconnsize4_user,
            (LPVOID *)&_qry_case_select_guild_master_lastconnsize4_next,
            (LPVOID)cast_pointer_function(_qry_case_select_guild_master_lastconnsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_select_guild_master_lastconn::*)())&_qry_case_select_guild_master_lastconn::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
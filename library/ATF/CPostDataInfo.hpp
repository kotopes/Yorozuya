// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPostData.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CPostDatactor_CPostData2_ptr = void (WINAPIV*)(struct CPostData*);
        using CPostDatactor_CPostData2_clbk = void (WINAPIV*)(struct CPostData*, CPostDatactor_CPostData2_ptr);
        using CPostDataGetState4_ptr = char (WINAPIV*)(struct CPostData*);
        using CPostDataGetState4_clbk = char (WINAPIV*)(struct CPostData*, CPostDataGetState4_ptr);
        using CPostDataInit6_ptr = void (WINAPIV*)(struct CPostData*);
        using CPostDataInit6_clbk = void (WINAPIV*)(struct CPostData*, CPostDataInit6_ptr);
        using CPostDataSetPostContent8_ptr = void (WINAPIV*)(struct CPostData*, char*);
        using CPostDataSetPostContent8_clbk = void (WINAPIV*)(struct CPostData*, char*, CPostDataSetPostContent8_ptr);
        using CPostDataSetPostData10_ptr = void (WINAPIV*)(struct CPostData*, int, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, char);
        using CPostDataSetPostData10_clbk = void (WINAPIV*)(struct CPostData*, int, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, char, CPostDataSetPostData10_ptr);
        using CPostDataSetPostItemSerial12_ptr = void (WINAPIV*)(struct CPostData*, uint64_t);
        using CPostDataSetPostItemSerial12_clbk = void (WINAPIV*)(struct CPostData*, uint64_t, CPostDataSetPostItemSerial12_ptr);
        using CPostDataSetPostTitleData14_ptr = void (WINAPIV*)(struct CPostData*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, bool);
        using CPostDataSetPostTitleData14_clbk = void (WINAPIV*)(struct CPostData*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, bool, CPostDataSetPostTitleData14_ptr);
        using CPostDataSetReturnPostData16_ptr = void (WINAPIV*)(struct CPostData*, char, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int);
        using CPostDataSetReturnPostData16_clbk = void (WINAPIV*)(struct CPostData*, char, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, CPostDataSetReturnPostData16_ptr);
        using CPostDataSetState18_ptr = void (WINAPIV*)(struct CPostData*, char);
        using CPostDataSetState18_clbk = void (WINAPIV*)(struct CPostData*, char, CPostDataSetState18_ptr);
        
        using CPostDatadtor_CPostData22_ptr = void (WINAPIV*)(struct CPostData*);
        using CPostDatadtor_CPostData22_clbk = void (WINAPIV*)(struct CPostData*, CPostDatadtor_CPostData22_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE

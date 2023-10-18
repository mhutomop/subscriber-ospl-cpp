#ifndef _HelloWorldData_H_
#define _HelloWorldData_H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace HelloWorldData
{
    struct  Msg
    {
        ::DDS::Long userID;
        ::DDS::String_mgr message;
    };

    typedef DDS_DCPSStruct_var<Msg> Msg_var;
    typedef DDS_DCPSStruct_out < Msg> Msg_out;

}

#endif /* _HelloWorldData_H_ */

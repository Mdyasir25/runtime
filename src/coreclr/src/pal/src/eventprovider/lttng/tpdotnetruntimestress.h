//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//

/******************************************************************

DO NOT MODIFY. AUTOGENERATED FILE.
This file is generated using the logic from <root>/src/inc/genXplatLttng.pl

******************************************************************/


#include "palrt.h"
#include "pal.h"

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER DotNETRuntimeStress

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./lttng/tpdotnetruntimestress.h"

#if !defined(LTTNG_CORECLR_HDotNETRuntimeStress) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define LTTNG_CORECLR_HDotNETRuntimeStress

#include <lttng/tracepoint.h>


#define StressLog_TRACEPOINT_ARGS \
TP_ARGS(\
        const unsigned int ,Facility,\
        const unsigned char ,LogLevel,\
        const char* ,Message\
)
TRACEPOINT_EVENT_CLASS(
    DotNETRuntimeStress,
    StressLog,
    StressLog_TRACEPOINT_ARGS,
     TP_FIELDS(
        ctf_integer(unsigned int,Facility,Facility)
        ctf_integer(unsigned char,LogLevel,LogLevel)
        ctf_string(Message,Message)
    )
)
#define StressLogT_TRACEPOINT_INSTANCE(name) \
TRACEPOINT_EVENT_INSTANCE(\
    DotNETRuntimeStress,\
    StressLog ,\
    name ,\
    StressLog_TRACEPOINT_ARGS \
)

#define StressLog_V1_TRACEPOINT_ARGS \
TP_ARGS(\
        const unsigned int ,Facility,\
        const unsigned char ,LogLevel,\
        const char* ,Message,\
        const unsigned short ,ClrInstanceID\
)
TRACEPOINT_EVENT_CLASS(
    DotNETRuntimeStress,
    StressLog_V1,
    StressLog_V1_TRACEPOINT_ARGS,
     TP_FIELDS(
        ctf_integer(unsigned int,Facility,Facility)
        ctf_integer(unsigned char,LogLevel,LogLevel)
        ctf_string(Message,Message)
        ctf_integer(unsigned short,ClrInstanceID,ClrInstanceID)
    )
)
#define StressLog_V1T_TRACEPOINT_INSTANCE(name) \
TRACEPOINT_EVENT_INSTANCE(\
    DotNETRuntimeStress,\
    StressLog_V1 ,\
    name ,\
    StressLog_V1_TRACEPOINT_ARGS \
)

#define ClrStackWalk_TRACEPOINT_ARGS \
TP_ARGS(\
        const unsigned short ,ClrInstanceID,\
        const unsigned char ,Reserved1,\
        const unsigned char ,Reserved2,\
        const unsigned int ,FrameCount,\
        const size_t* ,Stack\
)
TRACEPOINT_EVENT_CLASS(
    DotNETRuntimeStress,
    ClrStackWalk,
    ClrStackWalk_TRACEPOINT_ARGS,
     TP_FIELDS(
        ctf_integer(unsigned short,ClrInstanceID,ClrInstanceID)
        ctf_integer(unsigned char,Reserved1,Reserved1)
        ctf_integer(unsigned char,Reserved2,Reserved2)
        ctf_integer(unsigned int,FrameCount,FrameCount)
        ctf_sequence(size_t, Stack, Stack,size_t,2)
    )
)
#define ClrStackWalkT_TRACEPOINT_INSTANCE(name) \
TRACEPOINT_EVENT_INSTANCE(\
    DotNETRuntimeStress,\
    ClrStackWalk ,\
    name ,\
    ClrStackWalk_TRACEPOINT_ARGS \
)
TRACEPOINT_EVENT_CLASS(
    DotNETRuntimeStress,
    emptyTemplate ,
    TP_ARGS(),
    TP_FIELDS()
)
#define T_TRACEPOINT_INSTANCE(name) \
TRACEPOINT_EVENT_INSTANCE(\
    DotNETRuntimeStress,\
    emptyTemplate,\
    name ,\
    TP_ARGS()\
)
StressLogT_TRACEPOINT_INSTANCE(StressLogEvent)
StressLog_V1T_TRACEPOINT_INSTANCE(StressLogEvent_V1)
ClrStackWalkT_TRACEPOINT_INSTANCE(CLRStackWalkStress)
#endif /* LTTNG_CORECLR_HDotNETRuntimeStress */
#include <lttng/tracepoint-event.h>

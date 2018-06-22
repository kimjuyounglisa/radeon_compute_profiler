//==============================================================================
// Copyright (c) 2015-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY HSA CODE GENERATOR
//==============================================================================

#include "../HSATraceStringUtils.h"
#include "HSATraceStringOutput.h"

#include "HSAAMDLoaderExtensionAPITraceClasses.h"

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ven_amd_loader_query_host_address
///////////////////////////////////////////////////

HSA_APITrace_hsa_ven_amd_loader_query_host_address::HSA_APITrace_hsa_ven_amd_loader_query_host_address()
{
}

HSA_APITrace_hsa_ven_amd_loader_query_host_address::~HSA_APITrace_hsa_ven_amd_loader_query_host_address()
{
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_host_address::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_host_address::ToString()
{
    std::ostringstream ss;
    ss << "device_address=" << StringUtils::ToHexString(m_device_address) << s_strParamSeparator;
    ss << "host_address=" << HSATraceStringUtils::SurroundWithDeRef(StringUtils::ToHexString(m_host_addressVal));
    return ss.str();
}

void HSA_APITrace_hsa_ven_amd_loader_query_host_address::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    const void* device_address,
    const void** host_address,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ven_amd_loader_query_host_address;
    m_device_address = device_address;
    m_host_address = host_address;

    if (nullptr != m_host_address)
    {
        m_host_addressVal = reinterpret_cast<uintptr_t>(*m_host_address);
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors
///////////////////////////////////////////////////

HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors::HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors()
{
}

HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors::~HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors()
{
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors::ToString()
{
    std::ostringstream ss;
    ss << "segment_descriptors=" << HSATraceStringUtils::Get_hsa_ven_amd_loader_segment_descriptor_t_Ptr_String(m_segment_descriptors, m_segment_descriptorsVal) << s_strParamSeparator;
    ss << "num_segment_descriptors=" << StringUtils::ToStringPtr(m_num_segment_descriptors, m_num_segment_descriptorsVal);
    return ss.str();
}

void HSA_APITrace_hsa_ven_amd_loader_query_segment_descriptors::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_ven_amd_loader_segment_descriptor_t* segment_descriptors,
    size_t* num_segment_descriptors,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ven_amd_loader_query_segment_descriptors;
    m_segment_descriptors = segment_descriptors;

    if (nullptr != m_segment_descriptors)
    {
        m_segment_descriptorsVal = *m_segment_descriptors;
    }

    m_num_segment_descriptors = num_segment_descriptors;

    if (nullptr != m_num_segment_descriptors)
    {
        m_num_segment_descriptorsVal = *m_num_segment_descriptors;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ven_amd_loader_query_executable
///////////////////////////////////////////////////

HSA_APITrace_hsa_ven_amd_loader_query_executable::HSA_APITrace_hsa_ven_amd_loader_query_executable()
{
}

HSA_APITrace_hsa_ven_amd_loader_query_executable::~HSA_APITrace_hsa_ven_amd_loader_query_executable()
{
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_executable::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ven_amd_loader_query_executable::ToString()
{
    std::ostringstream ss;
    ss << "device_address=" << StringUtils::ToHexString(m_device_address) << s_strParamSeparator;
    ss << "executable=" << HSATraceStringUtils::Get_hsa_executable_t_Ptr_String(m_executable, m_executableVal);
    return ss.str();
}

void HSA_APITrace_hsa_ven_amd_loader_query_executable::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    const void* device_address,
    hsa_executable_t* executable,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ven_amd_loader_query_executable;
    m_device_address = device_address;
    m_executable = executable;

    if (nullptr != m_executable)
    {
        m_executableVal = *m_executable;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects
///////////////////////////////////////////////////

HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects::HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects()
{
}

HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects::~HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects()
{
}

std::string HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects::ToString()
{
    std::ostringstream ss;
    ss << "executable=" << HSATraceStringUtils::Get_hsa_executable_t_String(m_executable) << s_strParamSeparator;
    ss << "callback=" << StringUtils::ToString(reinterpret_cast<void*>(m_callback)) << s_strParamSeparator;
    ss << "data=" << StringUtils::ToHexString(m_data);
    return ss.str();
}

void HSA_APITrace_hsa_ven_amd_loader_executable_iterate_loaded_code_objects::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_executable_t executable,
    hsa_status_t (*callback)(
    hsa_executable_t executable, hsa_loaded_code_object_t loaded_code_object, void* data),
    void* data,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ven_amd_loader_executable_iterate_loaded_code_objects;
    m_executable = executable;
    m_callback = callback;
    m_data = data;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info
///////////////////////////////////////////////////

HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info::HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info() : m_value(nullptr)
{
}

HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info::~HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info()
{
    if (nullptr != m_value)
    {
        FreeBuffer(m_value);
    }
}

std::string HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info::ToString()
{
    std::ostringstream ss;
    ss << "loaded_code_object=" << HSATraceStringUtils::Get_hsa_loaded_code_object_t_String(m_loaded_code_object) << s_strParamSeparator;
    ss << "attribute=" << HSATraceStringUtils::Get_hsa_ven_amd_loader_loaded_code_object_info_t_String(m_attribute) << s_strParamSeparator;
    ss << "value=" << HSATraceStringUtils::Get_hsa_ven_amd_loader_loaded_code_object_get_info_AttributeString(m_value, m_attribute, m_retVal);
    return ss.str();
}

void HSA_APITrace_hsa_ven_amd_loader_loaded_code_object_get_info::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_loaded_code_object_t loaded_code_object,
    hsa_ven_amd_loader_loaded_code_object_info_t attribute,
    void* value,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ven_amd_loader_loaded_code_object_get_info;
    m_loaded_code_object = loaded_code_object;
    m_attribute = attribute;

    if (nullptr != value)
    {
        DeepCopyBuffer(&m_value, value, HSATraceStringUtils::Get_hsa_ven_amd_loader_loaded_code_object_get_info_AttributeSize(m_attribute));
    }

    m_retVal = retVal;
}



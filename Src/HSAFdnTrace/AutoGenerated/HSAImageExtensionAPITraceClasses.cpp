//==============================================================================
// Copyright (c) 2015-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY HSA CODE GENERATOR
//==============================================================================

#include "../HSATraceStringUtils.h"
#include "HSATraceStringOutput.h"

#include "HSAImageExtensionAPITraceClasses.h"

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_get_capability
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_get_capability::HSA_APITrace_hsa_ext_image_get_capability()
{
}

HSA_APITrace_hsa_ext_image_get_capability::~HSA_APITrace_hsa_ext_image_get_capability()
{
}

std::string HSA_APITrace_hsa_ext_image_get_capability::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_get_capability::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "geometry=" << HSATraceStringUtils::Get_hsa_ext_image_geometry_t_String(m_geometry) << s_strParamSeparator;
    ss << "image_format=" << HSATraceStringUtils::Get_hsa_ext_image_format_t_Ptr_String(m_image_format, m_image_formatVal) << s_strParamSeparator;
    ss << "capability_mask=" << StringUtils::ToStringPtr(m_capability_mask, m_capability_maskVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_get_capability::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_geometry_t geometry,
    const hsa_ext_image_format_t* image_format,
    uint32_t* capability_mask,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_get_capability;
    m_agent = agent;
    m_geometry = geometry;
    m_image_format = image_format;

    if (nullptr != m_image_format)
    {
        m_image_formatVal = *m_image_format;
    }

    m_capability_mask = capability_mask;

    if (nullptr != m_capability_mask)
    {
        m_capability_maskVal = *m_capability_mask;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_get_capability_with_layout
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_get_capability_with_layout::HSA_APITrace_hsa_ext_image_get_capability_with_layout()
{
}

HSA_APITrace_hsa_ext_image_get_capability_with_layout::~HSA_APITrace_hsa_ext_image_get_capability_with_layout()
{
}

std::string HSA_APITrace_hsa_ext_image_get_capability_with_layout::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_get_capability_with_layout::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "geometry=" << HSATraceStringUtils::Get_hsa_ext_image_geometry_t_String(m_geometry) << s_strParamSeparator;
    ss << "image_format=" << HSATraceStringUtils::Get_hsa_ext_image_format_t_Ptr_String(m_image_format, m_image_formatVal) << s_strParamSeparator;
    ss << "image_data_layout=" << HSATraceStringUtils::Get_hsa_ext_image_data_layout_t_String(m_image_data_layout) << s_strParamSeparator;
    ss << "capability_mask=" << StringUtils::ToStringPtr(m_capability_mask, m_capability_maskVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_get_capability_with_layout::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_geometry_t geometry,
    const hsa_ext_image_format_t* image_format,
    hsa_ext_image_data_layout_t image_data_layout,
    uint32_t* capability_mask,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_get_capability_with_layout;
    m_agent = agent;
    m_geometry = geometry;
    m_image_format = image_format;

    if (nullptr != m_image_format)
    {
        m_image_formatVal = *m_image_format;
    }

    m_image_data_layout = image_data_layout;
    m_capability_mask = capability_mask;

    if (nullptr != m_capability_mask)
    {
        m_capability_maskVal = *m_capability_mask;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_data_get_info
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_data_get_info::HSA_APITrace_hsa_ext_image_data_get_info()
{
}

HSA_APITrace_hsa_ext_image_data_get_info::~HSA_APITrace_hsa_ext_image_data_get_info()
{
}

std::string HSA_APITrace_hsa_ext_image_data_get_info::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_data_get_info::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image_descriptor=" << HSATraceStringUtils::Get_hsa_ext_image_descriptor_t_Ptr_String(m_image_descriptor, m_image_descriptorVal) << s_strParamSeparator;
    ss << "access_permission=" << HSATraceStringUtils::Get_hsa_access_permission_t_String(m_access_permission) << s_strParamSeparator;
    ss << "image_data_info=" << HSATraceStringUtils::Get_hsa_ext_image_data_info_t_Ptr_String(m_image_data_info, m_image_data_infoVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_data_get_info::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const hsa_ext_image_descriptor_t* image_descriptor,
    hsa_access_permission_t access_permission,
    hsa_ext_image_data_info_t* image_data_info,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_data_get_info;
    m_agent = agent;
    m_image_descriptor = image_descriptor;

    if (nullptr != m_image_descriptor)
    {
        m_image_descriptorVal = *m_image_descriptor;
    }

    m_access_permission = access_permission;
    m_image_data_info = image_data_info;

    if (nullptr != m_image_data_info)
    {
        m_image_data_infoVal = *m_image_data_info;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_data_get_info_with_layout
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_data_get_info_with_layout::HSA_APITrace_hsa_ext_image_data_get_info_with_layout()
{
}

HSA_APITrace_hsa_ext_image_data_get_info_with_layout::~HSA_APITrace_hsa_ext_image_data_get_info_with_layout()
{
}

std::string HSA_APITrace_hsa_ext_image_data_get_info_with_layout::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_data_get_info_with_layout::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image_descriptor=" << HSATraceStringUtils::Get_hsa_ext_image_descriptor_t_Ptr_String(m_image_descriptor, m_image_descriptorVal) << s_strParamSeparator;
    ss << "access_permission=" << HSATraceStringUtils::Get_hsa_access_permission_t_String(m_access_permission) << s_strParamSeparator;
    ss << "image_data_layout=" << HSATraceStringUtils::Get_hsa_ext_image_data_layout_t_String(m_image_data_layout) << s_strParamSeparator;
    ss << "image_data_row_pitch=" << StringUtils::ToString(m_image_data_row_pitch) << s_strParamSeparator;
    ss << "image_data_slice_pitch=" << StringUtils::ToString(m_image_data_slice_pitch) << s_strParamSeparator;
    ss << "image_data_info=" << HSATraceStringUtils::Get_hsa_ext_image_data_info_t_Ptr_String(m_image_data_info, m_image_data_infoVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_data_get_info_with_layout::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const hsa_ext_image_descriptor_t* image_descriptor,
    hsa_access_permission_t access_permission,
    hsa_ext_image_data_layout_t image_data_layout,
    size_t image_data_row_pitch,
    size_t image_data_slice_pitch,
    hsa_ext_image_data_info_t* image_data_info,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_data_get_info_with_layout;
    m_agent = agent;
    m_image_descriptor = image_descriptor;

    if (nullptr != m_image_descriptor)
    {
        m_image_descriptorVal = *m_image_descriptor;
    }

    m_access_permission = access_permission;
    m_image_data_layout = image_data_layout;
    m_image_data_row_pitch = image_data_row_pitch;
    m_image_data_slice_pitch = image_data_slice_pitch;
    m_image_data_info = image_data_info;

    if (nullptr != m_image_data_info)
    {
        m_image_data_infoVal = *m_image_data_info;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_create
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_create::HSA_APITrace_hsa_ext_image_create()
{
}

HSA_APITrace_hsa_ext_image_create::~HSA_APITrace_hsa_ext_image_create()
{
}

std::string HSA_APITrace_hsa_ext_image_create::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_create::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image_descriptor=" << HSATraceStringUtils::Get_hsa_ext_image_descriptor_t_Ptr_String(m_image_descriptor, m_image_descriptorVal) << s_strParamSeparator;
    ss << "image_data=" << StringUtils::ToHexString(m_image_data) << s_strParamSeparator;
    ss << "access_permission=" << HSATraceStringUtils::Get_hsa_access_permission_t_String(m_access_permission) << s_strParamSeparator;
    ss << "image=" << HSATraceStringUtils::Get_hsa_ext_image_t_Ptr_String(m_image, m_imageVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_create::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const hsa_ext_image_descriptor_t* image_descriptor,
    const void* image_data,
    hsa_access_permission_t access_permission,
    hsa_ext_image_t* image,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_create;
    m_agent = agent;
    m_image_descriptor = image_descriptor;

    if (nullptr != m_image_descriptor)
    {
        m_image_descriptorVal = *m_image_descriptor;
    }

    m_image_data = image_data;
    m_access_permission = access_permission;
    m_image = image;

    if (nullptr != m_image)
    {
        m_imageVal = *m_image;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_create_with_layout
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_create_with_layout::HSA_APITrace_hsa_ext_image_create_with_layout()
{
}

HSA_APITrace_hsa_ext_image_create_with_layout::~HSA_APITrace_hsa_ext_image_create_with_layout()
{
}

std::string HSA_APITrace_hsa_ext_image_create_with_layout::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_create_with_layout::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image_descriptor=" << HSATraceStringUtils::Get_hsa_ext_image_descriptor_t_Ptr_String(m_image_descriptor, m_image_descriptorVal) << s_strParamSeparator;
    ss << "image_data=" << StringUtils::ToHexString(m_image_data) << s_strParamSeparator;
    ss << "access_permission=" << HSATraceStringUtils::Get_hsa_access_permission_t_String(m_access_permission) << s_strParamSeparator;
    ss << "image_data_layout=" << HSATraceStringUtils::Get_hsa_ext_image_data_layout_t_String(m_image_data_layout) << s_strParamSeparator;
    ss << "image_data_row_pitch=" << StringUtils::ToString(m_image_data_row_pitch) << s_strParamSeparator;
    ss << "image_data_slice_pitch=" << StringUtils::ToString(m_image_data_slice_pitch) << s_strParamSeparator;
    ss << "image=" << HSATraceStringUtils::Get_hsa_ext_image_t_Ptr_String(m_image, m_imageVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_create_with_layout::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const hsa_ext_image_descriptor_t* image_descriptor,
    const void* image_data,
    hsa_access_permission_t access_permission,
    hsa_ext_image_data_layout_t image_data_layout,
    size_t image_data_row_pitch,
    size_t image_data_slice_pitch,
    hsa_ext_image_t* image,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_create_with_layout;
    m_agent = agent;
    m_image_descriptor = image_descriptor;

    if (nullptr != m_image_descriptor)
    {
        m_image_descriptorVal = *m_image_descriptor;
    }

    m_image_data = image_data;
    m_access_permission = access_permission;
    m_image_data_layout = image_data_layout;
    m_image_data_row_pitch = image_data_row_pitch;
    m_image_data_slice_pitch = image_data_slice_pitch;
    m_image = image;

    if (nullptr != m_image)
    {
        m_imageVal = *m_image;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_destroy
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_destroy::HSA_APITrace_hsa_ext_image_destroy()
{
}

HSA_APITrace_hsa_ext_image_destroy::~HSA_APITrace_hsa_ext_image_destroy()
{
}

std::string HSA_APITrace_hsa_ext_image_destroy::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_destroy::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_image);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_destroy::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_t image,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_destroy;
    m_agent = agent;
    m_image = image;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_copy
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_copy::HSA_APITrace_hsa_ext_image_copy()
{
}

HSA_APITrace_hsa_ext_image_copy::~HSA_APITrace_hsa_ext_image_copy()
{
}

std::string HSA_APITrace_hsa_ext_image_copy::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_copy::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "src_image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_src_image) << s_strParamSeparator;
    ss << "src_offset=" << HSATraceStringUtils::Get_hsa_dim3_t_Ptr_String(m_src_offset, m_src_offsetVal) << s_strParamSeparator;
    ss << "dst_image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_dst_image) << s_strParamSeparator;
    ss << "dst_offset=" << HSATraceStringUtils::Get_hsa_dim3_t_Ptr_String(m_dst_offset, m_dst_offsetVal) << s_strParamSeparator;
    ss << "range=" << HSATraceStringUtils::Get_hsa_dim3_t_Ptr_String(m_range, m_rangeVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_copy::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_t src_image,
    const hsa_dim3_t* src_offset,
    hsa_ext_image_t dst_image,
    const hsa_dim3_t* dst_offset,
    const hsa_dim3_t* range,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_copy;
    m_agent = agent;
    m_src_image = src_image;
    m_src_offset = src_offset;

    if (nullptr != m_src_offset)
    {
        m_src_offsetVal = *m_src_offset;
    }

    m_dst_image = dst_image;
    m_dst_offset = dst_offset;

    if (nullptr != m_dst_offset)
    {
        m_dst_offsetVal = *m_dst_offset;
    }

    m_range = range;

    if (nullptr != m_range)
    {
        m_rangeVal = *m_range;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_import
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_import::HSA_APITrace_hsa_ext_image_import()
{
}

HSA_APITrace_hsa_ext_image_import::~HSA_APITrace_hsa_ext_image_import()
{
}

std::string HSA_APITrace_hsa_ext_image_import::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_import::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "src_memory=" << StringUtils::ToHexString(m_src_memory) << s_strParamSeparator;
    ss << "src_row_pitch=" << StringUtils::ToString(m_src_row_pitch) << s_strParamSeparator;
    ss << "src_slice_pitch=" << StringUtils::ToString(m_src_slice_pitch) << s_strParamSeparator;
    ss << "dst_image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_dst_image) << s_strParamSeparator;
    ss << "image_region=" << HSATraceStringUtils::Get_hsa_ext_image_region_t_Ptr_String(m_image_region, m_image_regionVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_import::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const void* src_memory,
    size_t src_row_pitch,
    size_t src_slice_pitch,
    hsa_ext_image_t dst_image,
    const hsa_ext_image_region_t* image_region,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_import;
    m_agent = agent;
    m_src_memory = src_memory;
    m_src_row_pitch = src_row_pitch;
    m_src_slice_pitch = src_slice_pitch;
    m_dst_image = dst_image;
    m_image_region = image_region;

    if (nullptr != m_image_region)
    {
        m_image_regionVal = *m_image_region;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_export
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_export::HSA_APITrace_hsa_ext_image_export()
{
}

HSA_APITrace_hsa_ext_image_export::~HSA_APITrace_hsa_ext_image_export()
{
}

std::string HSA_APITrace_hsa_ext_image_export::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_export::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "src_image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_src_image) << s_strParamSeparator;
    ss << "dst_memory=" << StringUtils::ToHexString(m_dst_memory) << s_strParamSeparator;
    ss << "dst_row_pitch=" << StringUtils::ToString(m_dst_row_pitch) << s_strParamSeparator;
    ss << "dst_slice_pitch=" << StringUtils::ToString(m_dst_slice_pitch) << s_strParamSeparator;
    ss << "image_region=" << HSATraceStringUtils::Get_hsa_ext_image_region_t_Ptr_String(m_image_region, m_image_regionVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_export::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_t src_image,
    void* dst_memory,
    size_t dst_row_pitch,
    size_t dst_slice_pitch,
    const hsa_ext_image_region_t* image_region,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_export;
    m_agent = agent;
    m_src_image = src_image;
    m_dst_memory = dst_memory;
    m_dst_row_pitch = dst_row_pitch;
    m_dst_slice_pitch = dst_slice_pitch;
    m_image_region = image_region;

    if (nullptr != m_image_region)
    {
        m_image_regionVal = *m_image_region;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_image_clear
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_image_clear::HSA_APITrace_hsa_ext_image_clear()
{
}

HSA_APITrace_hsa_ext_image_clear::~HSA_APITrace_hsa_ext_image_clear()
{
}

std::string HSA_APITrace_hsa_ext_image_clear::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_image_clear::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "image=" << HSATraceStringUtils::Get_hsa_ext_image_t_String(m_image) << s_strParamSeparator;
    ss << "data=" << StringUtils::ToHexString(m_data) << s_strParamSeparator;
    ss << "image_region=" << HSATraceStringUtils::Get_hsa_ext_image_region_t_Ptr_String(m_image_region, m_image_regionVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_image_clear::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_image_t image,
    const void* data,
    const hsa_ext_image_region_t* image_region,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_image_clear;
    m_agent = agent;
    m_image = image;
    m_data = data;
    m_image_region = image_region;

    if (nullptr != m_image_region)
    {
        m_image_regionVal = *m_image_region;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_sampler_create
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_sampler_create::HSA_APITrace_hsa_ext_sampler_create()
{
}

HSA_APITrace_hsa_ext_sampler_create::~HSA_APITrace_hsa_ext_sampler_create()
{
}

std::string HSA_APITrace_hsa_ext_sampler_create::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_sampler_create::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "sampler_descriptor=" << HSATraceStringUtils::Get_hsa_ext_sampler_descriptor_t_Ptr_String(m_sampler_descriptor, m_sampler_descriptorVal) << s_strParamSeparator;
    ss << "sampler=" << HSATraceStringUtils::Get_hsa_ext_sampler_t_Ptr_String(m_sampler, m_samplerVal);
    return ss.str();
}

void HSA_APITrace_hsa_ext_sampler_create::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    const hsa_ext_sampler_descriptor_t* sampler_descriptor,
    hsa_ext_sampler_t* sampler,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_sampler_create;
    m_agent = agent;
    m_sampler_descriptor = sampler_descriptor;

    if (nullptr != m_sampler_descriptor)
    {
        m_sampler_descriptorVal = *m_sampler_descriptor;
    }

    m_sampler = sampler;

    if (nullptr != m_sampler)
    {
        m_samplerVal = *m_sampler;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_ext_sampler_destroy
///////////////////////////////////////////////////

HSA_APITrace_hsa_ext_sampler_destroy::HSA_APITrace_hsa_ext_sampler_destroy()
{
}

HSA_APITrace_hsa_ext_sampler_destroy::~HSA_APITrace_hsa_ext_sampler_destroy()
{
}

std::string HSA_APITrace_hsa_ext_sampler_destroy::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_ext_sampler_destroy::ToString()
{
    std::ostringstream ss;
    ss << "agent=" << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << "sampler=" << HSATraceStringUtils::Get_hsa_ext_sampler_t_String(m_sampler);
    return ss.str();
}

void HSA_APITrace_hsa_ext_sampler_destroy::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_ext_sampler_t sampler,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_ext_sampler_destroy;
    m_agent = agent;
    m_sampler = sampler;
    m_retVal = retVal;
}



//==============================================================================
// Copyright (c) 2015-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY HSA CODE GENERATOR
//==============================================================================

#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

#include "Logger.h"
#include "Version.h"

#include "../HSAPMCInterceptionHelpers.h"

#include "HSAAgentIterateReplacer.h"

#include "HSAPMCInterception.h"

CoreApiTable*                      g_pRealCoreFunctions          = nullptr;
FinalizerExtTable*                 g_pRealFinalizerExtFunctions  = nullptr;
ImageExtTable*                     g_pRealImageExtFunctions      = nullptr;
AmdExtTable*                       g_pRealAmdExtFunctions        = nullptr;
hsa_ven_amd_aqlprofile_1_00_pfn_t* g_pRealAqlProfileExtFunctions = nullptr;
hsa_ven_amd_loader_1_01_pfn_t*     g_pRealLoaderExtFunctions     = nullptr;

hsa_status_t HSA_PMC_hsa_agent_get_info(hsa_agent_t agent, hsa_agent_info_t attribute, void* value)
{
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_agent_get_info_fn(agent, attribute, value);
    HSA_PMC_hsa_agent_get_info_PostCallHelper(retVal, agent, attribute, value);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_iterate_agents(hsa_status_t (*callback)(hsa_agent_t agent, void* data), void* data)
{
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_iterate_agents_fn(HSAAgentIterateReplacer::Instance()->GetAgentIterator(callback, g_pRealCoreFunctions), data);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_queue_create(hsa_agent_t agent, uint32_t size, hsa_queue_type32_t type, void (*callback)(hsa_status_t status, hsa_queue_t* source, void* data), void* data, uint32_t private_segment_size, uint32_t group_segment_size, hsa_queue_t** queue)
{
    // SoftCP mode requires a queue to be able to handle at least 128 packets
    if (MIN_QUEUE_SIZE_FOR_SOFTCP > size)
    {
        std::cout << RCP_PRODUCT_NAME << " is overriding the queue size passed to hsa_queue_create.\nQueues must have a size of at least " << MIN_QUEUE_SIZE_FOR_SOFTCP << " in order to support profiling." << std::endl;
        size = MIN_QUEUE_SIZE_FOR_SOFTCP;
    }

    hsa_status_t retVal = g_pRealCoreFunctions->hsa_queue_create_fn(agent, size, type, callback, data, private_segment_size, group_segment_size, queue);
    HSA_PMC_hsa_queue_create_PostCallHelper(retVal, agent, size, type, callback, data, private_segment_size, group_segment_size, queue);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_queue_destroy(hsa_queue_t* queue)
{
    HSA_PMC_hsa_queue_destroy_PreCallHelper(queue);
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_queue_destroy_fn(queue);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_executable_get_symbol(hsa_executable_t executable, const char* module_name, const char* symbol_name, hsa_agent_t agent, int32_t call_convention, hsa_executable_symbol_t* symbol)
{
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_executable_get_symbol_fn(executable, module_name, symbol_name, agent, call_convention, symbol);
    HSA_PMC_hsa_executable_get_symbol_PostCallHelper(retVal, executable, module_name, symbol_name, agent, call_convention, symbol);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_executable_get_symbol_by_name(hsa_executable_t executable, const char* symbol_name, const hsa_agent_t* agent, hsa_executable_symbol_t* symbol)
{
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_executable_get_symbol_by_name_fn(executable, symbol_name, agent, symbol);
    HSA_PMC_hsa_executable_get_symbol_by_name_PostCallHelper(retVal, executable, symbol_name, agent, symbol);

    return retVal;
}

hsa_status_t HSA_PMC_hsa_executable_symbol_get_info(hsa_executable_symbol_t executable_symbol, hsa_executable_symbol_info_t attribute, void* value)
{
    hsa_status_t retVal = g_pRealCoreFunctions->hsa_executable_symbol_get_info_fn(executable_symbol, attribute, value);

    if (HSA_EXECUTABLE_SYMBOL_INFO_NAME == attribute)
    {
        HSA_PMC_hsa_executable_symbol_get_info_PostCallHelper(retVal, executable_symbol, attribute, value);
    }

    return retVal;
}

void InitHSAAPIInterceptPMC(HsaApiTable* pTable)
{
    // the minor_id of the version is the size of the structure
    // use the min of the compiled-in structure size and the size reported by the runtime
    uint32_t tableSize = std::min(pTable->core_->version.minor_id, static_cast<uint32_t>(sizeof(CoreApiTable)));
    g_pRealCoreFunctions = reinterpret_cast<CoreApiTable*>(malloc(tableSize));
    memcpy(g_pRealCoreFunctions, pTable->core_, tableSize);

    tableSize = std::min(pTable->finalizer_ext_->version.minor_id, static_cast<uint32_t>(sizeof(FinalizerExtTable)));
    g_pRealFinalizerExtFunctions = reinterpret_cast<FinalizerExtTable*>(malloc(tableSize));
    memcpy(g_pRealFinalizerExtFunctions, pTable->finalizer_ext_, tableSize);

    tableSize = std::min(pTable->image_ext_->version.minor_id, static_cast<uint32_t>(sizeof(ImageExtTable)));
    g_pRealImageExtFunctions = reinterpret_cast<ImageExtTable*>(malloc(tableSize));
    memcpy(g_pRealImageExtFunctions, pTable->image_ext_, tableSize);

    tableSize = std::min(pTable->amd_ext_->version.minor_id, static_cast<uint32_t>(sizeof(AmdExtTable)));
    g_pRealAmdExtFunctions = reinterpret_cast<AmdExtTable*>(malloc(tableSize));
    memcpy(g_pRealAmdExtFunctions, pTable->amd_ext_, tableSize);

    pTable->core_->hsa_agent_get_info_fn = HSA_PMC_hsa_agent_get_info;
    pTable->core_->hsa_iterate_agents_fn = HSA_PMC_hsa_iterate_agents;
    pTable->core_->hsa_queue_create_fn = HSA_PMC_hsa_queue_create;
    pTable->core_->hsa_queue_destroy_fn = HSA_PMC_hsa_queue_destroy;
    pTable->core_->hsa_executable_get_symbol_fn = HSA_PMC_hsa_executable_get_symbol;
    pTable->core_->hsa_executable_get_symbol_by_name_fn = HSA_PMC_hsa_executable_get_symbol_by_name;
    pTable->core_->hsa_executable_symbol_get_info_fn = HSA_PMC_hsa_executable_symbol_get_info;
}

void DoneHSAAPIInterceptPMC()
{
    free(g_pRealCoreFunctions);
    free(g_pRealFinalizerExtFunctions);
    free(g_pRealImageExtFunctions);
    free(g_pRealAmdExtFunctions);
}



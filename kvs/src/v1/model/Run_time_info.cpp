

#include "huaweicloud/kvs/v1/model/Run_time_info.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Run_time_info::Run_time_info()
{
    tableInfoIsSet_ = false;
    localSecondaryIndexInfosIsSet_ = false;
    globalSecondaryIndexInfosIsSet_ = false;
}

Run_time_info::~Run_time_info() = default;

void Run_time_info::validate()
{
}

bool Run_time_info::toBson(Builder &builder) const
{

    if (tableInfoIsSet_ && !bson_append(builder, "table_info", tableInfo_)) {
        return false;
    }
    if (localSecondaryIndexInfosIsSet_ && !bson_append(builder, "local_secondary_index_infos", localSecondaryIndexInfos_)) {
        return false;
    }
    if (globalSecondaryIndexInfosIsSet_ && !bson_append(builder, "global_secondary_index_infos", globalSecondaryIndexInfos_)) {
        return false;
    }

    return true;
}

bool Run_time_info::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "table_info") {
            if (!bson_get(it, tableInfo_)) {
                return false;
            }
            tableInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "local_secondary_index_infos") {
            if (!bson_get(it, localSecondaryIndexInfos_)) {
                return false;
            }
            localSecondaryIndexInfosIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "global_secondary_index_infos") {
            if (!bson_get(it, globalSecondaryIndexInfos_)) {
                return false;
            }
            globalSecondaryIndexInfosIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Table_info Run_time_info::getTableInfo() const
{
    return tableInfo_;
}

void Run_time_info::setTableInfo(const Table_info& value)
{
    tableInfo_ = value;
    tableInfoIsSet_ = true;
}

bool Run_time_info::tableInfoIsSet() const
{
    return tableInfoIsSet_;
}

void Run_time_info::unsettableInfo()
{
    tableInfoIsSet_ = false;
}

std::vector<Secondary_index_info>& Run_time_info::getLocalSecondaryIndexInfos()
{
    return localSecondaryIndexInfos_;
}

void Run_time_info::setLocalSecondaryIndexInfos(const std::vector<Secondary_index_info>& value)
{
    localSecondaryIndexInfos_ = value;
    localSecondaryIndexInfosIsSet_ = true;
}

bool Run_time_info::localSecondaryIndexInfosIsSet() const
{
    return localSecondaryIndexInfosIsSet_;
}

void Run_time_info::unsetlocalSecondaryIndexInfos()
{
    localSecondaryIndexInfosIsSet_ = false;
}

std::vector<Global_secondary_index_info>& Run_time_info::getGlobalSecondaryIndexInfos()
{
    return globalSecondaryIndexInfos_;
}

void Run_time_info::setGlobalSecondaryIndexInfos(const std::vector<Global_secondary_index_info>& value)
{
    globalSecondaryIndexInfos_ = value;
    globalSecondaryIndexInfosIsSet_ = true;
}

bool Run_time_info::globalSecondaryIndexInfosIsSet() const
{
    return globalSecondaryIndexInfosIsSet_;
}

void Run_time_info::unsetglobalSecondaryIndexInfos()
{
    globalSecondaryIndexInfosIsSet_ = false;
}

}
}
}
}
}



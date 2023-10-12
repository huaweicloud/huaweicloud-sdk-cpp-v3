

#include "huaweicloud/kvs/v1/model/RuntimeInfo.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




RuntimeInfo::RuntimeInfo()
{
    tableInfoIsSet_ = false;
    local2ndIndexesInfoIsSet_ = false;
    global2ndIndexesInfoIsSet_ = false;
}

RuntimeInfo::~RuntimeInfo() = default;

void RuntimeInfo::validate()
{
}

bool RuntimeInfo::toBson(Builder &builder) const
{

    if (tableInfoIsSet_ && !bson_append(builder, "TableInfo", tableInfo_)) {
        return false;
    }
    if (local2ndIndexesInfoIsSet_ && !bson_append(builder, "Local2ndIndexesInfo", local2ndIndexesInfo_)) {
        return false;
    }
    if (global2ndIndexesInfoIsSet_ && !bson_append(builder, "Global2ndIndexesInfo", global2ndIndexesInfo_)) {
        return false;
    }

    return true;
}

bool RuntimeInfo::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableInfo") {
            if (!bson_get(it, tableInfo_)) {
                return false;
            }
            tableInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Local2ndIndexesInfo") {
            if (!bson_get(it, local2ndIndexesInfo_)) {
                return false;
            }
            local2ndIndexesInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Global2ndIndexesInfo") {
            if (!bson_get(it, global2ndIndexesInfo_)) {
                return false;
            }
            global2ndIndexesInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

TableInfo RuntimeInfo::getTableInfo() const
{
    return tableInfo_;
}

void RuntimeInfo::setTableInfo(const TableInfo& value)
{
    tableInfo_ = value;
    tableInfoIsSet_ = true;
}

bool RuntimeInfo::tableInfoIsSet() const
{
    return tableInfoIsSet_;
}

void RuntimeInfo::unsettableInfo()
{
    tableInfoIsSet_ = false;
}

std::vector<LsiIndexInfo>& RuntimeInfo::getLocal2ndIndexesInfo()
{
    return local2ndIndexesInfo_;
}

void RuntimeInfo::setLocal2ndIndexesInfo(const std::vector<LsiIndexInfo>& value)
{
    local2ndIndexesInfo_ = value;
    local2ndIndexesInfoIsSet_ = true;
}

bool RuntimeInfo::local2ndIndexesInfoIsSet() const
{
    return local2ndIndexesInfoIsSet_;
}

void RuntimeInfo::unsetlocal2ndIndexesInfo()
{
    local2ndIndexesInfoIsSet_ = false;
}

std::vector<GsiIndexInfo>& RuntimeInfo::getGlobal2ndIndexesInfo()
{
    return global2ndIndexesInfo_;
}

void RuntimeInfo::setGlobal2ndIndexesInfo(const std::vector<GsiIndexInfo>& value)
{
    global2ndIndexesInfo_ = value;
    global2ndIndexesInfoIsSet_ = true;
}

bool RuntimeInfo::global2ndIndexesInfoIsSet() const
{
    return global2ndIndexesInfoIsSet_;
}

void RuntimeInfo::unsetglobal2ndIndexesInfo()
{
    global2ndIndexesInfoIsSet_ = false;
}

}
}
}
}
}



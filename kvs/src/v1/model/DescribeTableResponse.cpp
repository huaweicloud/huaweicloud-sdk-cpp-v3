

#include "huaweicloud/kvs/v1/model/DescribeTableResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DescribeTableResponse::DescribeTableResponse()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    primaryKeySchemaIsSet_ = false;
    local2ndIndexSchemaIsSet_ = false;
    global2ndIndexSchemaIsSet_ = false;
    runtimeInfoIsSet_ = false;
}

DescribeTableResponse::~DescribeTableResponse() = default;

void DescribeTableResponse::validate()
{
}

bool DescribeTableResponse::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (primaryKeySchemaIsSet_ && !bson_append(builder, "PrimaryKeySchema", primaryKeySchema_)) {
        return false;
    }
    if (local2ndIndexSchemaIsSet_ && !bson_append(builder, "Local2ndIndexSchema", local2ndIndexSchema_)) {
        return false;
    }
    if (global2ndIndexSchemaIsSet_ && !bson_append(builder, "Global2ndIndexSchema", global2ndIndexSchema_)) {
        return false;
    }
    if (runtimeInfoIsSet_ && !bson_append(builder, "RuntimeInfo", runtimeInfo_)) {
        return false;
    }

    return true;
}

bool DescribeTableResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableName") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "PrimaryKeySchema") {
            if (!bson_get(it, primaryKeySchema_)) {
                return false;
            }
            primaryKeySchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Local2ndIndexSchema") {
            if (!bson_get(it, local2ndIndexSchema_)) {
                return false;
            }
            local2ndIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "Global2ndIndexSchema") {
            if (!bson_get(it, global2ndIndexSchema_)) {
                return false;
            }
            global2ndIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "RuntimeInfo") {
            if (!bson_get(it, runtimeInfo_)) {
                return false;
            }
            runtimeInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string DescribeTableResponse::getTableName() const
{
    return tableName_;
}

void DescribeTableResponse::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DescribeTableResponse::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DescribeTableResponse::unsettableName()
{
    tableNameIsSet_ = false;
}

PrimaryKeySchema DescribeTableResponse::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void DescribeTableResponse::setPrimaryKeySchema(const PrimaryKeySchema& value)
{
    primaryKeySchema_ = value;
    primaryKeySchemaIsSet_ = true;
}

bool DescribeTableResponse::primaryKeySchemaIsSet() const
{
    return primaryKeySchemaIsSet_;
}

void DescribeTableResponse::unsetprimaryKeySchema()
{
    primaryKeySchemaIsSet_ = false;
}

std::vector<LsiIndex>& DescribeTableResponse::getLocal2ndIndexSchema()
{
    return local2ndIndexSchema_;
}

void DescribeTableResponse::setLocal2ndIndexSchema(const std::vector<LsiIndex>& value)
{
    local2ndIndexSchema_ = value;
    local2ndIndexSchemaIsSet_ = true;
}

bool DescribeTableResponse::local2ndIndexSchemaIsSet() const
{
    return local2ndIndexSchemaIsSet_;
}

void DescribeTableResponse::unsetlocal2ndIndexSchema()
{
    local2ndIndexSchemaIsSet_ = false;
}

std::vector<GsiIndex>& DescribeTableResponse::getGlobal2ndIndexSchema()
{
    return global2ndIndexSchema_;
}

void DescribeTableResponse::setGlobal2ndIndexSchema(const std::vector<GsiIndex>& value)
{
    global2ndIndexSchema_ = value;
    global2ndIndexSchemaIsSet_ = true;
}

bool DescribeTableResponse::global2ndIndexSchemaIsSet() const
{
    return global2ndIndexSchemaIsSet_;
}

void DescribeTableResponse::unsetglobal2ndIndexSchema()
{
    global2ndIndexSchemaIsSet_ = false;
}

RuntimeInfo DescribeTableResponse::getRuntimeInfo() const
{
    return runtimeInfo_;
}

void DescribeTableResponse::setRuntimeInfo(const RuntimeInfo& value)
{
    runtimeInfo_ = value;
    runtimeInfoIsSet_ = true;
}

bool DescribeTableResponse::runtimeInfoIsSet() const
{
    return runtimeInfoIsSet_;
}

void DescribeTableResponse::unsetruntimeInfo()
{
    runtimeInfoIsSet_ = false;
}

}
}
}
}
}



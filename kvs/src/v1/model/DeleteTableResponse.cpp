

#include "huaweicloud/kvs/v1/model/DeleteTableResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteTableResponse::DeleteTableResponse()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    primaryKeySchemaIsSet_ = false;
    localSecondaryIndexSchemaIsSet_ = false;
    globalSecondaryIndexSchemaIsSet_ = false;
    runTimeInfoIsSet_ = false;
    ttlSpecificationIsSet_ = false;
}

DeleteTableResponse::~DeleteTableResponse() = default;

void DeleteTableResponse::validate()
{
}

bool DeleteTableResponse::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (primaryKeySchemaIsSet_ && !bson_append(builder, "primary_key_schema", primaryKeySchema_)) {
        return false;
    }
    if (localSecondaryIndexSchemaIsSet_ && !bson_append(builder, "local_secondary_index_schema", localSecondaryIndexSchema_)) {
        return false;
    }
    if (globalSecondaryIndexSchemaIsSet_ && !bson_append(builder, "global_secondary_index_schema", globalSecondaryIndexSchema_)) {
        return false;
    }
    if (runTimeInfoIsSet_ && !bson_append(builder, "run_time_info", runTimeInfo_)) {
        return false;
    }
    if (ttlSpecificationIsSet_ && !bson_append(builder, "ttl_specification", ttlSpecification_)) {
        return false;
    }

    return true;
}

bool DeleteTableResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "table_name") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "primary_key_schema") {
            if (!bson_get(it, primaryKeySchema_)) {
                return false;
            }
            primaryKeySchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "local_secondary_index_schema") {
            if (!bson_get(it, localSecondaryIndexSchema_)) {
                return false;
            }
            localSecondaryIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "global_secondary_index_schema") {
            if (!bson_get(it, globalSecondaryIndexSchema_)) {
                return false;
            }
            globalSecondaryIndexSchemaIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "run_time_info") {
            if (!bson_get(it, runTimeInfo_)) {
                return false;
            }
            runTimeInfoIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ttl_specification") {
            if (!bson_get(it, ttlSpecification_)) {
                return false;
            }
            ttlSpecificationIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string DeleteTableResponse::getTableName() const
{
    return tableName_;
}

void DeleteTableResponse::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DeleteTableResponse::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DeleteTableResponse::unsettableName()
{
    tableNameIsSet_ = false;
}

Primary_key_schema DeleteTableResponse::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void DeleteTableResponse::setPrimaryKeySchema(const Primary_key_schema& value)
{
    primaryKeySchema_ = value;
    primaryKeySchemaIsSet_ = true;
}

bool DeleteTableResponse::primaryKeySchemaIsSet() const
{
    return primaryKeySchemaIsSet_;
}

void DeleteTableResponse::unsetprimaryKeySchema()
{
    primaryKeySchemaIsSet_ = false;
}

std::vector<Secondary_index>& DeleteTableResponse::getLocalSecondaryIndexSchema()
{
    return localSecondaryIndexSchema_;
}

void DeleteTableResponse::setLocalSecondaryIndexSchema(const std::vector<Secondary_index>& value)
{
    localSecondaryIndexSchema_ = value;
    localSecondaryIndexSchemaIsSet_ = true;
}

bool DeleteTableResponse::localSecondaryIndexSchemaIsSet() const
{
    return localSecondaryIndexSchemaIsSet_;
}

void DeleteTableResponse::unsetlocalSecondaryIndexSchema()
{
    localSecondaryIndexSchemaIsSet_ = false;
}

std::vector<Global_secondary_index>& DeleteTableResponse::getGlobalSecondaryIndexSchema()
{
    return globalSecondaryIndexSchema_;
}

void DeleteTableResponse::setGlobalSecondaryIndexSchema(const std::vector<Global_secondary_index>& value)
{
    globalSecondaryIndexSchema_ = value;
    globalSecondaryIndexSchemaIsSet_ = true;
}

bool DeleteTableResponse::globalSecondaryIndexSchemaIsSet() const
{
    return globalSecondaryIndexSchemaIsSet_;
}

void DeleteTableResponse::unsetglobalSecondaryIndexSchema()
{
    globalSecondaryIndexSchemaIsSet_ = false;
}

Run_time_info DeleteTableResponse::getRunTimeInfo() const
{
    return runTimeInfo_;
}

void DeleteTableResponse::setRunTimeInfo(const Run_time_info& value)
{
    runTimeInfo_ = value;
    runTimeInfoIsSet_ = true;
}

bool DeleteTableResponse::runTimeInfoIsSet() const
{
    return runTimeInfoIsSet_;
}

void DeleteTableResponse::unsetrunTimeInfo()
{
    runTimeInfoIsSet_ = false;
}

Ttl_specification DeleteTableResponse::getTtlSpecification() const
{
    return ttlSpecification_;
}

void DeleteTableResponse::setTtlSpecification(const Ttl_specification& value)
{
    ttlSpecification_ = value;
    ttlSpecificationIsSet_ = true;
}

bool DeleteTableResponse::ttlSpecificationIsSet() const
{
    return ttlSpecificationIsSet_;
}

void DeleteTableResponse::unsetttlSpecification()
{
    ttlSpecificationIsSet_ = false;
}

}
}
}
}
}



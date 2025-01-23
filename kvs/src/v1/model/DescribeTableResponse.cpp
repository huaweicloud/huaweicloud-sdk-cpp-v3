

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
    localSecondaryIndexSchemaIsSet_ = false;
    globalSecondaryIndexSchemaIsSet_ = false;
    runTimeInfoIsSet_ = false;
    ttlSpecificationIsSet_ = false;
}

DescribeTableResponse::~DescribeTableResponse() = default;

void DescribeTableResponse::validate()
{
}

bool DescribeTableResponse::toBson(Builder &builder) const
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

bool DescribeTableResponse::fromBson(const Viewer &viewer)
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

Primary_key_schema DescribeTableResponse::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void DescribeTableResponse::setPrimaryKeySchema(const Primary_key_schema& value)
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

std::vector<Secondary_index>& DescribeTableResponse::getLocalSecondaryIndexSchema()
{
    return localSecondaryIndexSchema_;
}

void DescribeTableResponse::setLocalSecondaryIndexSchema(const std::vector<Secondary_index>& value)
{
    localSecondaryIndexSchema_ = value;
    localSecondaryIndexSchemaIsSet_ = true;
}

bool DescribeTableResponse::localSecondaryIndexSchemaIsSet() const
{
    return localSecondaryIndexSchemaIsSet_;
}

void DescribeTableResponse::unsetlocalSecondaryIndexSchema()
{
    localSecondaryIndexSchemaIsSet_ = false;
}

std::vector<Global_secondary_index>& DescribeTableResponse::getGlobalSecondaryIndexSchema()
{
    return globalSecondaryIndexSchema_;
}

void DescribeTableResponse::setGlobalSecondaryIndexSchema(const std::vector<Global_secondary_index>& value)
{
    globalSecondaryIndexSchema_ = value;
    globalSecondaryIndexSchemaIsSet_ = true;
}

bool DescribeTableResponse::globalSecondaryIndexSchemaIsSet() const
{
    return globalSecondaryIndexSchemaIsSet_;
}

void DescribeTableResponse::unsetglobalSecondaryIndexSchema()
{
    globalSecondaryIndexSchemaIsSet_ = false;
}

Run_time_info DescribeTableResponse::getRunTimeInfo() const
{
    return runTimeInfo_;
}

void DescribeTableResponse::setRunTimeInfo(const Run_time_info& value)
{
    runTimeInfo_ = value;
    runTimeInfoIsSet_ = true;
}

bool DescribeTableResponse::runTimeInfoIsSet() const
{
    return runTimeInfoIsSet_;
}

void DescribeTableResponse::unsetrunTimeInfo()
{
    runTimeInfoIsSet_ = false;
}

Ttl_specification DescribeTableResponse::getTtlSpecification() const
{
    return ttlSpecification_;
}

void DescribeTableResponse::setTtlSpecification(const Ttl_specification& value)
{
    ttlSpecification_ = value;
    ttlSpecificationIsSet_ = true;
}

bool DescribeTableResponse::ttlSpecificationIsSet() const
{
    return ttlSpecificationIsSet_;
}

void DescribeTableResponse::unsetttlSpecification()
{
    ttlSpecificationIsSet_ = false;
}

}
}
}
}
}



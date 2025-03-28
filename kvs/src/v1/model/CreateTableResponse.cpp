

#include "huaweicloud/kvs/v1/model/CreateTableResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CreateTableResponse::CreateTableResponse()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    billMode_ = "";
    billModeIsSet_ = false;
    provisionedThroughputIsSet_ = false;
    primaryKeySchemaIsSet_ = false;
    localSecondaryIndexSchemaIsSet_ = false;
    globalSecondaryIndexSchemaIsSet_ = false;
    preSplitKeyOptionsIsSet_ = false;
    ttlSpecificationIsSet_ = false;
    sseSpecificationIsSet_ = false;
}

CreateTableResponse::~CreateTableResponse() = default;

void CreateTableResponse::validate()
{
}

bool CreateTableResponse::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (billModeIsSet_ && !bson_append(builder, "bill_mode", billMode_)) {
        return false;
    }
    if (provisionedThroughputIsSet_ && !bson_append(builder, "provisioned_throughput", provisionedThroughput_)) {
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
    if (preSplitKeyOptionsIsSet_ && !bson_append(builder, "pre_split_key_options", preSplitKeyOptions_)) {
        return false;
    }
    if (ttlSpecificationIsSet_ && !bson_append(builder, "ttl_specification", ttlSpecification_)) {
        return false;
    }
    if (sseSpecificationIsSet_ && !bson_append(builder, "sse_specification", sseSpecification_)) {
        return false;
    }

    return true;
}

bool CreateTableResponse::fromBson(const Viewer &viewer)
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
        
        if (key == "bill_mode") {
            if (!bson_get(it, billMode_)) {
                return false;
            }
            billModeIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "provisioned_throughput") {
            if (!bson_get(it, provisionedThroughput_)) {
                return false;
            }
            provisionedThroughputIsSet_ = true;
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
        
        if (key == "pre_split_key_options") {
            if (!bson_get(it, preSplitKeyOptions_)) {
                return false;
            }
            preSplitKeyOptionsIsSet_ = true;
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
        
        if (key == "sse_specification") {
            if (!bson_get(it, sseSpecification_)) {
                return false;
            }
            sseSpecificationIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string CreateTableResponse::getTableName() const
{
    return tableName_;
}

void CreateTableResponse::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CreateTableResponse::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CreateTableResponse::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string CreateTableResponse::getBillMode() const
{
    return billMode_;
}

void CreateTableResponse::setBillMode(const std::string& value)
{
    billMode_ = value;
    billModeIsSet_ = true;
}

bool CreateTableResponse::billModeIsSet() const
{
    return billModeIsSet_;
}

void CreateTableResponse::unsetbillMode()
{
    billModeIsSet_ = false;
}

Provisioned_throughput CreateTableResponse::getProvisionedThroughput() const
{
    return provisionedThroughput_;
}

void CreateTableResponse::setProvisionedThroughput(const Provisioned_throughput& value)
{
    provisionedThroughput_ = value;
    provisionedThroughputIsSet_ = true;
}

bool CreateTableResponse::provisionedThroughputIsSet() const
{
    return provisionedThroughputIsSet_;
}

void CreateTableResponse::unsetprovisionedThroughput()
{
    provisionedThroughputIsSet_ = false;
}

Primary_key_schema CreateTableResponse::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void CreateTableResponse::setPrimaryKeySchema(const Primary_key_schema& value)
{
    primaryKeySchema_ = value;
    primaryKeySchemaIsSet_ = true;
}

bool CreateTableResponse::primaryKeySchemaIsSet() const
{
    return primaryKeySchemaIsSet_;
}

void CreateTableResponse::unsetprimaryKeySchema()
{
    primaryKeySchemaIsSet_ = false;
}

std::vector<Secondary_index>& CreateTableResponse::getLocalSecondaryIndexSchema()
{
    return localSecondaryIndexSchema_;
}

void CreateTableResponse::setLocalSecondaryIndexSchema(const std::vector<Secondary_index>& value)
{
    localSecondaryIndexSchema_ = value;
    localSecondaryIndexSchemaIsSet_ = true;
}

bool CreateTableResponse::localSecondaryIndexSchemaIsSet() const
{
    return localSecondaryIndexSchemaIsSet_;
}

void CreateTableResponse::unsetlocalSecondaryIndexSchema()
{
    localSecondaryIndexSchemaIsSet_ = false;
}

std::vector<Global_secondary_index>& CreateTableResponse::getGlobalSecondaryIndexSchema()
{
    return globalSecondaryIndexSchema_;
}

void CreateTableResponse::setGlobalSecondaryIndexSchema(const std::vector<Global_secondary_index>& value)
{
    globalSecondaryIndexSchema_ = value;
    globalSecondaryIndexSchemaIsSet_ = true;
}

bool CreateTableResponse::globalSecondaryIndexSchemaIsSet() const
{
    return globalSecondaryIndexSchemaIsSet_;
}

void CreateTableResponse::unsetglobalSecondaryIndexSchema()
{
    globalSecondaryIndexSchemaIsSet_ = false;
}

Pre_split_key_options CreateTableResponse::getPreSplitKeyOptions() const
{
    return preSplitKeyOptions_;
}

void CreateTableResponse::setPreSplitKeyOptions(const Pre_split_key_options& value)
{
    preSplitKeyOptions_ = value;
    preSplitKeyOptionsIsSet_ = true;
}

bool CreateTableResponse::preSplitKeyOptionsIsSet() const
{
    return preSplitKeyOptionsIsSet_;
}

void CreateTableResponse::unsetpreSplitKeyOptions()
{
    preSplitKeyOptionsIsSet_ = false;
}

Ttl_specification CreateTableResponse::getTtlSpecification() const
{
    return ttlSpecification_;
}

void CreateTableResponse::setTtlSpecification(const Ttl_specification& value)
{
    ttlSpecification_ = value;
    ttlSpecificationIsSet_ = true;
}

bool CreateTableResponse::ttlSpecificationIsSet() const
{
    return ttlSpecificationIsSet_;
}

void CreateTableResponse::unsetttlSpecification()
{
    ttlSpecificationIsSet_ = false;
}

Sse_specification CreateTableResponse::getSseSpecification() const
{
    return sseSpecification_;
}

void CreateTableResponse::setSseSpecification(const Sse_specification& value)
{
    sseSpecification_ = value;
    sseSpecificationIsSet_ = true;
}

bool CreateTableResponse::sseSpecificationIsSet() const
{
    return sseSpecificationIsSet_;
}

void CreateTableResponse::unsetsseSpecification()
{
    sseSpecificationIsSet_ = false;
}

}
}
}
}
}



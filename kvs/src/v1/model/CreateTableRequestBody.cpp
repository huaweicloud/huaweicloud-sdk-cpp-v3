

#include "huaweicloud/kvs/v1/model/CreateTableRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CreateTableRequestBody::CreateTableRequestBody()
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
    ttlOptionsIsSet_ = false;
}

CreateTableRequestBody::~CreateTableRequestBody() = default;

void CreateTableRequestBody::validate()
{
}

bool CreateTableRequestBody::toBson(Builder &builder) const
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
    if (ttlOptionsIsSet_ && !bson_append(builder, "ttl_options", ttlOptions_)) {
        return false;
    }

    return true;
}

bool CreateTableRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "ttl_options") {
            if (!bson_get(it, ttlOptions_)) {
                return false;
            }
            ttlOptionsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string CreateTableRequestBody::getTableName() const
{
    return tableName_;
}

void CreateTableRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool CreateTableRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void CreateTableRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string CreateTableRequestBody::getBillMode() const
{
    return billMode_;
}

void CreateTableRequestBody::setBillMode(const std::string& value)
{
    billMode_ = value;
    billModeIsSet_ = true;
}

bool CreateTableRequestBody::billModeIsSet() const
{
    return billModeIsSet_;
}

void CreateTableRequestBody::unsetbillMode()
{
    billModeIsSet_ = false;
}

Provisioned_throughput CreateTableRequestBody::getProvisionedThroughput() const
{
    return provisionedThroughput_;
}

void CreateTableRequestBody::setProvisionedThroughput(const Provisioned_throughput& value)
{
    provisionedThroughput_ = value;
    provisionedThroughputIsSet_ = true;
}

bool CreateTableRequestBody::provisionedThroughputIsSet() const
{
    return provisionedThroughputIsSet_;
}

void CreateTableRequestBody::unsetprovisionedThroughput()
{
    provisionedThroughputIsSet_ = false;
}

Primary_key_schema CreateTableRequestBody::getPrimaryKeySchema() const
{
    return primaryKeySchema_;
}

void CreateTableRequestBody::setPrimaryKeySchema(const Primary_key_schema& value)
{
    primaryKeySchema_ = value;
    primaryKeySchemaIsSet_ = true;
}

bool CreateTableRequestBody::primaryKeySchemaIsSet() const
{
    return primaryKeySchemaIsSet_;
}

void CreateTableRequestBody::unsetprimaryKeySchema()
{
    primaryKeySchemaIsSet_ = false;
}

std::vector<Secondary_index>& CreateTableRequestBody::getLocalSecondaryIndexSchema()
{
    return localSecondaryIndexSchema_;
}

void CreateTableRequestBody::setLocalSecondaryIndexSchema(const std::vector<Secondary_index>& value)
{
    localSecondaryIndexSchema_ = value;
    localSecondaryIndexSchemaIsSet_ = true;
}

bool CreateTableRequestBody::localSecondaryIndexSchemaIsSet() const
{
    return localSecondaryIndexSchemaIsSet_;
}

void CreateTableRequestBody::unsetlocalSecondaryIndexSchema()
{
    localSecondaryIndexSchemaIsSet_ = false;
}

std::vector<Global_secondary_index>& CreateTableRequestBody::getGlobalSecondaryIndexSchema()
{
    return globalSecondaryIndexSchema_;
}

void CreateTableRequestBody::setGlobalSecondaryIndexSchema(const std::vector<Global_secondary_index>& value)
{
    globalSecondaryIndexSchema_ = value;
    globalSecondaryIndexSchemaIsSet_ = true;
}

bool CreateTableRequestBody::globalSecondaryIndexSchemaIsSet() const
{
    return globalSecondaryIndexSchemaIsSet_;
}

void CreateTableRequestBody::unsetglobalSecondaryIndexSchema()
{
    globalSecondaryIndexSchemaIsSet_ = false;
}

Pre_split_key_options CreateTableRequestBody::getPreSplitKeyOptions() const
{
    return preSplitKeyOptions_;
}

void CreateTableRequestBody::setPreSplitKeyOptions(const Pre_split_key_options& value)
{
    preSplitKeyOptions_ = value;
    preSplitKeyOptionsIsSet_ = true;
}

bool CreateTableRequestBody::preSplitKeyOptionsIsSet() const
{
    return preSplitKeyOptionsIsSet_;
}

void CreateTableRequestBody::unsetpreSplitKeyOptions()
{
    preSplitKeyOptionsIsSet_ = false;
}

Ttl_options CreateTableRequestBody::getTtlOptions() const
{
    return ttlOptions_;
}

void CreateTableRequestBody::setTtlOptions(const Ttl_options& value)
{
    ttlOptions_ = value;
    ttlOptionsIsSet_ = true;
}

bool CreateTableRequestBody::ttlOptionsIsSet() const
{
    return ttlOptionsIsSet_;
}

void CreateTableRequestBody::unsetttlOptions()
{
    ttlOptionsIsSet_ = false;
}

}
}
}
}
}



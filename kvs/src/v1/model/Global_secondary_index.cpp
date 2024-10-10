

#include "huaweicloud/kvs/v1/model/Global_secondary_index.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Global_secondary_index::Global_secondary_index()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    shardKeyFieldsIsSet_ = false;
    shardMode_ = "";
    shardModeIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
    abstractFieldsIsSet_ = false;
    provisionedThroughputIsSet_ = false;
}

Global_secondary_index::~Global_secondary_index() = default;

void Global_secondary_index::validate()
{
}

bool Global_secondary_index::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "index_name", indexName_)) {
        return false;
    }
    if (shardKeyFieldsIsSet_ && !bson_append(builder, "shard_key_fields", shardKeyFields_)) {
        return false;
    }
    if (shardModeIsSet_ && !bson_append(builder, "shard_mode", shardMode_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "sort_key_fields", sortKeyFields_)) {
        return false;
    }
    if (abstractFieldsIsSet_ && !bson_append(builder, "abstract_fields", abstractFields_)) {
        return false;
    }
    if (provisionedThroughputIsSet_ && !bson_append(builder, "provisioned_throughput", provisionedThroughput_)) {
        return false;
    }

    return true;
}

bool Global_secondary_index::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "index_name") {
            if (!bson_get(it, indexName_)) {
                return false;
            }
            indexNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "shard_key_fields") {
            if (!bson_get(it, shardKeyFields_)) {
                return false;
            }
            shardKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "shard_mode") {
            if (!bson_get(it, shardMode_)) {
                return false;
            }
            shardModeIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "sort_key_fields") {
            if (!bson_get(it, sortKeyFields_)) {
                return false;
            }
            sortKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "abstract_fields") {
            if (!bson_get(it, abstractFields_)) {
                return false;
            }
            abstractFieldsIsSet_ = true;
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
        
        ++it;
    }

    return true;
}

std::string Global_secondary_index::getIndexName() const
{
    return indexName_;
}

void Global_secondary_index::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool Global_secondary_index::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void Global_secondary_index::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::vector<Field>& Global_secondary_index::getShardKeyFields()
{
    return shardKeyFields_;
}

void Global_secondary_index::setShardKeyFields(const std::vector<Field>& value)
{
    shardKeyFields_ = value;
    shardKeyFieldsIsSet_ = true;
}

bool Global_secondary_index::shardKeyFieldsIsSet() const
{
    return shardKeyFieldsIsSet_;
}

void Global_secondary_index::unsetshardKeyFields()
{
    shardKeyFieldsIsSet_ = false;
}

std::string Global_secondary_index::getShardMode() const
{
    return shardMode_;
}

void Global_secondary_index::setShardMode(const std::string& value)
{
    shardMode_ = value;
    shardModeIsSet_ = true;
}

bool Global_secondary_index::shardModeIsSet() const
{
    return shardModeIsSet_;
}

void Global_secondary_index::unsetshardMode()
{
    shardModeIsSet_ = false;
}

std::vector<Field>& Global_secondary_index::getSortKeyFields()
{
    return sortKeyFields_;
}

void Global_secondary_index::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool Global_secondary_index::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void Global_secondary_index::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

std::vector<std::string>& Global_secondary_index::getAbstractFields()
{
    return abstractFields_;
}

void Global_secondary_index::setAbstractFields(const std::vector<std::string>& value)
{
    abstractFields_ = value;
    abstractFieldsIsSet_ = true;
}

bool Global_secondary_index::abstractFieldsIsSet() const
{
    return abstractFieldsIsSet_;
}

void Global_secondary_index::unsetabstractFields()
{
    abstractFieldsIsSet_ = false;
}

Provisioned_throughput Global_secondary_index::getProvisionedThroughput() const
{
    return provisionedThroughput_;
}

void Global_secondary_index::setProvisionedThroughput(const Provisioned_throughput& value)
{
    provisionedThroughput_ = value;
    provisionedThroughputIsSet_ = true;
}

bool Global_secondary_index::provisionedThroughputIsSet() const
{
    return provisionedThroughputIsSet_;
}

void Global_secondary_index::unsetprovisionedThroughput()
{
    provisionedThroughputIsSet_ = false;
}

}
}
}
}
}



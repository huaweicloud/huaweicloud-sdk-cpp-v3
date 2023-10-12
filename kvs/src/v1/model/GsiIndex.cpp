

#include "huaweicloud/kvs/v1/model/GsiIndex.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GsiIndex::GsiIndex()
{
    indexName_ = "";
    indexNameIsSet_ = false;
    shardKeyFieldsIsSet_ = false;
    shardMode_ = "";
    shardModeIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
    abstractFieldsIsSet_ = false;
}

GsiIndex::~GsiIndex() = default;

void GsiIndex::validate()
{
}

bool GsiIndex::toBson(Builder &builder) const
{

    if (indexNameIsSet_ && !bson_append(builder, "IndexName", indexName_)) {
        return false;
    }
    if (shardKeyFieldsIsSet_ && !bson_append(builder, "ShardKeyFields", shardKeyFields_)) {
        return false;
    }
    if (shardModeIsSet_ && !bson_append(builder, "ShardMode", shardMode_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "SortKeyFields", sortKeyFields_)) {
        return false;
    }
    if (abstractFieldsIsSet_ && !bson_append(builder, "AbstractFields", abstractFields_)) {
        return false;
    }

    return true;
}

bool GsiIndex::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "IndexName") {
            if (!bson_get(it, indexName_)) {
                return false;
            }
            indexNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ShardKeyFields") {
            if (!bson_get(it, shardKeyFields_)) {
                return false;
            }
            shardKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ShardMode") {
            if (!bson_get(it, shardMode_)) {
                return false;
            }
            shardModeIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "SortKeyFields") {
            if (!bson_get(it, sortKeyFields_)) {
                return false;
            }
            sortKeyFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "AbstractFields") {
            if (!bson_get(it, abstractFields_)) {
                return false;
            }
            abstractFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string GsiIndex::getIndexName() const
{
    return indexName_;
}

void GsiIndex::setIndexName(const std::string& value)
{
    indexName_ = value;
    indexNameIsSet_ = true;
}

bool GsiIndex::indexNameIsSet() const
{
    return indexNameIsSet_;
}

void GsiIndex::unsetindexName()
{
    indexNameIsSet_ = false;
}

std::vector<Field>& GsiIndex::getShardKeyFields()
{
    return shardKeyFields_;
}

void GsiIndex::setShardKeyFields(const std::vector<Field>& value)
{
    shardKeyFields_ = value;
    shardKeyFieldsIsSet_ = true;
}

bool GsiIndex::shardKeyFieldsIsSet() const
{
    return shardKeyFieldsIsSet_;
}

void GsiIndex::unsetshardKeyFields()
{
    shardKeyFieldsIsSet_ = false;
}

std::string GsiIndex::getShardMode() const
{
    return shardMode_;
}

void GsiIndex::setShardMode(const std::string& value)
{
    shardMode_ = value;
    shardModeIsSet_ = true;
}

bool GsiIndex::shardModeIsSet() const
{
    return shardModeIsSet_;
}

void GsiIndex::unsetshardMode()
{
    shardModeIsSet_ = false;
}

std::vector<Field>& GsiIndex::getSortKeyFields()
{
    return sortKeyFields_;
}

void GsiIndex::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool GsiIndex::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void GsiIndex::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

std::vector<std::string>& GsiIndex::getAbstractFields()
{
    return abstractFields_;
}

void GsiIndex::setAbstractFields(const std::vector<std::string>& value)
{
    abstractFields_ = value;
    abstractFieldsIsSet_ = true;
}

bool GsiIndex::abstractFieldsIsSet() const
{
    return abstractFieldsIsSet_;
}

void GsiIndex::unsetabstractFields()
{
    abstractFieldsIsSet_ = false;
}

}
}
}
}
}



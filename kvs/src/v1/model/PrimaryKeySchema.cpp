

#include "huaweicloud/kvs/v1/model/PrimaryKeySchema.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PrimaryKeySchema::PrimaryKeySchema()
{
    shardKeyFieldsIsSet_ = false;
    shardMode_ = "";
    shardModeIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
}

PrimaryKeySchema::~PrimaryKeySchema() = default;

void PrimaryKeySchema::validate()
{
}

bool PrimaryKeySchema::toBson(Builder &builder) const
{

    if (shardKeyFieldsIsSet_ && !bson_append(builder, "ShardKeyFields", shardKeyFields_)) {
        return false;
    }
    if (shardModeIsSet_ && !bson_append(builder, "ShardMode", shardMode_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "SortKeyFields", sortKeyFields_)) {
        return false;
    }

    return true;
}

bool PrimaryKeySchema::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
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
        
        ++it;
    }

    return true;
}

std::vector<Field>& PrimaryKeySchema::getShardKeyFields()
{
    return shardKeyFields_;
}

void PrimaryKeySchema::setShardKeyFields(const std::vector<Field>& value)
{
    shardKeyFields_ = value;
    shardKeyFieldsIsSet_ = true;
}

bool PrimaryKeySchema::shardKeyFieldsIsSet() const
{
    return shardKeyFieldsIsSet_;
}

void PrimaryKeySchema::unsetshardKeyFields()
{
    shardKeyFieldsIsSet_ = false;
}

std::string PrimaryKeySchema::getShardMode() const
{
    return shardMode_;
}

void PrimaryKeySchema::setShardMode(const std::string& value)
{
    shardMode_ = value;
    shardModeIsSet_ = true;
}

bool PrimaryKeySchema::shardModeIsSet() const
{
    return shardModeIsSet_;
}

void PrimaryKeySchema::unsetshardMode()
{
    shardModeIsSet_ = false;
}

std::vector<Field>& PrimaryKeySchema::getSortKeyFields()
{
    return sortKeyFields_;
}

void PrimaryKeySchema::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool PrimaryKeySchema::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void PrimaryKeySchema::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

}
}
}
}
}



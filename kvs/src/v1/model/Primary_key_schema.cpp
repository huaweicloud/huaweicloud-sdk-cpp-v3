

#include "huaweicloud/kvs/v1/model/Primary_key_schema.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Primary_key_schema::Primary_key_schema()
{
    shardKeyFieldsIsSet_ = false;
    shardMode_ = "";
    shardModeIsSet_ = false;
    sortKeyFieldsIsSet_ = false;
}

Primary_key_schema::~Primary_key_schema() = default;

void Primary_key_schema::validate()
{
}

bool Primary_key_schema::toBson(Builder &builder) const
{

    if (shardKeyFieldsIsSet_ && !bson_append(builder, "shard_key_fields", shardKeyFields_)) {
        return false;
    }
    if (shardModeIsSet_ && !bson_append(builder, "shard_mode", shardMode_)) {
        return false;
    }
    if (sortKeyFieldsIsSet_ && !bson_append(builder, "sort_key_fields", sortKeyFields_)) {
        return false;
    }

    return true;
}

bool Primary_key_schema::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
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
        
        ++it;
    }

    return true;
}

std::vector<Field>& Primary_key_schema::getShardKeyFields()
{
    return shardKeyFields_;
}

void Primary_key_schema::setShardKeyFields(const std::vector<Field>& value)
{
    shardKeyFields_ = value;
    shardKeyFieldsIsSet_ = true;
}

bool Primary_key_schema::shardKeyFieldsIsSet() const
{
    return shardKeyFieldsIsSet_;
}

void Primary_key_schema::unsetshardKeyFields()
{
    shardKeyFieldsIsSet_ = false;
}

std::string Primary_key_schema::getShardMode() const
{
    return shardMode_;
}

void Primary_key_schema::setShardMode(const std::string& value)
{
    shardMode_ = value;
    shardModeIsSet_ = true;
}

bool Primary_key_schema::shardModeIsSet() const
{
    return shardModeIsSet_;
}

void Primary_key_schema::unsetshardMode()
{
    shardModeIsSet_ = false;
}

std::vector<Field>& Primary_key_schema::getSortKeyFields()
{
    return sortKeyFields_;
}

void Primary_key_schema::setSortKeyFields(const std::vector<Field>& value)
{
    sortKeyFields_ = value;
    sortKeyFieldsIsSet_ = true;
}

bool Primary_key_schema::sortKeyFieldsIsSet() const
{
    return sortKeyFieldsIsSet_;
}

void Primary_key_schema::unsetsortKeyFields()
{
    sortKeyFieldsIsSet_ = false;
}

}
}
}
}
}



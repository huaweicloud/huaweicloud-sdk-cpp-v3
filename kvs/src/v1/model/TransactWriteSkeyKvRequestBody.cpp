

#include "huaweicloud/kvs/v1/model/TransactWriteSkeyKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactWriteSkeyKvRequestBody::TransactWriteSkeyKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    shardKeyIsSet_ = false;
    shardKeyKvOpersIsSet_ = false;
}

TransactWriteSkeyKvRequestBody::~TransactWriteSkeyKvRequestBody() = default;

void TransactWriteSkeyKvRequestBody::validate()
{
}

bool TransactWriteSkeyKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (shardKeyIsSet_ && !bson_append(builder, "shard_key", shardKey_)) {
        return false;
    }
    if (shardKeyKvOpersIsSet_ && !bson_append(builder, "shard_key_kv_opers", shardKeyKvOpers_)) {
        return false;
    }

    return true;
}

bool TransactWriteSkeyKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "shard_key") {
            if (!bson_get(it, shardKey_)) {
                return false;
            }
            shardKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "shard_key_kv_opers") {
            if (!bson_get(it, shardKeyKvOpers_)) {
                return false;
            }
            shardKeyKvOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string TransactWriteSkeyKvRequestBody::getTableName() const
{
    return tableName_;
}

void TransactWriteSkeyKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TransactWriteSkeyKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TransactWriteSkeyKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

Document TransactWriteSkeyKvRequestBody::getShardKey() const
{
    return shardKey_;
}

void TransactWriteSkeyKvRequestBody::setShardKey(const Document& value)
{
    shardKey_ = value;
    shardKeyIsSet_ = true;
}

bool TransactWriteSkeyKvRequestBody::shardKeyIsSet() const
{
    return shardKeyIsSet_;
}

void TransactWriteSkeyKvRequestBody::unsetshardKey()
{
    shardKeyIsSet_ = false;
}

std::vector<Shard_key_kv_oper_item>& TransactWriteSkeyKvRequestBody::getShardKeyKvOpers()
{
    return shardKeyKvOpers_;
}

void TransactWriteSkeyKvRequestBody::setShardKeyKvOpers(const std::vector<Shard_key_kv_oper_item>& value)
{
    shardKeyKvOpers_ = value;
    shardKeyKvOpersIsSet_ = true;
}

bool TransactWriteSkeyKvRequestBody::shardKeyKvOpersIsSet() const
{
    return shardKeyKvOpersIsSet_;
}

void TransactWriteSkeyKvRequestBody::unsetshardKeyKvOpers()
{
    shardKeyKvOpersIsSet_ = false;
}

}
}
}
}
}



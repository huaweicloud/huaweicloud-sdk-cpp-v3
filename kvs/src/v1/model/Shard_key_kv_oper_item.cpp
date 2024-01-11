

#include "huaweicloud/kvs/v1/model/Shard_key_kv_oper_item.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Shard_key_kv_oper_item::Shard_key_kv_oper_item()
{
    checkShardKeyKvIsSet_ = false;
    putShardKeyKvIsSet_ = false;
    deleteShardKeyKvIsSet_ = false;
    updateShardKeyKvIsSet_ = false;
}

Shard_key_kv_oper_item::~Shard_key_kv_oper_item() = default;

void Shard_key_kv_oper_item::validate()
{
}

bool Shard_key_kv_oper_item::toBson(Builder &builder) const
{

    if (checkShardKeyKvIsSet_ && !bson_append(builder, "check_shard_key_kv", checkShardKeyKv_)) {
        return false;
    }
    if (putShardKeyKvIsSet_ && !bson_append(builder, "put_shard_key_kv", putShardKeyKv_)) {
        return false;
    }
    if (deleteShardKeyKvIsSet_ && !bson_append(builder, "delete_shard_key_kv", deleteShardKeyKv_)) {
        return false;
    }
    if (updateShardKeyKvIsSet_ && !bson_append(builder, "update_shard_key_kv", updateShardKeyKv_)) {
        return false;
    }

    return true;
}

bool Shard_key_kv_oper_item::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "check_shard_key_kv") {
            if (!bson_get(it, checkShardKeyKv_)) {
                return false;
            }
            checkShardKeyKvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "put_shard_key_kv") {
            if (!bson_get(it, putShardKeyKv_)) {
                return false;
            }
            putShardKeyKvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "delete_shard_key_kv") {
            if (!bson_get(it, deleteShardKeyKv_)) {
                return false;
            }
            deleteShardKeyKvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "update_shard_key_kv") {
            if (!bson_get(it, updateShardKeyKv_)) {
                return false;
            }
            updateShardKeyKvIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Check_shard_key_kv Shard_key_kv_oper_item::getCheckShardKeyKv() const
{
    return checkShardKeyKv_;
}

void Shard_key_kv_oper_item::setCheckShardKeyKv(const Check_shard_key_kv& value)
{
    checkShardKeyKv_ = value;
    checkShardKeyKvIsSet_ = true;
}

bool Shard_key_kv_oper_item::checkShardKeyKvIsSet() const
{
    return checkShardKeyKvIsSet_;
}

void Shard_key_kv_oper_item::unsetcheckShardKeyKv()
{
    checkShardKeyKvIsSet_ = false;
}

Put_shard_key_kv Shard_key_kv_oper_item::getPutShardKeyKv() const
{
    return putShardKeyKv_;
}

void Shard_key_kv_oper_item::setPutShardKeyKv(const Put_shard_key_kv& value)
{
    putShardKeyKv_ = value;
    putShardKeyKvIsSet_ = true;
}

bool Shard_key_kv_oper_item::putShardKeyKvIsSet() const
{
    return putShardKeyKvIsSet_;
}

void Shard_key_kv_oper_item::unsetputShardKeyKv()
{
    putShardKeyKvIsSet_ = false;
}

Delete_shard_key_kv Shard_key_kv_oper_item::getDeleteShardKeyKv() const
{
    return deleteShardKeyKv_;
}

void Shard_key_kv_oper_item::setDeleteShardKeyKv(const Delete_shard_key_kv& value)
{
    deleteShardKeyKv_ = value;
    deleteShardKeyKvIsSet_ = true;
}

bool Shard_key_kv_oper_item::deleteShardKeyKvIsSet() const
{
    return deleteShardKeyKvIsSet_;
}

void Shard_key_kv_oper_item::unsetdeleteShardKeyKv()
{
    deleteShardKeyKvIsSet_ = false;
}

Update_shard_key_kv Shard_key_kv_oper_item::getUpdateShardKeyKv() const
{
    return updateShardKeyKv_;
}

void Shard_key_kv_oper_item::setUpdateShardKeyKv(const Update_shard_key_kv& value)
{
    updateShardKeyKv_ = value;
    updateShardKeyKvIsSet_ = true;
}

bool Shard_key_kv_oper_item::updateShardKeyKvIsSet() const
{
    return updateShardKeyKvIsSet_;
}

void Shard_key_kv_oper_item::unsetupdateShardKeyKv()
{
    updateShardKeyKvIsSet_ = false;
}

}
}
}
}
}



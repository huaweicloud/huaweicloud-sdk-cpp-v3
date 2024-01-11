

#include "huaweicloud/kvs/v1/model/Update_shard_key_kv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_shard_key_kv::Update_shard_key_kv()
{
    conditionExpressionIsSet_ = false;
    sortKeyIsSet_ = false;
    updateFieldsIsSet_ = false;
    updateBlobIsSet_ = false;
}

Update_shard_key_kv::~Update_shard_key_kv() = default;

void Update_shard_key_kv::validate()
{
}

bool Update_shard_key_kv::toBson(Builder &builder) const
{

    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }
    if (sortKeyIsSet_ && !bson_append(builder, "sort_key", sortKey_)) {
        return false;
    }
    if (updateFieldsIsSet_ && !bson_append(builder, "update_fields", updateFields_)) {
        return false;
    }
    if (updateBlobIsSet_ && !bson_append(builder, "update_blob", updateBlob_)) {
        return false;
    }

    return true;
}

bool Update_shard_key_kv::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "condition_expression") {
            if (!bson_get(it, conditionExpression_)) {
                return false;
            }
            conditionExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "sort_key") {
            if (!bson_get(it, sortKey_)) {
                return false;
            }
            sortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "update_fields") {
            if (!bson_get(it, updateFields_)) {
                return false;
            }
            updateFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "update_blob") {
            if (!bson_get(it, updateBlob_)) {
                return false;
            }
            updateBlobIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Condition_expression Update_shard_key_kv::getConditionExpression() const
{
    return conditionExpression_;
}

void Update_shard_key_kv::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool Update_shard_key_kv::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void Update_shard_key_kv::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

Document Update_shard_key_kv::getSortKey() const
{
    return sortKey_;
}

void Update_shard_key_kv::setSortKey(const Document& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool Update_shard_key_kv::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void Update_shard_key_kv::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

Update_fields Update_shard_key_kv::getUpdateFields() const
{
    return updateFields_;
}

void Update_shard_key_kv::setUpdateFields(const Update_fields& value)
{
    updateFields_ = value;
    updateFieldsIsSet_ = true;
}

bool Update_shard_key_kv::updateFieldsIsSet() const
{
    return updateFieldsIsSet_;
}

void Update_shard_key_kv::unsetupdateFields()
{
    updateFieldsIsSet_ = false;
}

Update_blob Update_shard_key_kv::getUpdateBlob() const
{
    return updateBlob_;
}

void Update_shard_key_kv::setUpdateBlob(const Update_blob& value)
{
    updateBlob_ = value;
    updateBlobIsSet_ = true;
}

bool Update_shard_key_kv::updateBlobIsSet() const
{
    return updateBlobIsSet_;
}

void Update_shard_key_kv::unsetupdateBlob()
{
    updateBlobIsSet_ = false;
}

}
}
}
}
}



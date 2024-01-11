

#include "huaweicloud/kvs/v1/model/Put_shard_key_kv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Put_shard_key_kv::Put_shard_key_kv()
{
    conditionExpressionIsSet_ = false;
    kvDocIsSet_ = false;
    kvBlobIsSet_ = false;
}

Put_shard_key_kv::~Put_shard_key_kv() = default;

void Put_shard_key_kv::validate()
{
}

bool Put_shard_key_kv::toBson(Builder &builder) const
{

    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "kv_doc", kvDoc_)) {
        return false;
    }
    if (kvBlobIsSet_ && !bson_append(builder, "kv_blob", kvBlob_)) {
        return false;
    }

    return true;
}

bool Put_shard_key_kv::fromBson(const Viewer &viewer)
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
        
        if (key == "kv_doc") {
            if (!bson_get(it, kvDoc_)) {
                return false;
            }
            kvDocIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "kv_blob") {
            if (!bson_get(it, kvBlob_)) {
                return false;
            }
            kvBlobIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Condition_expression Put_shard_key_kv::getConditionExpression() const
{
    return conditionExpression_;
}

void Put_shard_key_kv::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool Put_shard_key_kv::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void Put_shard_key_kv::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

Document Put_shard_key_kv::getKvDoc() const
{
    return kvDoc_;
}

void Put_shard_key_kv::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool Put_shard_key_kv::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void Put_shard_key_kv::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

Kv_blob Put_shard_key_kv::getKvBlob() const
{
    return kvBlob_;
}

void Put_shard_key_kv::setKvBlob(const Kv_blob& value)
{
    kvBlob_ = value;
    kvBlobIsSet_ = true;
}

bool Put_shard_key_kv::kvBlobIsSet() const
{
    return kvBlobIsSet_;
}

void Put_shard_key_kv::unsetkvBlob()
{
    kvBlobIsSet_ = false;
}

}
}
}
}
}



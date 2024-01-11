

#include "huaweicloud/kvs/v1/model/Check_shard_key_kv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Check_shard_key_kv::Check_shard_key_kv()
{
    conditionExpressionIsSet_ = false;
    sortKeyIsSet_ = false;
}

Check_shard_key_kv::~Check_shard_key_kv() = default;

void Check_shard_key_kv::validate()
{
}

bool Check_shard_key_kv::toBson(Builder &builder) const
{

    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }
    if (sortKeyIsSet_ && !bson_append(builder, "sort_key", sortKey_)) {
        return false;
    }

    return true;
}

bool Check_shard_key_kv::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

Condition_expression Check_shard_key_kv::getConditionExpression() const
{
    return conditionExpression_;
}

void Check_shard_key_kv::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool Check_shard_key_kv::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void Check_shard_key_kv::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

Document Check_shard_key_kv::getSortKey() const
{
    return sortKey_;
}

void Check_shard_key_kv::setSortKey(const Document& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool Check_shard_key_kv::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void Check_shard_key_kv::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

}
}
}
}
}



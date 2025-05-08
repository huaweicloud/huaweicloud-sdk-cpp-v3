

#include "huaweicloud/kvs/v1/model/Update_kv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_kv::Update_kv()
{
    operId_ = 0;
    operIdIsSet_ = false;
    primaryKeyIsSet_ = false;
    updateFieldsIsSet_ = false;
    conditionExpressionIsSet_ = false;
}

Update_kv::~Update_kv() = default;

void Update_kv::validate()
{
}

bool Update_kv::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "oper_id", operId_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (updateFieldsIsSet_ && !bson_append(builder, "update_fields", updateFields_)) {
        return false;
    }
    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }

    return true;
}

bool Update_kv::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "oper_id") {
            if (!bson_get(it, operId_)) {
                return false;
            }
            operIdIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "primary_key") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
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
        
        if (key == "condition_expression") {
            if (!bson_get(it, conditionExpression_)) {
                return false;
            }
            conditionExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t Update_kv::getOperId() const
{
    return operId_;
}

void Update_kv::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool Update_kv::operIdIsSet() const
{
    return operIdIsSet_;
}

void Update_kv::unsetoperId()
{
    operIdIsSet_ = false;
}

Document Update_kv::getPrimaryKey() const
{
    return primaryKey_;
}

void Update_kv::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool Update_kv::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void Update_kv::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

Update_fields Update_kv::getUpdateFields() const
{
    return updateFields_;
}

void Update_kv::setUpdateFields(const Update_fields& value)
{
    updateFields_ = value;
    updateFieldsIsSet_ = true;
}

bool Update_kv::updateFieldsIsSet() const
{
    return updateFieldsIsSet_;
}

void Update_kv::unsetupdateFields()
{
    updateFieldsIsSet_ = false;
}

Condition_expression Update_kv::getConditionExpression() const
{
    return conditionExpression_;
}

void Update_kv::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool Update_kv::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void Update_kv::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/kvs/v1/model/UpdateKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




UpdateKvRequestBody::UpdateKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    primaryKeyIsSet_ = false;
    conditionExpressionIsSet_ = false;
    updateFieldsIsSet_ = false;
}

UpdateKvRequestBody::~UpdateKvRequestBody() = default;

void UpdateKvRequestBody::validate()
{
}

bool UpdateKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (conditionExpressionIsSet_ && !bson_append(builder, "condition_expression", conditionExpression_)) {
        return false;
    }
    if (updateFieldsIsSet_ && !bson_append(builder, "update_fields", updateFields_)) {
        return false;
    }

    return true;
}

bool UpdateKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "primary_key") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
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
        
        if (key == "update_fields") {
            if (!bson_get(it, updateFields_)) {
                return false;
            }
            updateFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string UpdateKvRequestBody::getTableName() const
{
    return tableName_;
}

void UpdateKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool UpdateKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void UpdateKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

Document UpdateKvRequestBody::getPrimaryKey() const
{
    return primaryKey_;
}

void UpdateKvRequestBody::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool UpdateKvRequestBody::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void UpdateKvRequestBody::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

Condition_expression UpdateKvRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void UpdateKvRequestBody::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool UpdateKvRequestBody::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void UpdateKvRequestBody::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

Update_fields UpdateKvRequestBody::getUpdateFields() const
{
    return updateFields_;
}

void UpdateKvRequestBody::setUpdateFields(const Update_fields& value)
{
    updateFields_ = value;
    updateFieldsIsSet_ = true;
}

bool UpdateKvRequestBody::updateFieldsIsSet() const
{
    return updateFieldsIsSet_;
}

void UpdateKvRequestBody::unsetupdateFields()
{
    updateFieldsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/kvs/v1/model/DeleteKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteKvRequestBody::DeleteKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    primaryKeyIsSet_ = false;
    conditionExpressionIsSet_ = false;
}

DeleteKvRequestBody::~DeleteKvRequestBody() = default;

void DeleteKvRequestBody::validate()
{
}

bool DeleteKvRequestBody::toBson(Builder &builder) const
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

    return true;
}

bool DeleteKvRequestBody::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

std::string DeleteKvRequestBody::getTableName() const
{
    return tableName_;
}

void DeleteKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DeleteKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DeleteKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

Document DeleteKvRequestBody::getPrimaryKey() const
{
    return primaryKey_;
}

void DeleteKvRequestBody::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool DeleteKvRequestBody::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void DeleteKvRequestBody::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

Condition_expression DeleteKvRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void DeleteKvRequestBody::setConditionExpression(const Condition_expression& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool DeleteKvRequestBody::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void DeleteKvRequestBody::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

}
}
}
}
}



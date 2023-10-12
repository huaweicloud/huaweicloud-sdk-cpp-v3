

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
    expressionVarDefineIsSet_ = false;
    projectionFieldsIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

DeleteKvRequestBody::~DeleteKvRequestBody() = default;

void DeleteKvRequestBody::validate()
{
}

bool DeleteKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }
    if (conditionExpressionIsSet_ && !bson_append(builder, "ConditionExpression", conditionExpression_)) {
        return false;
    }
    if (expressionVarDefineIsSet_ && !bson_append(builder, "ExpressionVarDefine", expressionVarDefine_)) {
        return false;
    }
    if (projectionFieldsIsSet_ && !bson_append(builder, "ProjectionFields", projectionFields_)) {
        return false;
    }
    if (returnPartialBlobIsSet_ && !bson_append(builder, "ReturnPartialBlob", returnPartialBlob_)) {
        return false;
    }

    return true;
}

bool DeleteKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableName") {
            if (!bson_get(it, tableName_)) {
                return false;
            }
            tableNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "PrimaryKey") {
            if (!bson_get(it, primaryKey_)) {
                return false;
            }
            primaryKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ConditionExpression") {
            if (!bson_get(it, conditionExpression_)) {
                return false;
            }
            conditionExpressionIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ExpressionVarDefine") {
            if (!bson_get(it, expressionVarDefine_)) {
                return false;
            }
            expressionVarDefineIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ProjectionFields") {
            if (!bson_get(it, projectionFields_)) {
                return false;
            }
            projectionFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ReturnPartialBlob") {
            if (!bson_get(it, returnPartialBlob_)) {
                return false;
            }
            returnPartialBlobIsSet_ = true;
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

ConditionExpression DeleteKvRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void DeleteKvRequestBody::setConditionExpression(const ConditionExpression& value)
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

Document DeleteKvRequestBody::getExpressionVarDefine() const
{
    return expressionVarDefine_;
}

void DeleteKvRequestBody::setExpressionVarDefine(const Document& value)
{
    expressionVarDefine_ = value;
    expressionVarDefineIsSet_ = true;
}

bool DeleteKvRequestBody::expressionVarDefineIsSet() const
{
    return expressionVarDefineIsSet_;
}

void DeleteKvRequestBody::unsetexpressionVarDefine()
{
    expressionVarDefineIsSet_ = false;
}

std::vector<std::string>& DeleteKvRequestBody::getProjectionFields()
{
    return projectionFields_;
}

void DeleteKvRequestBody::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool DeleteKvRequestBody::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void DeleteKvRequestBody::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

ReturnPartialBlob DeleteKvRequestBody::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void DeleteKvRequestBody::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool DeleteKvRequestBody::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void DeleteKvRequestBody::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}



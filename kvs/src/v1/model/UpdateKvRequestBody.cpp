

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
    kvOptionsIsSet_ = false;
    updateFieldsIsSet_ = false;
    projectionFieldsIsSet_ = false;
    updateBlobIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

UpdateKvRequestBody::~UpdateKvRequestBody() = default;

void UpdateKvRequestBody::validate()
{
}

bool UpdateKvRequestBody::toBson(Builder &builder) const
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
    if (kvOptionsIsSet_ && !bson_append(builder, "KvOptions", kvOptions_)) {
        return false;
    }
    if (updateFieldsIsSet_ && !bson_append(builder, "UpdateFields", updateFields_)) {
        return false;
    }
    if (projectionFieldsIsSet_ && !bson_append(builder, "ProjectionFields", projectionFields_)) {
        return false;
    }
    if (updateBlobIsSet_ && !bson_append(builder, "UpdateBlob", updateBlob_)) {
        return false;
    }
    if (returnPartialBlobIsSet_ && !bson_append(builder, "ReturnPartialBlob", returnPartialBlob_)) {
        return false;
    }

    return true;
}

bool UpdateKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "KvOptions") {
            if (!bson_get(it, kvOptions_)) {
                return false;
            }
            kvOptionsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "UpdateFields") {
            if (!bson_get(it, updateFields_)) {
                return false;
            }
            updateFieldsIsSet_ = true;
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
        
        if (key == "UpdateBlob") {
            if (!bson_get(it, updateBlob_)) {
                return false;
            }
            updateBlobIsSet_ = true;
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

ConditionExpression UpdateKvRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void UpdateKvRequestBody::setConditionExpression(const ConditionExpression& value)
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

KvOptions UpdateKvRequestBody::getKvOptions() const
{
    return kvOptions_;
}

void UpdateKvRequestBody::setKvOptions(const KvOptions& value)
{
    kvOptions_ = value;
    kvOptionsIsSet_ = true;
}

bool UpdateKvRequestBody::kvOptionsIsSet() const
{
    return kvOptionsIsSet_;
}

void UpdateKvRequestBody::unsetkvOptions()
{
    kvOptionsIsSet_ = false;
}

UpdateFields UpdateKvRequestBody::getUpdateFields() const
{
    return updateFields_;
}

void UpdateKvRequestBody::setUpdateFields(const UpdateFields& value)
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

std::vector<std::string>& UpdateKvRequestBody::getProjectionFields()
{
    return projectionFields_;
}

void UpdateKvRequestBody::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool UpdateKvRequestBody::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void UpdateKvRequestBody::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

UpdateBlob UpdateKvRequestBody::getUpdateBlob() const
{
    return updateBlob_;
}

void UpdateKvRequestBody::setUpdateBlob(const UpdateBlob& value)
{
    updateBlob_ = value;
    updateBlobIsSet_ = true;
}

bool UpdateKvRequestBody::updateBlobIsSet() const
{
    return updateBlobIsSet_;
}

void UpdateKvRequestBody::unsetupdateBlob()
{
    updateBlobIsSet_ = false;
}

ReturnPartialBlob UpdateKvRequestBody::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void UpdateKvRequestBody::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool UpdateKvRequestBody::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void UpdateKvRequestBody::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}



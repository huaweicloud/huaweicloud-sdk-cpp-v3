

#include "huaweicloud/kvs/v1/model/GetKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




GetKvRequestBody::GetKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    consistency_ = false;
    consistencyIsSet_ = false;
    primaryKeyIsSet_ = false;
    projectionFieldsIsSet_ = false;
    returnPartialBlobIsSet_ = false;
}

GetKvRequestBody::~GetKvRequestBody() = default;

void GetKvRequestBody::validate()
{
}

bool GetKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (consistencyIsSet_ && !bson_append(builder, "Consistency", consistency_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
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

bool GetKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "Consistency") {
            if (!bson_get(it, consistency_)) {
                return false;
            }
            consistencyIsSet_ = true;
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

std::string GetKvRequestBody::getTableName() const
{
    return tableName_;
}

void GetKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool GetKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void GetKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

bool GetKvRequestBody::isConsistency() const
{
    return consistency_;
}

void GetKvRequestBody::setConsistency(bool value)
{
    consistency_ = value;
    consistencyIsSet_ = true;
}

bool GetKvRequestBody::consistencyIsSet() const
{
    return consistencyIsSet_;
}

void GetKvRequestBody::unsetconsistency()
{
    consistencyIsSet_ = false;
}

Document GetKvRequestBody::getPrimaryKey() const
{
    return primaryKey_;
}

void GetKvRequestBody::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool GetKvRequestBody::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void GetKvRequestBody::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

std::vector<std::string>& GetKvRequestBody::getProjectionFields()
{
    return projectionFields_;
}

void GetKvRequestBody::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool GetKvRequestBody::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void GetKvRequestBody::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

ReturnPartialBlob GetKvRequestBody::getReturnPartialBlob() const
{
    return returnPartialBlob_;
}

void GetKvRequestBody::setReturnPartialBlob(const ReturnPartialBlob& value)
{
    returnPartialBlob_ = value;
    returnPartialBlobIsSet_ = true;
}

bool GetKvRequestBody::returnPartialBlobIsSet() const
{
    return returnPartialBlobIsSet_;
}

void GetKvRequestBody::unsetreturnPartialBlob()
{
    returnPartialBlobIsSet_ = false;
}

}
}
}
}
}



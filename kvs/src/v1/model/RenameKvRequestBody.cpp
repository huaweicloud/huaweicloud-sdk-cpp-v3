

#include "huaweicloud/kvs/v1/model/RenameKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




RenameKvRequestBody::RenameKvRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    primaryKeyIsSet_ = false;
    newSortKeyIsSet_ = false;
    kvOptionsIsSet_ = false;
    updateBlobAttrIsSet_ = false;
    returnBlobAttrIsSet_ = false;
}

RenameKvRequestBody::~RenameKvRequestBody() = default;

void RenameKvRequestBody::validate()
{
}

bool RenameKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "PrimaryKey", primaryKey_)) {
        return false;
    }
    if (newSortKeyIsSet_ && !bson_append(builder, "NewSortKey", newSortKey_)) {
        return false;
    }
    if (kvOptionsIsSet_ && !bson_append(builder, "KvOptions", kvOptions_)) {
        return false;
    }
    if (updateBlobAttrIsSet_ && !bson_append(builder, "UpdateBlobAttr", updateBlobAttr_)) {
        return false;
    }
    if (returnBlobAttrIsSet_ && !bson_append(builder, "ReturnBlobAttr", returnBlobAttr_)) {
        return false;
    }

    return true;
}

bool RenameKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "NewSortKey") {
            if (!bson_get(it, newSortKey_)) {
                return false;
            }
            newSortKeyIsSet_ = true;
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
        
        if (key == "UpdateBlobAttr") {
            if (!bson_get(it, updateBlobAttr_)) {
                return false;
            }
            updateBlobAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "ReturnBlobAttr") {
            if (!bson_get(it, returnBlobAttr_)) {
                return false;
            }
            returnBlobAttrIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string RenameKvRequestBody::getTableName() const
{
    return tableName_;
}

void RenameKvRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool RenameKvRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void RenameKvRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

Document RenameKvRequestBody::getPrimaryKey() const
{
    return primaryKey_;
}

void RenameKvRequestBody::setPrimaryKey(const Document& value)
{
    primaryKey_ = value;
    primaryKeyIsSet_ = true;
}

bool RenameKvRequestBody::primaryKeyIsSet() const
{
    return primaryKeyIsSet_;
}

void RenameKvRequestBody::unsetprimaryKey()
{
    primaryKeyIsSet_ = false;
}

Document RenameKvRequestBody::getNewSortKey() const
{
    return newSortKey_;
}

void RenameKvRequestBody::setNewSortKey(const Document& value)
{
    newSortKey_ = value;
    newSortKeyIsSet_ = true;
}

bool RenameKvRequestBody::newSortKeyIsSet() const
{
    return newSortKeyIsSet_;
}

void RenameKvRequestBody::unsetnewSortKey()
{
    newSortKeyIsSet_ = false;
}

KvOptions RenameKvRequestBody::getKvOptions() const
{
    return kvOptions_;
}

void RenameKvRequestBody::setKvOptions(const KvOptions& value)
{
    kvOptions_ = value;
    kvOptionsIsSet_ = true;
}

bool RenameKvRequestBody::kvOptionsIsSet() const
{
    return kvOptionsIsSet_;
}

void RenameKvRequestBody::unsetkvOptions()
{
    kvOptionsIsSet_ = false;
}

UpdateBlobAttr RenameKvRequestBody::getUpdateBlobAttr() const
{
    return updateBlobAttr_;
}

void RenameKvRequestBody::setUpdateBlobAttr(const UpdateBlobAttr& value)
{
    updateBlobAttr_ = value;
    updateBlobAttrIsSet_ = true;
}

bool RenameKvRequestBody::updateBlobAttrIsSet() const
{
    return updateBlobAttrIsSet_;
}

void RenameKvRequestBody::unsetupdateBlobAttr()
{
    updateBlobAttrIsSet_ = false;
}

ReturnBlobAttr RenameKvRequestBody::getReturnBlobAttr() const
{
    return returnBlobAttr_;
}

void RenameKvRequestBody::setReturnBlobAttr(const ReturnBlobAttr& value)
{
    returnBlobAttr_ = value;
    returnBlobAttrIsSet_ = true;
}

bool RenameKvRequestBody::returnBlobAttrIsSet() const
{
    return returnBlobAttrIsSet_;
}

void RenameKvRequestBody::unsetreturnBlobAttr()
{
    returnBlobAttrIsSet_ = false;
}

}
}
}
}
}



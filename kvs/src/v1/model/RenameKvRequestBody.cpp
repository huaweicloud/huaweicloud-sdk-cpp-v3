

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
}

RenameKvRequestBody::~RenameKvRequestBody() = default;

void RenameKvRequestBody::validate()
{
}

bool RenameKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }
    if (newSortKeyIsSet_ && !bson_append(builder, "new_sort_key", newSortKey_)) {
        return false;
    }
    if (kvOptionsIsSet_ && !bson_append(builder, "kv_options", kvOptions_)) {
        return false;
    }
    if (updateBlobAttrIsSet_ && !bson_append(builder, "update_blob_attr", updateBlobAttr_)) {
        return false;
    }

    return true;
}

bool RenameKvRequestBody::fromBson(const Viewer &viewer)
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
        
        if (key == "new_sort_key") {
            if (!bson_get(it, newSortKey_)) {
                return false;
            }
            newSortKeyIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "kv_options") {
            if (!bson_get(it, kvOptions_)) {
                return false;
            }
            kvOptionsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "update_blob_attr") {
            if (!bson_get(it, updateBlobAttr_)) {
                return false;
            }
            updateBlobAttrIsSet_ = true;
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

Kv_options RenameKvRequestBody::getKvOptions() const
{
    return kvOptions_;
}

void RenameKvRequestBody::setKvOptions(const Kv_options& value)
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

Update_blob_attr RenameKvRequestBody::getUpdateBlobAttr() const
{
    return updateBlobAttr_;
}

void RenameKvRequestBody::setUpdateBlobAttr(const Update_blob_attr& value)
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

}
}
}
}
}



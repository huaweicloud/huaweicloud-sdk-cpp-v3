

#include "huaweicloud/kvs/v1/model/Trans_get_kv_of_table.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Trans_get_kv_of_table::Trans_get_kv_of_table()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    getKvOpersIsSet_ = false;
    projectionFieldsIsSet_ = false;
    projectionBlobIsSet_ = false;
}

Trans_get_kv_of_table::~Trans_get_kv_of_table() = default;

void Trans_get_kv_of_table::validate()
{
}

bool Trans_get_kv_of_table::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (getKvOpersIsSet_ && !bson_append(builder, "get_kv_opers", getKvOpers_)) {
        return false;
    }
    if (projectionFieldsIsSet_ && !bson_append(builder, "projection_fields", projectionFields_)) {
        return false;
    }
    if (projectionBlobIsSet_ && !bson_append(builder, "projection_blob", projectionBlob_)) {
        return false;
    }

    return true;
}

bool Trans_get_kv_of_table::fromBson(const Viewer &viewer)
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
        
        if (key == "get_kv_opers") {
            if (!bson_get(it, getKvOpers_)) {
                return false;
            }
            getKvOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "projection_fields") {
            if (!bson_get(it, projectionFields_)) {
                return false;
            }
            projectionFieldsIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "projection_blob") {
            if (!bson_get(it, projectionBlob_)) {
                return false;
            }
            projectionBlobIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Trans_get_kv_of_table::getTableName() const
{
    return tableName_;
}

void Trans_get_kv_of_table::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Trans_get_kv_of_table::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Trans_get_kv_of_table::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<Get_kv>& Trans_get_kv_of_table::getGetKvOpers()
{
    return getKvOpers_;
}

void Trans_get_kv_of_table::setGetKvOpers(const std::vector<Get_kv>& value)
{
    getKvOpers_ = value;
    getKvOpersIsSet_ = true;
}

bool Trans_get_kv_of_table::getKvOpersIsSet() const
{
    return getKvOpersIsSet_;
}

void Trans_get_kv_of_table::unsetgetKvOpers()
{
    getKvOpersIsSet_ = false;
}

std::vector<std::string>& Trans_get_kv_of_table::getProjectionFields()
{
    return projectionFields_;
}

void Trans_get_kv_of_table::setProjectionFields(const std::vector<std::string>& value)
{
    projectionFields_ = value;
    projectionFieldsIsSet_ = true;
}

bool Trans_get_kv_of_table::projectionFieldsIsSet() const
{
    return projectionFieldsIsSet_;
}

void Trans_get_kv_of_table::unsetprojectionFields()
{
    projectionFieldsIsSet_ = false;
}

Projection_blob Trans_get_kv_of_table::getProjectionBlob() const
{
    return projectionBlob_;
}

void Trans_get_kv_of_table::setProjectionBlob(const Projection_blob& value)
{
    projectionBlob_ = value;
    projectionBlobIsSet_ = true;
}

bool Trans_get_kv_of_table::projectionBlobIsSet() const
{
    return projectionBlobIsSet_;
}

void Trans_get_kv_of_table::unsetprojectionBlob()
{
    projectionBlobIsSet_ = false;
}

}
}
}
}
}



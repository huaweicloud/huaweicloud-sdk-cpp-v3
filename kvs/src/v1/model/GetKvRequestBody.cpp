

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
    primaryKeyIsSet_ = false;
}

GetKvRequestBody::~GetKvRequestBody() = default;

void GetKvRequestBody::validate()
{
}

bool GetKvRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (primaryKeyIsSet_ && !bson_append(builder, "primary_key", primaryKey_)) {
        return false;
    }

    return true;
}

bool GetKvRequestBody::fromBson(const Viewer &viewer)
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

}
}
}
}
}



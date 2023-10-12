

#include "huaweicloud/kvs/v1/model/TableOperIds.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TableOperIds::TableOperIds()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    kvOperIdsIsSet_ = false;
}

TableOperIds::~TableOperIds() = default;

void TableOperIds::validate()
{
}

bool TableOperIds::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (kvOperIdsIsSet_ && !bson_append(builder, "KvOperIds", kvOperIds_)) {
        return false;
    }

    return true;
}

bool TableOperIds::fromBson(const Viewer &viewer)
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
        
        if (key == "KvOperIds") {
            if (!bson_get(it, kvOperIds_)) {
                return false;
            }
            kvOperIdsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string TableOperIds::getTableName() const
{
    return tableName_;
}

void TableOperIds::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableOperIds::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableOperIds::unsettableName()
{
    tableNameIsSet_ = false;
}

KvOperIds TableOperIds::getKvOperIds() const
{
    return kvOperIds_;
}

void TableOperIds::setKvOperIds(const KvOperIds& value)
{
    kvOperIds_ = value;
    kvOperIdsIsSet_ = true;
}

bool TableOperIds::kvOperIdsIsSet() const
{
    return kvOperIdsIsSet_;
}

void TableOperIds::unsetkvOperIds()
{
    kvOperIdsIsSet_ = false;
}

}
}
}
}
}



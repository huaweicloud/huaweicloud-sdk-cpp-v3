

#include "huaweicloud/kvs/v1/model/TableBatchItem.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TableBatchItem::TableBatchItem()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    kvArrayIsSet_ = false;
}

TableBatchItem::~TableBatchItem() = default;

void TableBatchItem::validate()
{
}

bool TableBatchItem::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (kvArrayIsSet_ && !bson_append(builder, "KvArray", kvArray_)) {
        return false;
    }

    return true;
}

bool TableBatchItem::fromBson(const Viewer &viewer)
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
        
        if (key == "KvArray") {
            if (!bson_get(it, kvArray_)) {
                return false;
            }
            kvArrayIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string TableBatchItem::getTableName() const
{
    return tableName_;
}

void TableBatchItem::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableBatchItem::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableBatchItem::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<KvItem>& TableBatchItem::getKvArray()
{
    return kvArray_;
}

void TableBatchItem::setKvArray(const std::vector<KvItem>& value)
{
    kvArray_ = value;
    kvArrayIsSet_ = true;
}

bool TableBatchItem::kvArrayIsSet() const
{
    return kvArrayIsSet_;
}

void TableBatchItem::unsetkvArray()
{
    kvArrayIsSet_ = false;
}

}
}
}
}
}



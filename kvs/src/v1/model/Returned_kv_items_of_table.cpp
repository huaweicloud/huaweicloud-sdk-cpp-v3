

#include "huaweicloud/kvs/v1/model/Returned_kv_items_of_table.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Returned_kv_items_of_table::Returned_kv_items_of_table()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    returnedKvItemsIsSet_ = false;
}

Returned_kv_items_of_table::~Returned_kv_items_of_table() = default;

void Returned_kv_items_of_table::validate()
{
}

bool Returned_kv_items_of_table::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (returnedKvItemsIsSet_ && !bson_append(builder, "returned_kv_items", returnedKvItems_)) {
        return false;
    }

    return true;
}

bool Returned_kv_items_of_table::fromBson(const Viewer &viewer)
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
        
        if (key == "returned_kv_items") {
            if (!bson_get(it, returnedKvItems_)) {
                return false;
            }
            returnedKvItemsIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Returned_kv_items_of_table::getTableName() const
{
    return tableName_;
}

void Returned_kv_items_of_table::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Returned_kv_items_of_table::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Returned_kv_items_of_table::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<Returned_kv_item>& Returned_kv_items_of_table::getReturnedKvItems()
{
    return returnedKvItems_;
}

void Returned_kv_items_of_table::setReturnedKvItems(const std::vector<Returned_kv_item>& value)
{
    returnedKvItems_ = value;
    returnedKvItemsIsSet_ = true;
}

bool Returned_kv_items_of_table::returnedKvItemsIsSet() const
{
    return returnedKvItemsIsSet_;
}

void Returned_kv_items_of_table::unsetreturnedKvItems()
{
    returnedKvItemsIsSet_ = false;
}

}
}
}
}
}



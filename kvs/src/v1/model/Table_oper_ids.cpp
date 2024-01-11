

#include "huaweicloud/kvs/v1/model/Table_oper_ids.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Table_oper_ids::Table_oper_ids()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    kvOperIdsIsSet_ = false;
}

Table_oper_ids::~Table_oper_ids() = default;

void Table_oper_ids::validate()
{
}

bool Table_oper_ids::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (kvOperIdsIsSet_ && !bson_append(builder, "kv_oper_ids", kvOperIds_)) {
        return false;
    }

    return true;
}

bool Table_oper_ids::fromBson(const Viewer &viewer)
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
        
        if (key == "kv_oper_ids") {
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

std::string Table_oper_ids::getTableName() const
{
    return tableName_;
}

void Table_oper_ids::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Table_oper_ids::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Table_oper_ids::unsettableName()
{
    tableNameIsSet_ = false;
}

Kv_oper_ids Table_oper_ids::getKvOperIds() const
{
    return kvOperIds_;
}

void Table_oper_ids::setKvOperIds(const Kv_oper_ids& value)
{
    kvOperIds_ = value;
    kvOperIdsIsSet_ = true;
}

bool Table_oper_ids::kvOperIdsIsSet() const
{
    return kvOperIdsIsSet_;
}

void Table_oper_ids::unsetkvOperIds()
{
    kvOperIdsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/kvs/v1/model/Table_batch.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Table_batch::Table_batch()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    kvOpersIsSet_ = false;
}

Table_batch::~Table_batch() = default;

void Table_batch::validate()
{
}

bool Table_batch::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (kvOpersIsSet_ && !bson_append(builder, "kv_opers", kvOpers_)) {
        return false;
    }

    return true;
}

bool Table_batch::fromBson(const Viewer &viewer)
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
        
        if (key == "kv_opers") {
            if (!bson_get(it, kvOpers_)) {
                return false;
            }
            kvOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string Table_batch::getTableName() const
{
    return tableName_;
}

void Table_batch::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Table_batch::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Table_batch::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<Oper_item>& Table_batch::getKvOpers()
{
    return kvOpers_;
}

void Table_batch::setKvOpers(const std::vector<Oper_item>& value)
{
    kvOpers_ = value;
    kvOpersIsSet_ = true;
}

bool Table_batch::kvOpersIsSet() const
{
    return kvOpersIsSet_;
}

void Table_batch::unsetkvOpers()
{
    kvOpersIsSet_ = false;
}

}
}
}
}
}



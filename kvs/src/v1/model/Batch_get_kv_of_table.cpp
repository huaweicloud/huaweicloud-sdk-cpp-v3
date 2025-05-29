

#include "huaweicloud/kvs/v1/model/Batch_get_kv_of_table.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Batch_get_kv_of_table::Batch_get_kv_of_table()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    getKvOpersIsSet_ = false;
}

Batch_get_kv_of_table::~Batch_get_kv_of_table() = default;

void Batch_get_kv_of_table::validate()
{
}

bool Batch_get_kv_of_table::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }
    if (getKvOpersIsSet_ && !bson_append(builder, "get_kv_opers", getKvOpers_)) {
        return false;
    }

    return true;
}

bool Batch_get_kv_of_table::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

std::string Batch_get_kv_of_table::getTableName() const
{
    return tableName_;
}

void Batch_get_kv_of_table::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool Batch_get_kv_of_table::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void Batch_get_kv_of_table::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<Get_oper>& Batch_get_kv_of_table::getGetKvOpers()
{
    return getKvOpers_;
}

void Batch_get_kv_of_table::setGetKvOpers(const std::vector<Get_oper>& value)
{
    getKvOpers_ = value;
    getKvOpersIsSet_ = true;
}

bool Batch_get_kv_of_table::getKvOpersIsSet() const
{
    return getKvOpersIsSet_;
}

void Batch_get_kv_of_table::unsetgetKvOpers()
{
    getKvOpersIsSet_ = false;
}

}
}
}
}
}



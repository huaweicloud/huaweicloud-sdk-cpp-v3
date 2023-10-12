

#include "huaweicloud/kvs/v1/model/TableBatch.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TableBatch::TableBatch()
{
    tableName_ = "";
    tableNameIsSet_ = false;
    kvOpersIsSet_ = false;
}

TableBatch::~TableBatch() = default;

void TableBatch::validate()
{
}

bool TableBatch::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }
    if (kvOpersIsSet_ && !bson_append(builder, "KvOpers", kvOpers_)) {
        return false;
    }

    return true;
}

bool TableBatch::fromBson(const Viewer &viewer)
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
        
        if (key == "KvOpers") {
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

std::string TableBatch::getTableName() const
{
    return tableName_;
}

void TableBatch::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool TableBatch::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void TableBatch::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<OperItem>& TableBatch::getKvOpers()
{
    return kvOpers_;
}

void TableBatch::setKvOpers(const std::vector<OperItem>& value)
{
    kvOpers_ = value;
    kvOpersIsSet_ = true;
}

bool TableBatch::kvOpersIsSet() const
{
    return kvOpersIsSet_;
}

void TableBatch::unsetkvOpers()
{
    kvOpersIsSet_ = false;
}

}
}
}
}
}



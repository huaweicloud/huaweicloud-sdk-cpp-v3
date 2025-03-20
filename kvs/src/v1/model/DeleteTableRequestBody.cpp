

#include "huaweicloud/kvs/v1/model/DeleteTableRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DeleteTableRequestBody::DeleteTableRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
}

DeleteTableRequestBody::~DeleteTableRequestBody() = default;

void DeleteTableRequestBody::validate()
{
}

bool DeleteTableRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "table_name", tableName_)) {
        return false;
    }

    return true;
}

bool DeleteTableRequestBody::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

std::string DeleteTableRequestBody::getTableName() const
{
    return tableName_;
}

void DeleteTableRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DeleteTableRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DeleteTableRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



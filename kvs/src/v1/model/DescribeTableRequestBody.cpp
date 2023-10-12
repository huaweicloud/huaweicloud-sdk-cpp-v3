

#include "huaweicloud/kvs/v1/model/DescribeTableRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




DescribeTableRequestBody::DescribeTableRequestBody()
{
    tableName_ = "";
    tableNameIsSet_ = false;
}

DescribeTableRequestBody::~DescribeTableRequestBody() = default;

void DescribeTableRequestBody::validate()
{
}

bool DescribeTableRequestBody::toBson(Builder &builder) const
{

    if (tableNameIsSet_ && !bson_append(builder, "TableName", tableName_)) {
        return false;
    }

    return true;
}

bool DescribeTableRequestBody::fromBson(const Viewer &viewer)
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
        
        ++it;
    }

    return true;
}

std::string DescribeTableRequestBody::getTableName() const
{
    return tableName_;
}

void DescribeTableRequestBody::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DescribeTableRequestBody::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DescribeTableRequestBody::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}



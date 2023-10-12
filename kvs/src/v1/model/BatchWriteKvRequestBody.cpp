

#include "huaweicloud/kvs/v1/model/BatchWriteKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchWriteKvRequestBody::BatchWriteKvRequestBody()
{
    tableOpersIsSet_ = false;
}

BatchWriteKvRequestBody::~BatchWriteKvRequestBody() = default;

void BatchWriteKvRequestBody::validate()
{
}

bool BatchWriteKvRequestBody::toBson(Builder &builder) const
{

    if (tableOpersIsSet_ && !bson_append(builder, "TableOpers", tableOpers_)) {
        return false;
    }

    return true;
}

bool BatchWriteKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "TableOpers") {
            if (!bson_get(it, tableOpers_)) {
                return false;
            }
            tableOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<TableBatch>& BatchWriteKvRequestBody::getTableOpers()
{
    return tableOpers_;
}

void BatchWriteKvRequestBody::setTableOpers(const std::vector<TableBatch>& value)
{
    tableOpers_ = value;
    tableOpersIsSet_ = true;
}

bool BatchWriteKvRequestBody::tableOpersIsSet() const
{
    return tableOpersIsSet_;
}

void BatchWriteKvRequestBody::unsettableOpers()
{
    tableOpersIsSet_ = false;
}

}
}
}
}
}



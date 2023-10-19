

#include "huaweicloud/kvs/v1/model/BatchGetKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchGetKvRequestBody::BatchGetKvRequestBody()
{
    tableOpersIsSet_ = false;
}

BatchGetKvRequestBody::~BatchGetKvRequestBody() = default;

void BatchGetKvRequestBody::validate()
{
}

bool BatchGetKvRequestBody::toBson(Builder &builder) const
{

    if (tableOpersIsSet_ && !bson_append(builder, "TableOpers", tableOpers_)) {
        return false;
    }

    return true;
}

bool BatchGetKvRequestBody::fromBson(const Viewer &viewer)
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

std::vector<TableBatchGet>& BatchGetKvRequestBody::getTableOpers()
{
    return tableOpers_;
}

void BatchGetKvRequestBody::setTableOpers(const std::vector<TableBatchGet>& value)
{
    tableOpers_ = value;
    tableOpersIsSet_ = true;
}

bool BatchGetKvRequestBody::tableOpersIsSet() const
{
    return tableOpersIsSet_;
}

void BatchGetKvRequestBody::unsettableOpers()
{
    tableOpersIsSet_ = false;
}

}
}
}
}
}



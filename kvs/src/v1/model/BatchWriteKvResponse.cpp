

#include "huaweicloud/kvs/v1/model/BatchWriteKvResponse.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchWriteKvResponse::BatchWriteKvResponse()
{
    unprocessedOpersIsSet_ = false;
}

BatchWriteKvResponse::~BatchWriteKvResponse() = default;

void BatchWriteKvResponse::validate()
{
}

bool BatchWriteKvResponse::toBson(Builder &builder) const
{

    if (unprocessedOpersIsSet_ && !bson_append(builder, "unprocessed_opers", unprocessedOpers_)) {
        return false;
    }

    return true;
}

bool BatchWriteKvResponse::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "unprocessed_opers") {
            if (!bson_get(it, unprocessedOpers_)) {
                return false;
            }
            unprocessedOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<Table_oper_ids>& BatchWriteKvResponse::getUnprocessedOpers()
{
    return unprocessedOpers_;
}

void BatchWriteKvResponse::setUnprocessedOpers(const std::vector<Table_oper_ids>& value)
{
    unprocessedOpers_ = value;
    unprocessedOpersIsSet_ = true;
}

bool BatchWriteKvResponse::unprocessedOpersIsSet() const
{
    return unprocessedOpersIsSet_;
}

void BatchWriteKvResponse::unsetunprocessedOpers()
{
    unprocessedOpersIsSet_ = false;
}

}
}
}
}
}



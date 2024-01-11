

#include "huaweicloud/kvs/v1/model/BatchGetKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




BatchGetKvRequestBody::BatchGetKvRequestBody()
{
    batchGetKvOpersIsSet_ = false;
}

BatchGetKvRequestBody::~BatchGetKvRequestBody() = default;

void BatchGetKvRequestBody::validate()
{
}

bool BatchGetKvRequestBody::toBson(Builder &builder) const
{

    if (batchGetKvOpersIsSet_ && !bson_append(builder, "batch_get_kv_opers", batchGetKvOpers_)) {
        return false;
    }

    return true;
}

bool BatchGetKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "batch_get_kv_opers") {
            if (!bson_get(it, batchGetKvOpers_)) {
                return false;
            }
            batchGetKvOpersIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::vector<Batch_get_kv_of_table>& BatchGetKvRequestBody::getBatchGetKvOpers()
{
    return batchGetKvOpers_;
}

void BatchGetKvRequestBody::setBatchGetKvOpers(const std::vector<Batch_get_kv_of_table>& value)
{
    batchGetKvOpers_ = value;
    batchGetKvOpersIsSet_ = true;
}

bool BatchGetKvRequestBody::batchGetKvOpersIsSet() const
{
    return batchGetKvOpersIsSet_;
}

void BatchGetKvRequestBody::unsetbatchGetKvOpers()
{
    batchGetKvOpersIsSet_ = false;
}

}
}
}
}
}



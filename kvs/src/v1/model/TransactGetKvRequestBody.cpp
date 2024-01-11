

#include "huaweicloud/kvs/v1/model/TransactGetKvRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




TransactGetKvRequestBody::TransactGetKvRequestBody()
{
    kvOpersIsSet_ = false;
}

TransactGetKvRequestBody::~TransactGetKvRequestBody() = default;

void TransactGetKvRequestBody::validate()
{
}

bool TransactGetKvRequestBody::toBson(Builder &builder) const
{

    if (kvOpersIsSet_ && !bson_append(builder, "kv_opers", kvOpers_)) {
        return false;
    }

    return true;
}

bool TransactGetKvRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
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

std::vector<Trans_get_kv_of_table>& TransactGetKvRequestBody::getKvOpers()
{
    return kvOpers_;
}

void TransactGetKvRequestBody::setKvOpers(const std::vector<Trans_get_kv_of_table>& value)
{
    kvOpers_ = value;
    kvOpersIsSet_ = true;
}

bool TransactGetKvRequestBody::kvOpersIsSet() const
{
    return kvOpersIsSet_;
}

void TransactGetKvRequestBody::unsetkvOpers()
{
    kvOpersIsSet_ = false;
}

}
}
}
}
}



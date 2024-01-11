

#include "huaweicloud/kvs/v1/model/Get_oper.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Get_oper::Get_oper()
{
    getKvIsSet_ = false;
}

Get_oper::~Get_oper() = default;

void Get_oper::validate()
{
}

bool Get_oper::toBson(Builder &builder) const
{

    if (getKvIsSet_ && !bson_append(builder, "get_kv", getKv_)) {
        return false;
    }

    return true;
}

bool Get_oper::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "get_kv") {
            if (!bson_get(it, getKv_)) {
                return false;
            }
            getKvIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Get_kv Get_oper::getGetKv() const
{
    return getKv_;
}

void Get_oper::setGetKv(const Get_kv& value)
{
    getKv_ = value;
    getKvIsSet_ = true;
}

bool Get_oper::getKvIsSet() const
{
    return getKvIsSet_;
}

void Get_oper::unsetgetKv()
{
    getKvIsSet_ = false;
}

}
}
}
}
}



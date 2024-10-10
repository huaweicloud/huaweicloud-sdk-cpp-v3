

#include "huaweicloud/kvs/v1/model/Provisioned_throughput.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Provisioned_throughput::Provisioned_throughput()
{
    rcu_ = 0L;
    rcuIsSet_ = false;
    wcu_ = 0L;
    wcuIsSet_ = false;
}

Provisioned_throughput::~Provisioned_throughput() = default;

void Provisioned_throughput::validate()
{
}

bool Provisioned_throughput::toBson(Builder &builder) const
{

    if (rcuIsSet_ && !bson_append(builder, "rcu", rcu_)) {
        return false;
    }
    if (wcuIsSet_ && !bson_append(builder, "wcu", wcu_)) {
        return false;
    }

    return true;
}

bool Provisioned_throughput::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "rcu") {
            if (!bson_get(it, rcu_)) {
                return false;
            }
            rcuIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "wcu") {
            if (!bson_get(it, wcu_)) {
                return false;
            }
            wcuIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int64_t Provisioned_throughput::getRcu() const
{
    return rcu_;
}

void Provisioned_throughput::setRcu(int64_t value)
{
    rcu_ = value;
    rcuIsSet_ = true;
}

bool Provisioned_throughput::rcuIsSet() const
{
    return rcuIsSet_;
}

void Provisioned_throughput::unsetrcu()
{
    rcuIsSet_ = false;
}

int64_t Provisioned_throughput::getWcu() const
{
    return wcu_;
}

void Provisioned_throughput::setWcu(int64_t value)
{
    wcu_ = value;
    wcuIsSet_ = true;
}

bool Provisioned_throughput::wcuIsSet() const
{
    return wcuIsSet_;
}

void Provisioned_throughput::unsetwcu()
{
    wcuIsSet_ = false;
}

}
}
}
}
}



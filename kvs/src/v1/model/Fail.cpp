

#include "huaweicloud/kvs/v1/model/Fail.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Fail::Fail()
{
    operId_ = 0;
    operIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

Fail::~Fail() = default;

void Fail::validate()
{
}

bool Fail::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "oper_id", operId_)) {
        return false;
    }
    if (statusIsSet_ && !bson_append(builder, "status", status_)) {
        return false;
    }

    return true;
}

bool Fail::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "oper_id") {
            if (!bson_get(it, operId_)) {
                return false;
            }
            operIdIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "status") {
            if (!bson_get(it, status_)) {
                return false;
            }
            statusIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t Fail::getOperId() const
{
    return operId_;
}

void Fail::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool Fail::operIdIsSet() const
{
    return operIdIsSet_;
}

void Fail::unsetoperId()
{
    operIdIsSet_ = false;
}

std::string Fail::getStatus() const
{
    return status_;
}

void Fail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Fail::statusIsSet() const
{
    return statusIsSet_;
}

void Fail::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}



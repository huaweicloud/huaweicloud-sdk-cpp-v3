

#include "huaweicloud/meeting/v1/model/RestLockReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestLockReqBody::RestLockReqBody()
{
    isLock_ = 0;
    isLockIsSet_ = false;
}

RestLockReqBody::~RestLockReqBody() = default;

void RestLockReqBody::validate()
{
}

web::json::value RestLockReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isLockIsSet_) {
        val[utility::conversions::to_string_t("isLock")] = ModelBase::toJson(isLock_);
    }

    return val;
}
bool RestLockReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isLock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLock"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLock(refVal);
        }
    }
    return ok;
}


int32_t RestLockReqBody::getIsLock() const
{
    return isLock_;
}

void RestLockReqBody::setIsLock(int32_t value)
{
    isLock_ = value;
    isLockIsSet_ = true;
}

bool RestLockReqBody::isLockIsSet() const
{
    return isLockIsSet_;
}

void RestLockReqBody::unsetisLock()
{
    isLockIsSet_ = false;
}

}
}
}
}
}



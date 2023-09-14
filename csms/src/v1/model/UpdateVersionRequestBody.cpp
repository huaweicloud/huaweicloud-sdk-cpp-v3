

#include "huaweicloud/csms/v1/model/UpdateVersionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateVersionRequestBody::UpdateVersionRequestBody()
{
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
}

UpdateVersionRequestBody::~UpdateVersionRequestBody() = default;

void UpdateVersionRequestBody::validate()
{
}

web::json::value UpdateVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}

bool UpdateVersionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}

int64_t UpdateVersionRequestBody::getExpireTime() const
{
    return expireTime_;
}

void UpdateVersionRequestBody::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UpdateVersionRequestBody::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UpdateVersionRequestBody::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/meeting/v1/model/RestAllowAudienceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestAllowAudienceReqBody::RestAllowAudienceReqBody()
{
    allowAudience_ = 0;
    allowAudienceIsSet_ = false;
}

RestAllowAudienceReqBody::~RestAllowAudienceReqBody() = default;

void RestAllowAudienceReqBody::validate()
{
}

web::json::value RestAllowAudienceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allowAudienceIsSet_) {
        val[utility::conversions::to_string_t("allowAudience")] = ModelBase::toJson(allowAudience_);
    }

    return val;
}
bool RestAllowAudienceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allowAudience"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowAudience"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowAudience(refVal);
        }
    }
    return ok;
}


int32_t RestAllowAudienceReqBody::getAllowAudience() const
{
    return allowAudience_;
}

void RestAllowAudienceReqBody::setAllowAudience(int32_t value)
{
    allowAudience_ = value;
    allowAudienceIsSet_ = true;
}

bool RestAllowAudienceReqBody::allowAudienceIsSet() const
{
    return allowAudienceIsSet_;
}

void RestAllowAudienceReqBody::unsetallowAudience()
{
    allowAudienceIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/SwitchAutoProtectStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SwitchAutoProtectStatusResponse::SwitchAutoProtectStatusResponse()
{
    bodyIsSet_ = false;
}

SwitchAutoProtectStatusResponse::~SwitchAutoProtectStatusResponse() = default;

void SwitchAutoProtectStatusResponse::validate()
{
}

web::json::value SwitchAutoProtectStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchAutoProtectStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object SwitchAutoProtectStatusResponse::getBody() const
{
    return body_;
}

void SwitchAutoProtectStatusResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAutoProtectStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAutoProtectStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



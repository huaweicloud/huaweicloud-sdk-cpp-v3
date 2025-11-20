

#include "huaweicloud/aad/v2/model/UpdateDomainConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateDomainConfigResponse::UpdateDomainConfigResponse()
{
    bodyIsSet_ = false;
}

UpdateDomainConfigResponse::~UpdateDomainConfigResponse() = default;

void UpdateDomainConfigResponse::validate()
{
}

web::json::value UpdateDomainConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainConfigResponse::fromJson(const web::json::value& val)
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


Object UpdateDomainConfigResponse::getBody() const
{
    return body_;
}

void UpdateDomainConfigResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



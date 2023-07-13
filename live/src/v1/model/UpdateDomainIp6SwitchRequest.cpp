

#include "huaweicloud/live/v1/model/UpdateDomainIp6SwitchRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateDomainIp6SwitchRequest::UpdateDomainIp6SwitchRequest()
{
    bodyIsSet_ = false;
}

UpdateDomainIp6SwitchRequest::~UpdateDomainIp6SwitchRequest() = default;

void UpdateDomainIp6SwitchRequest::validate()
{
}

web::json::value UpdateDomainIp6SwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateDomainIp6SwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DomainIpv6SwitchReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

DomainIpv6SwitchReq UpdateDomainIp6SwitchRequest::getBody() const
{
    return body_;
}

void UpdateDomainIp6SwitchRequest::setBody(const DomainIpv6SwitchReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainIp6SwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainIp6SwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



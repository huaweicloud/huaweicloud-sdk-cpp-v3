

#include "huaweicloud/eip/v2/model/NeutronCreateFloatingIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronCreateFloatingIpRequest::NeutronCreateFloatingIpRequest()
{
    bodyIsSet_ = false;
}

NeutronCreateFloatingIpRequest::~NeutronCreateFloatingIpRequest() = default;

void NeutronCreateFloatingIpRequest::validate()
{
}

web::json::value NeutronCreateFloatingIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronCreateFloatingIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronCreateFloatingIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NeutronCreateFloatingIpRequestBody NeutronCreateFloatingIpRequest::getBody() const
{
    return body_;
}

void NeutronCreateFloatingIpRequest::setBody(const NeutronCreateFloatingIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronCreateFloatingIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronCreateFloatingIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



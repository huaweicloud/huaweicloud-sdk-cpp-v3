

#include "huaweicloud/eip/v2/model/NeutronUpdateFloatingIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronUpdateFloatingIpRequest::NeutronUpdateFloatingIpRequest()
{
    floatingipId_ = "";
    floatingipIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateFloatingIpRequest::~NeutronUpdateFloatingIpRequest() = default;

void NeutronUpdateFloatingIpRequest::validate()
{
}

web::json::value NeutronUpdateFloatingIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIdIsSet_) {
        val[utility::conversions::to_string_t("floatingip_id")] = ModelBase::toJson(floatingipId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool NeutronUpdateFloatingIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateFloatingIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateFloatingIpRequest::getFloatingipId() const
{
    return floatingipId_;
}

void NeutronUpdateFloatingIpRequest::setFloatingipId(const std::string& value)
{
    floatingipId_ = value;
    floatingipIdIsSet_ = true;
}

bool NeutronUpdateFloatingIpRequest::floatingipIdIsSet() const
{
    return floatingipIdIsSet_;
}

void NeutronUpdateFloatingIpRequest::unsetfloatingipId()
{
    floatingipIdIsSet_ = false;
}

NeutronUpdateFloatingIpRequestBody NeutronUpdateFloatingIpRequest::getBody() const
{
    return body_;
}

void NeutronUpdateFloatingIpRequest::setBody(const NeutronUpdateFloatingIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateFloatingIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateFloatingIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



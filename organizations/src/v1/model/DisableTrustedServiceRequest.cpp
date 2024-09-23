

#include "huaweicloud/organizations/v1/model/DisableTrustedServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DisableTrustedServiceRequest::DisableTrustedServiceRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

DisableTrustedServiceRequest::~DisableTrustedServiceRequest() = default;

void DisableTrustedServiceRequest::validate()
{
}

web::json::value DisableTrustedServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DisableTrustedServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TrustedServiceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisableTrustedServiceRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisableTrustedServiceRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisableTrustedServiceRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisableTrustedServiceRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

TrustedServiceReqBody DisableTrustedServiceRequest::getBody() const
{
    return body_;
}

void DisableTrustedServiceRequest::setBody(const TrustedServiceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableTrustedServiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableTrustedServiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



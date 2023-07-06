

#include "huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSecurityGroupRequest::NeutronUpdateSecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

NeutronUpdateSecurityGroupRequest::~NeutronUpdateSecurityGroupRequest() = default;

void NeutronUpdateSecurityGroupRequest::validate()
{
}

web::json::value NeutronUpdateSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool NeutronUpdateSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NeutronUpdateSecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void NeutronUpdateSecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool NeutronUpdateSecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void NeutronUpdateSecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

NeutronUpdateSecurityGroupRequestBody NeutronUpdateSecurityGroupRequest::getBody() const
{
    return body_;
}

void NeutronUpdateSecurityGroupRequest::setBody(const NeutronUpdateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NeutronUpdateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NeutronUpdateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



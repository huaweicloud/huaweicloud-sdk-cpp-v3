

#include "huaweicloud/organizations/v1/model/InviteAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




InviteAccountRequest::InviteAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

InviteAccountRequest::~InviteAccountRequest() = default;

void InviteAccountRequest::validate()
{
}

web::json::value InviteAccountRequest::toJson() const
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
bool InviteAccountRequest::fromJson(const web::json::value& val)
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
            InviteAccountReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InviteAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void InviteAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool InviteAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void InviteAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

InviteAccountReqBody InviteAccountRequest::getBody() const
{
    return body_;
}

void InviteAccountRequest::setBody(const InviteAccountReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InviteAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InviteAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/organizations/v1/model/DeregisterDelegatedAdministratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeregisterDelegatedAdministratorRequest::DeregisterDelegatedAdministratorRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

DeregisterDelegatedAdministratorRequest::~DeregisterDelegatedAdministratorRequest() = default;

void DeregisterDelegatedAdministratorRequest::validate()
{
}

web::json::value DeregisterDelegatedAdministratorRequest::toJson() const
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
bool DeregisterDelegatedAdministratorRequest::fromJson(const web::json::value& val)
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
            DelegatedAdministratorReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeregisterDelegatedAdministratorRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeregisterDelegatedAdministratorRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeregisterDelegatedAdministratorRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeregisterDelegatedAdministratorRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

DelegatedAdministratorReqBody DeregisterDelegatedAdministratorRequest::getBody() const
{
    return body_;
}

void DeregisterDelegatedAdministratorRequest::setBody(const DelegatedAdministratorReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeregisterDelegatedAdministratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeregisterDelegatedAdministratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



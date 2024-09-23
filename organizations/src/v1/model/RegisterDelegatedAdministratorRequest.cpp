

#include "huaweicloud/organizations/v1/model/RegisterDelegatedAdministratorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




RegisterDelegatedAdministratorRequest::RegisterDelegatedAdministratorRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterDelegatedAdministratorRequest::~RegisterDelegatedAdministratorRequest() = default;

void RegisterDelegatedAdministratorRequest::validate()
{
}

web::json::value RegisterDelegatedAdministratorRequest::toJson() const
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
bool RegisterDelegatedAdministratorRequest::fromJson(const web::json::value& val)
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


std::string RegisterDelegatedAdministratorRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void RegisterDelegatedAdministratorRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool RegisterDelegatedAdministratorRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void RegisterDelegatedAdministratorRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

DelegatedAdministratorReqBody RegisterDelegatedAdministratorRequest::getBody() const
{
    return body_;
}

void RegisterDelegatedAdministratorRequest::setBody(const DelegatedAdministratorReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterDelegatedAdministratorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterDelegatedAdministratorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



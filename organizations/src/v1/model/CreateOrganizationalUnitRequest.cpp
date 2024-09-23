

#include "huaweicloud/organizations/v1/model/CreateOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateOrganizationalUnitRequest::CreateOrganizationalUnitRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateOrganizationalUnitRequest::~CreateOrganizationalUnitRequest() = default;

void CreateOrganizationalUnitRequest::validate()
{
}

web::json::value CreateOrganizationalUnitRequest::toJson() const
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
bool CreateOrganizationalUnitRequest::fromJson(const web::json::value& val)
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
            CreateOrganizationalUnitReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateOrganizationalUnitRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateOrganizationalUnitRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateOrganizationalUnitRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateOrganizationalUnitRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateOrganizationalUnitReqBody CreateOrganizationalUnitRequest::getBody() const
{
    return body_;
}

void CreateOrganizationalUnitRequest::setBody(const CreateOrganizationalUnitReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrganizationalUnitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrganizationalUnitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



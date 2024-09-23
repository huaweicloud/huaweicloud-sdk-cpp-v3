

#include "huaweicloud/organizations/v1/model/UpdateOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateOrganizationalUnitRequest::UpdateOrganizationalUnitRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateOrganizationalUnitRequest::~UpdateOrganizationalUnitRequest() = default;

void UpdateOrganizationalUnitRequest::validate()
{
}

web::json::value UpdateOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateOrganizationalUnitRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateOrganizationalUnitReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateOrganizationalUnitRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateOrganizationalUnitRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateOrganizationalUnitRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateOrganizationalUnitRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateOrganizationalUnitRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void UpdateOrganizationalUnitRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool UpdateOrganizationalUnitRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void UpdateOrganizationalUnitRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

UpdateOrganizationalUnitReqBody UpdateOrganizationalUnitRequest::getBody() const
{
    return body_;
}

void UpdateOrganizationalUnitRequest::setBody(const UpdateOrganizationalUnitReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateOrganizationalUnitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateOrganizationalUnitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



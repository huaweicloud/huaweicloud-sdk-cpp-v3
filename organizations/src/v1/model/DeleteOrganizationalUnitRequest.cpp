

#include "huaweicloud/organizations/v1/model/DeleteOrganizationalUnitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeleteOrganizationalUnitRequest::DeleteOrganizationalUnitRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    organizationalUnitId_ = "";
    organizationalUnitIdIsSet_ = false;
}

DeleteOrganizationalUnitRequest::~DeleteOrganizationalUnitRequest() = default;

void DeleteOrganizationalUnitRequest::validate()
{
}

web::json::value DeleteOrganizationalUnitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(organizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("organizational_unit_id")] = ModelBase::toJson(organizationalUnitId_);
    }

    return val;
}
bool DeleteOrganizationalUnitRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteOrganizationalUnitRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteOrganizationalUnitRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteOrganizationalUnitRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteOrganizationalUnitRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteOrganizationalUnitRequest::getOrganizationalUnitId() const
{
    return organizationalUnitId_;
}

void DeleteOrganizationalUnitRequest::setOrganizationalUnitId(const std::string& value)
{
    organizationalUnitId_ = value;
    organizationalUnitIdIsSet_ = true;
}

bool DeleteOrganizationalUnitRequest::organizationalUnitIdIsSet() const
{
    return organizationalUnitIdIsSet_;
}

void DeleteOrganizationalUnitRequest::unsetorganizationalUnitId()
{
    organizationalUnitIdIsSet_ = false;
}

}
}
}
}
}



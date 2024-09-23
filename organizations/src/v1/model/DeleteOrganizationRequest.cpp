

#include "huaweicloud/organizations/v1/model/DeleteOrganizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeleteOrganizationRequest::DeleteOrganizationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DeleteOrganizationRequest::~DeleteOrganizationRequest() = default;

void DeleteOrganizationRequest::validate()
{
}

web::json::value DeleteOrganizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DeleteOrganizationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteOrganizationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteOrganizationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteOrganizationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteOrganizationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



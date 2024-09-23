

#include "huaweicloud/organizations/v1/model/ShowOrganizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowOrganizationRequest::ShowOrganizationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ShowOrganizationRequest::~ShowOrganizationRequest() = default;

void ShowOrganizationRequest::validate()
{
}

web::json::value ShowOrganizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ShowOrganizationRequest::fromJson(const web::json::value& val)
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


std::string ShowOrganizationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowOrganizationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowOrganizationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowOrganizationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



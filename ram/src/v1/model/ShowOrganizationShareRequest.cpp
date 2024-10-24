

#include "huaweicloud/ram/v1/model/ShowOrganizationShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ShowOrganizationShareRequest::ShowOrganizationShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ShowOrganizationShareRequest::~ShowOrganizationShareRequest() = default;

void ShowOrganizationShareRequest::validate()
{
}

web::json::value ShowOrganizationShareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ShowOrganizationShareRequest::fromJson(const web::json::value& val)
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


std::string ShowOrganizationShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowOrganizationShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowOrganizationShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowOrganizationShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



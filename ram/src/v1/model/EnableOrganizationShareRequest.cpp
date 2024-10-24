

#include "huaweicloud/ram/v1/model/EnableOrganizationShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




EnableOrganizationShareRequest::EnableOrganizationShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

EnableOrganizationShareRequest::~EnableOrganizationShareRequest() = default;

void EnableOrganizationShareRequest::validate()
{
}

web::json::value EnableOrganizationShareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool EnableOrganizationShareRequest::fromJson(const web::json::value& val)
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


std::string EnableOrganizationShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void EnableOrganizationShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool EnableOrganizationShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void EnableOrganizationShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



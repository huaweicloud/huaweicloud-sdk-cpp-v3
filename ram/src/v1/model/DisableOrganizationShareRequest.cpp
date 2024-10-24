

#include "huaweicloud/ram/v1/model/DisableOrganizationShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DisableOrganizationShareRequest::DisableOrganizationShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DisableOrganizationShareRequest::~DisableOrganizationShareRequest() = default;

void DisableOrganizationShareRequest::validate()
{
}

web::json::value DisableOrganizationShareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DisableOrganizationShareRequest::fromJson(const web::json::value& val)
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


std::string DisableOrganizationShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisableOrganizationShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisableOrganizationShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisableOrganizationShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



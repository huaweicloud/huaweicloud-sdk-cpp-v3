

#include "huaweicloud/organizations/v1/model/LeaveOrganizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




LeaveOrganizationRequest::LeaveOrganizationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

LeaveOrganizationRequest::~LeaveOrganizationRequest() = default;

void LeaveOrganizationRequest::validate()
{
}

web::json::value LeaveOrganizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool LeaveOrganizationRequest::fromJson(const web::json::value& val)
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


std::string LeaveOrganizationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void LeaveOrganizationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool LeaveOrganizationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void LeaveOrganizationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}



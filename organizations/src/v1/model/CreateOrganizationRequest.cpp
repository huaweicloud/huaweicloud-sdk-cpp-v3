

#include "huaweicloud/organizations/v1/model/CreateOrganizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateOrganizationRequest::CreateOrganizationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

CreateOrganizationRequest::~CreateOrganizationRequest() = default;

void CreateOrganizationRequest::validate()
{
}

web::json::value CreateOrganizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool CreateOrganizationRequest::fromJson(const web::json::value& val)
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


std::string CreateOrganizationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateOrganizationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateOrganizationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateOrganizationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/vpc/v2/model/ShowSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupRequest::ShowSecurityGroupRequest()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

ShowSecurityGroupRequest::~ShowSecurityGroupRequest() = default;

void ShowSecurityGroupRequest::validate()
{
}

web::json::value ShowSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool ShowSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string ShowSecurityGroupRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ShowSecurityGroupRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ShowSecurityGroupRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ShowSecurityGroupRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}



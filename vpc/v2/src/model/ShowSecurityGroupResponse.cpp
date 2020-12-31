

#include "huaweicloud/vpc/model/ShowSecurityGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupResponse::ShowSecurityGroupResponse()
{
    securityGroupIsSet_ = false;
}

ShowSecurityGroupResponse::~ShowSecurityGroupResponse() = default;

void ShowSecurityGroupResponse::validate()
{
}

web::json::value ShowSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool ShowSecurityGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group"));
        if(!fieldValue.is_null())
        {
            SecurityGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


SecurityGroup ShowSecurityGroupResponse::getSecurityGroup() const
{
    return securityGroup_;
}

void ShowSecurityGroupResponse::setSecurityGroup(const SecurityGroup& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool ShowSecurityGroupResponse::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void ShowSecurityGroupResponse::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



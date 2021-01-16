

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupResponse::CreateSecurityGroupResponse()
{
    securityGroupIsSet_ = false;
}

CreateSecurityGroupResponse::~CreateSecurityGroupResponse() = default;

void CreateSecurityGroupResponse::validate()
{
}

web::json::value CreateSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool CreateSecurityGroupResponse::fromJson(const web::json::value& val)
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


SecurityGroup CreateSecurityGroupResponse::getSecurityGroup() const
{
    return securityGroup_;
}

void CreateSecurityGroupResponse::setSecurityGroup(const SecurityGroup& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool CreateSecurityGroupResponse::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void CreateSecurityGroupResponse::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



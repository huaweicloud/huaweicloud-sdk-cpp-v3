

#include "huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSecurityGroupResponse::NeutronUpdateSecurityGroupResponse()
{
    securityGroupIsSet_ = false;
}

NeutronUpdateSecurityGroupResponse::~NeutronUpdateSecurityGroupResponse() = default;

void NeutronUpdateSecurityGroupResponse::validate()
{
}

web::json::value NeutronUpdateSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool NeutronUpdateSecurityGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group"));
        if(!fieldValue.is_null())
        {
            NeutronSecurityGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}

NeutronSecurityGroup NeutronUpdateSecurityGroupResponse::getSecurityGroup() const
{
    return securityGroup_;
}

void NeutronUpdateSecurityGroupResponse::setSecurityGroup(const NeutronSecurityGroup& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool NeutronUpdateSecurityGroupResponse::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void NeutronUpdateSecurityGroupResponse::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



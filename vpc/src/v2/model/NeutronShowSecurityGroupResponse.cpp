

#include "huaweicloud/vpc/v2/model/NeutronShowSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowSecurityGroupResponse::NeutronShowSecurityGroupResponse()
{
    securityGroupIsSet_ = false;
}

NeutronShowSecurityGroupResponse::~NeutronShowSecurityGroupResponse() = default;

void NeutronShowSecurityGroupResponse::validate()
{
}

web::json::value NeutronShowSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}
bool NeutronShowSecurityGroupResponse::fromJson(const web::json::value& val)
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


NeutronSecurityGroup NeutronShowSecurityGroupResponse::getSecurityGroup() const
{
    return securityGroup_;
}

void NeutronShowSecurityGroupResponse::setSecurityGroup(const NeutronSecurityGroup& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool NeutronShowSecurityGroupResponse::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void NeutronShowSecurityGroupResponse::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



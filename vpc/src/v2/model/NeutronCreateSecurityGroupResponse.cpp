

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupResponse::NeutronCreateSecurityGroupResponse()
{
    securityGroupIsSet_ = false;
}

NeutronCreateSecurityGroupResponse::~NeutronCreateSecurityGroupResponse() = default;

void NeutronCreateSecurityGroupResponse::validate()
{
}

web::json::value NeutronCreateSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}
bool NeutronCreateSecurityGroupResponse::fromJson(const web::json::value& val)
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


NeutronSecurityGroup NeutronCreateSecurityGroupResponse::getSecurityGroup() const
{
    return securityGroup_;
}

void NeutronCreateSecurityGroupResponse::setSecurityGroup(const NeutronSecurityGroup& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool NeutronCreateSecurityGroupResponse::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void NeutronCreateSecurityGroupResponse::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



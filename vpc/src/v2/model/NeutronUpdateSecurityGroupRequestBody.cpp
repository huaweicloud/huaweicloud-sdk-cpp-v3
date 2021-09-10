

#include "huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSecurityGroupRequestBody::NeutronUpdateSecurityGroupRequestBody()
{
    securityGroupIsSet_ = false;
}

NeutronUpdateSecurityGroupRequestBody::~NeutronUpdateSecurityGroupRequestBody() = default;

void NeutronUpdateSecurityGroupRequestBody::validate()
{
}

web::json::value NeutronUpdateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool NeutronUpdateSecurityGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateSecurityGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


NeutronUpdateSecurityGroupOption NeutronUpdateSecurityGroupRequestBody::getSecurityGroup() const
{
    return securityGroup_;
}

void NeutronUpdateSecurityGroupRequestBody::setSecurityGroup(const NeutronUpdateSecurityGroupOption& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool NeutronUpdateSecurityGroupRequestBody::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void NeutronUpdateSecurityGroupRequestBody::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



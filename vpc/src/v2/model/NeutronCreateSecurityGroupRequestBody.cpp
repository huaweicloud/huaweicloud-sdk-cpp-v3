

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRequestBody::NeutronCreateSecurityGroupRequestBody()
{
    securityGroupIsSet_ = false;
}

NeutronCreateSecurityGroupRequestBody::~NeutronCreateSecurityGroupRequestBody() = default;

void NeutronCreateSecurityGroupRequestBody::validate()
{
}

web::json::value NeutronCreateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool NeutronCreateSecurityGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSecurityGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


NeutronCreateSecurityGroupOption NeutronCreateSecurityGroupRequestBody::getSecurityGroup() const
{
    return securityGroup_;
}

void NeutronCreateSecurityGroupRequestBody::setSecurityGroup(const NeutronCreateSecurityGroupOption& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool NeutronCreateSecurityGroupRequestBody::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void NeutronCreateSecurityGroupRequestBody::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



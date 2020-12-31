

#include "huaweicloud/vpc/model/CreateSecurityGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRequestBody::CreateSecurityGroupRequestBody()
{
    securityGroupIsSet_ = false;
}

CreateSecurityGroupRequestBody::~CreateSecurityGroupRequestBody() = default;

void CreateSecurityGroupRequestBody::validate()
{
}

web::json::value CreateSecurityGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("security_group")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}

bool CreateSecurityGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group"));
        if(!fieldValue.is_null())
        {
            CreateSecurityGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


CreateSecurityGroupOption CreateSecurityGroupRequestBody::getSecurityGroup() const
{
    return securityGroup_;
}

void CreateSecurityGroupRequestBody::setSecurityGroup(const CreateSecurityGroupOption& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool CreateSecurityGroupRequestBody::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void CreateSecurityGroupRequestBody::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}



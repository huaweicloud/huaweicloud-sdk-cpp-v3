

#include "huaweicloud/identitycenterstore/v1/model/DescribePasswordPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribePasswordPolicyResponse::DescribePasswordPolicyResponse()
{
    passwordPolicyIsSet_ = false;
}

DescribePasswordPolicyResponse::~DescribePasswordPolicyResponse() = default;

void DescribePasswordPolicyResponse::validate()
{
}

web::json::value DescribePasswordPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordPolicyIsSet_) {
        val[utility::conversions::to_string_t("password_policy")] = ModelBase::toJson(passwordPolicy_);
    }

    return val;
}
bool DescribePasswordPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("password_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password_policy"));
        if(!fieldValue.is_null())
        {
            PasswordPolicyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPasswordPolicy(refVal);
        }
    }
    return ok;
}


PasswordPolicyDto DescribePasswordPolicyResponse::getPasswordPolicy() const
{
    return passwordPolicy_;
}

void DescribePasswordPolicyResponse::setPasswordPolicy(const PasswordPolicyDto& value)
{
    passwordPolicy_ = value;
    passwordPolicyIsSet_ = true;
}

bool DescribePasswordPolicyResponse::passwordPolicyIsSet() const
{
    return passwordPolicyIsSet_;
}

void DescribePasswordPolicyResponse::unsetpasswordPolicy()
{
    passwordPolicyIsSet_ = false;
}

}
}
}
}
}



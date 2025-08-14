

#include "huaweicloud/identitycenterstore/v1/model/UpdatePasswordPolicyReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdatePasswordPolicyReqBody::UpdatePasswordPolicyReqBody()
{
    passwordPolicyIsSet_ = false;
}

UpdatePasswordPolicyReqBody::~UpdatePasswordPolicyReqBody() = default;

void UpdatePasswordPolicyReqBody::validate()
{
}

web::json::value UpdatePasswordPolicyReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordPolicyIsSet_) {
        val[utility::conversions::to_string_t("password_policy")] = ModelBase::toJson(passwordPolicy_);
    }

    return val;
}
bool UpdatePasswordPolicyReqBody::fromJson(const web::json::value& val)
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


PasswordPolicyDto UpdatePasswordPolicyReqBody::getPasswordPolicy() const
{
    return passwordPolicy_;
}

void UpdatePasswordPolicyReqBody::setPasswordPolicy(const PasswordPolicyDto& value)
{
    passwordPolicy_ = value;
    passwordPolicyIsSet_ = true;
}

bool UpdatePasswordPolicyReqBody::passwordPolicyIsSet() const
{
    return passwordPolicyIsSet_;
}

void UpdatePasswordPolicyReqBody::unsetpasswordPolicy()
{
    passwordPolicyIsSet_ = false;
}

}
}
}
}
}



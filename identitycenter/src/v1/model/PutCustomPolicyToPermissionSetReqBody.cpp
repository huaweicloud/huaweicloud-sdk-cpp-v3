

#include "huaweicloud/identitycenter/v1/model/PutCustomPolicyToPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutCustomPolicyToPermissionSetReqBody::PutCustomPolicyToPermissionSetReqBody()
{
    customPolicy_ = "";
    customPolicyIsSet_ = false;
}

PutCustomPolicyToPermissionSetReqBody::~PutCustomPolicyToPermissionSetReqBody() = default;

void PutCustomPolicyToPermissionSetReqBody::validate()
{
}

web::json::value PutCustomPolicyToPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customPolicyIsSet_) {
        val[utility::conversions::to_string_t("custom_policy")] = ModelBase::toJson(customPolicy_);
    }

    return val;
}
bool PutCustomPolicyToPermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomPolicy(refVal);
        }
    }
    return ok;
}


std::string PutCustomPolicyToPermissionSetReqBody::getCustomPolicy() const
{
    return customPolicy_;
}

void PutCustomPolicyToPermissionSetReqBody::setCustomPolicy(const std::string& value)
{
    customPolicy_ = value;
    customPolicyIsSet_ = true;
}

bool PutCustomPolicyToPermissionSetReqBody::customPolicyIsSet() const
{
    return customPolicyIsSet_;
}

void PutCustomPolicyToPermissionSetReqBody::unsetcustomPolicy()
{
    customPolicyIsSet_ = false;
}

}
}
}
}
}



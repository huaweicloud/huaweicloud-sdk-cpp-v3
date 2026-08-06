

#include "huaweicloud/kms/v2/model/UpdateKeyPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyPolicyRequestBody::UpdateKeyPolicyRequestBody()
{
    policy_ = "";
    policyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateKeyPolicyRequestBody::~UpdateKeyPolicyRequestBody() = default;

void UpdateKeyPolicyRequestBody::validate()
{
}

web::json::value UpdateKeyPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool UpdateKeyPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyPolicyRequestBody::getPolicy() const
{
    return policy_;
}

void UpdateKeyPolicyRequestBody::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateKeyPolicyRequestBody::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateKeyPolicyRequestBody::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string UpdateKeyPolicyRequestBody::getDescription() const
{
    return description_;
}

void UpdateKeyPolicyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateKeyPolicyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateKeyPolicyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



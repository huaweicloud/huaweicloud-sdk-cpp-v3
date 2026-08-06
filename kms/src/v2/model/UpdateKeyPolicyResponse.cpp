

#include "huaweicloud/kms/v2/model/UpdateKeyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyPolicyResponse::UpdateKeyPolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    policyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    lastModifyTime_ = "";
    lastModifyTimeIsSet_ = false;
}

UpdateKeyPolicyResponse::~UpdateKeyPolicyResponse() = default;

void UpdateKeyPolicyResponse::validate()
{
}

web::json::value UpdateKeyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(lastModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modify_time")] = ModelBase::toJson(lastModifyTime_);
    }

    return val;
}
bool UpdateKeyPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            UpdateKeyPolicyResponseBody_policy refVal;
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
    if(val.has_field(utility::conversions::to_string_t("last_modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modify_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifyTime(refVal);
        }
    }
    return ok;
}


std::string UpdateKeyPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void UpdateKeyPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool UpdateKeyPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void UpdateKeyPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

UpdateKeyPolicyResponseBody_policy UpdateKeyPolicyResponse::getPolicy() const
{
    return policy_;
}

void UpdateKeyPolicyResponse::setPolicy(const UpdateKeyPolicyResponseBody_policy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateKeyPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateKeyPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string UpdateKeyPolicyResponse::getDescription() const
{
    return description_;
}

void UpdateKeyPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateKeyPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateKeyPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateKeyPolicyResponse::getLastModifyTime() const
{
    return lastModifyTime_;
}

void UpdateKeyPolicyResponse::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool UpdateKeyPolicyResponse::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void UpdateKeyPolicyResponse::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

}
}
}
}
}



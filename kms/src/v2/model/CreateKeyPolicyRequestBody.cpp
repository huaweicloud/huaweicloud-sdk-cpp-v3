

#include "huaweicloud/kms/v2/model/CreateKeyPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyPolicyRequestBody::CreateKeyPolicyRequestBody()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    policy_ = "";
    policyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateKeyPolicyRequestBody::~CreateKeyPolicyRequestBody() = default;

void CreateKeyPolicyRequestBody::validate()
{
}

web::json::value CreateKeyPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateKeyPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
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


std::string CreateKeyPolicyRequestBody::getKeyspaceId() const
{
    return keyspaceId_;
}

void CreateKeyPolicyRequestBody::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool CreateKeyPolicyRequestBody::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void CreateKeyPolicyRequestBody::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string CreateKeyPolicyRequestBody::getPolicyName() const
{
    return policyName_;
}

void CreateKeyPolicyRequestBody::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool CreateKeyPolicyRequestBody::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void CreateKeyPolicyRequestBody::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string CreateKeyPolicyRequestBody::getPolicy() const
{
    return policy_;
}

void CreateKeyPolicyRequestBody::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool CreateKeyPolicyRequestBody::policyIsSet() const
{
    return policyIsSet_;
}

void CreateKeyPolicyRequestBody::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string CreateKeyPolicyRequestBody::getDescription() const
{
    return description_;
}

void CreateKeyPolicyRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateKeyPolicyRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateKeyPolicyRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



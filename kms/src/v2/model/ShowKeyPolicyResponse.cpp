

#include "huaweicloud/kms/v2/model/ShowKeyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyPolicyResponse::ShowKeyPolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    policyIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastModifyTime_ = "";
    lastModifyTimeIsSet_ = false;
    lastAccessTime_ = "";
    lastAccessTimeIsSet_ = false;
}

ShowKeyPolicyResponse::~ShowKeyPolicyResponse() = default;

void ShowKeyPolicyResponse::validate()
{
}

web::json::value ShowKeyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modify_time")] = ModelBase::toJson(lastModifyTime_);
    }
    if(lastAccessTimeIsSet_) {
        val[utility::conversions::to_string_t("last_access_time")] = ModelBase::toJson(lastAccessTime_);
    }

    return val;
}
bool ShowKeyPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            ShowKeyPolicyResponseBody_policy refVal;
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
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_access_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_access_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastAccessTime(refVal);
        }
    }
    return ok;
}


std::string ShowKeyPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void ShowKeyPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ShowKeyPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ShowKeyPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getPolicyName() const
{
    return policyName_;
}

void ShowKeyPolicyResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ShowKeyPolicyResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ShowKeyPolicyResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getKeyspaceId() const
{
    return keyspaceId_;
}

void ShowKeyPolicyResponse::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ShowKeyPolicyResponse::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ShowKeyPolicyResponse::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

ShowKeyPolicyResponseBody_policy ShowKeyPolicyResponse::getPolicy() const
{
    return policy_;
}

void ShowKeyPolicyResponse::setPolicy(const ShowKeyPolicyResponseBody_policy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowKeyPolicyResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowKeyPolicyResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getDescription() const
{
    return description_;
}

void ShowKeyPolicyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowKeyPolicyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowKeyPolicyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getCreatedBy() const
{
    return createdBy_;
}

void ShowKeyPolicyResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ShowKeyPolicyResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void ShowKeyPolicyResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getCreateTime() const
{
    return createTime_;
}

void ShowKeyPolicyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowKeyPolicyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowKeyPolicyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getLastModifyTime() const
{
    return lastModifyTime_;
}

void ShowKeyPolicyResponse::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool ShowKeyPolicyResponse::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void ShowKeyPolicyResponse::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

std::string ShowKeyPolicyResponse::getLastAccessTime() const
{
    return lastAccessTime_;
}

void ShowKeyPolicyResponse::setLastAccessTime(const std::string& value)
{
    lastAccessTime_ = value;
    lastAccessTimeIsSet_ = true;
}

bool ShowKeyPolicyResponse::lastAccessTimeIsSet() const
{
    return lastAccessTimeIsSet_;
}

void ShowKeyPolicyResponse::unsetlastAccessTime()
{
    lastAccessTimeIsSet_ = false;
}

}
}
}
}
}



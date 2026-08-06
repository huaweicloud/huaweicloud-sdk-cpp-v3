

#include "huaweicloud/kms/v2/model/ListKeyPolicyResponseBody_keyspace_policies.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyPolicyResponseBody_keyspace_policies::ListKeyPolicyResponseBody_keyspace_policies()
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

ListKeyPolicyResponseBody_keyspace_policies::~ListKeyPolicyResponseBody_keyspace_policies() = default;

void ListKeyPolicyResponseBody_keyspace_policies::validate()
{
}

web::json::value ListKeyPolicyResponseBody_keyspace_policies::toJson() const
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
bool ListKeyPolicyResponseBody_keyspace_policies::fromJson(const web::json::value& val)
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
            ListKeyPolicyResponseBody_policy refVal;
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


std::string ListKeyPolicyResponseBody_keyspace_policies::getPolicyId() const
{
    return policyId_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getPolicyName() const
{
    return policyName_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getKeyspaceId() const
{
    return keyspaceId_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

ListKeyPolicyResponseBody_policy ListKeyPolicyResponseBody_keyspace_policies::getPolicy() const
{
    return policy_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setPolicy(const ListKeyPolicyResponseBody_policy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::policyIsSet() const
{
    return policyIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getDescription() const
{
    return description_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getCreatedBy() const
{
    return createdBy_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::createdByIsSet() const
{
    return createdByIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getCreateTime() const
{
    return createTime_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getLastModifyTime() const
{
    return lastModifyTime_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

std::string ListKeyPolicyResponseBody_keyspace_policies::getLastAccessTime() const
{
    return lastAccessTime_;
}

void ListKeyPolicyResponseBody_keyspace_policies::setLastAccessTime(const std::string& value)
{
    lastAccessTime_ = value;
    lastAccessTimeIsSet_ = true;
}

bool ListKeyPolicyResponseBody_keyspace_policies::lastAccessTimeIsSet() const
{
    return lastAccessTimeIsSet_;
}

void ListKeyPolicyResponseBody_keyspace_policies::unsetlastAccessTime()
{
    lastAccessTimeIsSet_ = false;
}

}
}
}
}
}



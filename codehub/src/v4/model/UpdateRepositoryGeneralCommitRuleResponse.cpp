

#include "huaweicloud/codehub/v4/model/UpdateRepositoryGeneralCommitRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryGeneralCommitRuleResponse::UpdateRepositoryGeneralCommitRuleResponse()
{
    rejectUnsignedCommits_ = false;
    rejectUnsignedCommitsIsSet_ = false;
    rejectNotSignedByGpg_ = false;
    rejectNotSignedByGpgIsSet_ = false;
    denyDeleteTag_ = false;
    denyDeleteTagIsSet_ = false;
    preventSecrets_ = false;
    preventSecretsIsSet_ = false;
    denyForcePush_ = false;
    denyForcePushIsSet_ = false;
}

UpdateRepositoryGeneralCommitRuleResponse::~UpdateRepositoryGeneralCommitRuleResponse() = default;

void UpdateRepositoryGeneralCommitRuleResponse::validate()
{
}

web::json::value UpdateRepositoryGeneralCommitRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rejectUnsignedCommitsIsSet_) {
        val[utility::conversions::to_string_t("reject_unsigned_commits")] = ModelBase::toJson(rejectUnsignedCommits_);
    }
    if(rejectNotSignedByGpgIsSet_) {
        val[utility::conversions::to_string_t("reject_not_signed_by_gpg")] = ModelBase::toJson(rejectNotSignedByGpg_);
    }
    if(denyDeleteTagIsSet_) {
        val[utility::conversions::to_string_t("deny_delete_tag")] = ModelBase::toJson(denyDeleteTag_);
    }
    if(preventSecretsIsSet_) {
        val[utility::conversions::to_string_t("prevent_secrets")] = ModelBase::toJson(preventSecrets_);
    }
    if(denyForcePushIsSet_) {
        val[utility::conversions::to_string_t("deny_force_push")] = ModelBase::toJson(denyForcePush_);
    }

    return val;
}
bool UpdateRepositoryGeneralCommitRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reject_unsigned_commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reject_unsigned_commits"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectUnsignedCommits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reject_not_signed_by_gpg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reject_not_signed_by_gpg"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectNotSignedByGpg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_delete_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_delete_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyDeleteTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prevent_secrets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prevent_secrets"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreventSecrets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_force_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_force_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyForcePush(refVal);
        }
    }
    return ok;
}


bool UpdateRepositoryGeneralCommitRuleResponse::isRejectUnsignedCommits() const
{
    return rejectUnsignedCommits_;
}

void UpdateRepositoryGeneralCommitRuleResponse::setRejectUnsignedCommits(bool value)
{
    rejectUnsignedCommits_ = value;
    rejectUnsignedCommitsIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleResponse::rejectUnsignedCommitsIsSet() const
{
    return rejectUnsignedCommitsIsSet_;
}

void UpdateRepositoryGeneralCommitRuleResponse::unsetrejectUnsignedCommits()
{
    rejectUnsignedCommitsIsSet_ = false;
}

bool UpdateRepositoryGeneralCommitRuleResponse::isRejectNotSignedByGpg() const
{
    return rejectNotSignedByGpg_;
}

void UpdateRepositoryGeneralCommitRuleResponse::setRejectNotSignedByGpg(bool value)
{
    rejectNotSignedByGpg_ = value;
    rejectNotSignedByGpgIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleResponse::rejectNotSignedByGpgIsSet() const
{
    return rejectNotSignedByGpgIsSet_;
}

void UpdateRepositoryGeneralCommitRuleResponse::unsetrejectNotSignedByGpg()
{
    rejectNotSignedByGpgIsSet_ = false;
}

bool UpdateRepositoryGeneralCommitRuleResponse::isDenyDeleteTag() const
{
    return denyDeleteTag_;
}

void UpdateRepositoryGeneralCommitRuleResponse::setDenyDeleteTag(bool value)
{
    denyDeleteTag_ = value;
    denyDeleteTagIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleResponse::denyDeleteTagIsSet() const
{
    return denyDeleteTagIsSet_;
}

void UpdateRepositoryGeneralCommitRuleResponse::unsetdenyDeleteTag()
{
    denyDeleteTagIsSet_ = false;
}

bool UpdateRepositoryGeneralCommitRuleResponse::isPreventSecrets() const
{
    return preventSecrets_;
}

void UpdateRepositoryGeneralCommitRuleResponse::setPreventSecrets(bool value)
{
    preventSecrets_ = value;
    preventSecretsIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleResponse::preventSecretsIsSet() const
{
    return preventSecretsIsSet_;
}

void UpdateRepositoryGeneralCommitRuleResponse::unsetpreventSecrets()
{
    preventSecretsIsSet_ = false;
}

bool UpdateRepositoryGeneralCommitRuleResponse::isDenyForcePush() const
{
    return denyForcePush_;
}

void UpdateRepositoryGeneralCommitRuleResponse::setDenyForcePush(bool value)
{
    denyForcePush_ = value;
    denyForcePushIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleResponse::denyForcePushIsSet() const
{
    return denyForcePushIsSet_;
}

void UpdateRepositoryGeneralCommitRuleResponse::unsetdenyForcePush()
{
    denyForcePushIsSet_ = false;
}

}
}
}
}
}



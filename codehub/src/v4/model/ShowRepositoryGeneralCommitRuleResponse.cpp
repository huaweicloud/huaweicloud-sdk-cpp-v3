

#include "huaweicloud/codehub/v4/model/ShowRepositoryGeneralCommitRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryGeneralCommitRuleResponse::ShowRepositoryGeneralCommitRuleResponse()
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

ShowRepositoryGeneralCommitRuleResponse::~ShowRepositoryGeneralCommitRuleResponse() = default;

void ShowRepositoryGeneralCommitRuleResponse::validate()
{
}

web::json::value ShowRepositoryGeneralCommitRuleResponse::toJson() const
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
bool ShowRepositoryGeneralCommitRuleResponse::fromJson(const web::json::value& val)
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


bool ShowRepositoryGeneralCommitRuleResponse::isRejectUnsignedCommits() const
{
    return rejectUnsignedCommits_;
}

void ShowRepositoryGeneralCommitRuleResponse::setRejectUnsignedCommits(bool value)
{
    rejectUnsignedCommits_ = value;
    rejectUnsignedCommitsIsSet_ = true;
}

bool ShowRepositoryGeneralCommitRuleResponse::rejectUnsignedCommitsIsSet() const
{
    return rejectUnsignedCommitsIsSet_;
}

void ShowRepositoryGeneralCommitRuleResponse::unsetrejectUnsignedCommits()
{
    rejectUnsignedCommitsIsSet_ = false;
}

bool ShowRepositoryGeneralCommitRuleResponse::isRejectNotSignedByGpg() const
{
    return rejectNotSignedByGpg_;
}

void ShowRepositoryGeneralCommitRuleResponse::setRejectNotSignedByGpg(bool value)
{
    rejectNotSignedByGpg_ = value;
    rejectNotSignedByGpgIsSet_ = true;
}

bool ShowRepositoryGeneralCommitRuleResponse::rejectNotSignedByGpgIsSet() const
{
    return rejectNotSignedByGpgIsSet_;
}

void ShowRepositoryGeneralCommitRuleResponse::unsetrejectNotSignedByGpg()
{
    rejectNotSignedByGpgIsSet_ = false;
}

bool ShowRepositoryGeneralCommitRuleResponse::isDenyDeleteTag() const
{
    return denyDeleteTag_;
}

void ShowRepositoryGeneralCommitRuleResponse::setDenyDeleteTag(bool value)
{
    denyDeleteTag_ = value;
    denyDeleteTagIsSet_ = true;
}

bool ShowRepositoryGeneralCommitRuleResponse::denyDeleteTagIsSet() const
{
    return denyDeleteTagIsSet_;
}

void ShowRepositoryGeneralCommitRuleResponse::unsetdenyDeleteTag()
{
    denyDeleteTagIsSet_ = false;
}

bool ShowRepositoryGeneralCommitRuleResponse::isPreventSecrets() const
{
    return preventSecrets_;
}

void ShowRepositoryGeneralCommitRuleResponse::setPreventSecrets(bool value)
{
    preventSecrets_ = value;
    preventSecretsIsSet_ = true;
}

bool ShowRepositoryGeneralCommitRuleResponse::preventSecretsIsSet() const
{
    return preventSecretsIsSet_;
}

void ShowRepositoryGeneralCommitRuleResponse::unsetpreventSecrets()
{
    preventSecretsIsSet_ = false;
}

bool ShowRepositoryGeneralCommitRuleResponse::isDenyForcePush() const
{
    return denyForcePush_;
}

void ShowRepositoryGeneralCommitRuleResponse::setDenyForcePush(bool value)
{
    denyForcePush_ = value;
    denyForcePushIsSet_ = true;
}

bool ShowRepositoryGeneralCommitRuleResponse::denyForcePushIsSet() const
{
    return denyForcePushIsSet_;
}

void ShowRepositoryGeneralCommitRuleResponse::unsetdenyForcePush()
{
    denyForcePushIsSet_ = false;
}

}
}
}
}
}



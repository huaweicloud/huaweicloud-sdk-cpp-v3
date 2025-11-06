

#include "huaweicloud/codeartsrepo/v4/model/GeneralCommitRuleBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GeneralCommitRuleBodyDto::GeneralCommitRuleBodyDto()
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

GeneralCommitRuleBodyDto::~GeneralCommitRuleBodyDto() = default;

void GeneralCommitRuleBodyDto::validate()
{
}

web::json::value GeneralCommitRuleBodyDto::toJson() const
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
bool GeneralCommitRuleBodyDto::fromJson(const web::json::value& val)
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


bool GeneralCommitRuleBodyDto::isRejectUnsignedCommits() const
{
    return rejectUnsignedCommits_;
}

void GeneralCommitRuleBodyDto::setRejectUnsignedCommits(bool value)
{
    rejectUnsignedCommits_ = value;
    rejectUnsignedCommitsIsSet_ = true;
}

bool GeneralCommitRuleBodyDto::rejectUnsignedCommitsIsSet() const
{
    return rejectUnsignedCommitsIsSet_;
}

void GeneralCommitRuleBodyDto::unsetrejectUnsignedCommits()
{
    rejectUnsignedCommitsIsSet_ = false;
}

bool GeneralCommitRuleBodyDto::isRejectNotSignedByGpg() const
{
    return rejectNotSignedByGpg_;
}

void GeneralCommitRuleBodyDto::setRejectNotSignedByGpg(bool value)
{
    rejectNotSignedByGpg_ = value;
    rejectNotSignedByGpgIsSet_ = true;
}

bool GeneralCommitRuleBodyDto::rejectNotSignedByGpgIsSet() const
{
    return rejectNotSignedByGpgIsSet_;
}

void GeneralCommitRuleBodyDto::unsetrejectNotSignedByGpg()
{
    rejectNotSignedByGpgIsSet_ = false;
}

bool GeneralCommitRuleBodyDto::isDenyDeleteTag() const
{
    return denyDeleteTag_;
}

void GeneralCommitRuleBodyDto::setDenyDeleteTag(bool value)
{
    denyDeleteTag_ = value;
    denyDeleteTagIsSet_ = true;
}

bool GeneralCommitRuleBodyDto::denyDeleteTagIsSet() const
{
    return denyDeleteTagIsSet_;
}

void GeneralCommitRuleBodyDto::unsetdenyDeleteTag()
{
    denyDeleteTagIsSet_ = false;
}

bool GeneralCommitRuleBodyDto::isPreventSecrets() const
{
    return preventSecrets_;
}

void GeneralCommitRuleBodyDto::setPreventSecrets(bool value)
{
    preventSecrets_ = value;
    preventSecretsIsSet_ = true;
}

bool GeneralCommitRuleBodyDto::preventSecretsIsSet() const
{
    return preventSecretsIsSet_;
}

void GeneralCommitRuleBodyDto::unsetpreventSecrets()
{
    preventSecretsIsSet_ = false;
}

bool GeneralCommitRuleBodyDto::isDenyForcePush() const
{
    return denyForcePush_;
}

void GeneralCommitRuleBodyDto::setDenyForcePush(bool value)
{
    denyForcePush_ = value;
    denyForcePushIsSet_ = true;
}

bool GeneralCommitRuleBodyDto::denyForcePushIsSet() const
{
    return denyForcePushIsSet_;
}

void GeneralCommitRuleBodyDto::unsetdenyForcePush()
{
    denyForcePushIsSet_ = false;
}

}
}
}
}
}



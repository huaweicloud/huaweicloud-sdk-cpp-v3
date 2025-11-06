

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryCommitRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryCommitRuleRequest::UpdateRepositoryCommitRuleRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    commitRuleId_ = 0;
    commitRuleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryCommitRuleRequest::~UpdateRepositoryCommitRuleRequest() = default;

void UpdateRepositoryCommitRuleRequest::validate()
{
}

web::json::value UpdateRepositoryCommitRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(commitRuleIdIsSet_) {
        val[utility::conversions::to_string_t("commit_rule_id")] = ModelBase::toJson(commitRuleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRepositoryCommitRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_rule_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommitRuleUpdateBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryCommitRuleRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryCommitRuleRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryCommitRuleRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryCommitRuleRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateRepositoryCommitRuleRequest::getCommitRuleId() const
{
    return commitRuleId_;
}

void UpdateRepositoryCommitRuleRequest::setCommitRuleId(int32_t value)
{
    commitRuleId_ = value;
    commitRuleIdIsSet_ = true;
}

bool UpdateRepositoryCommitRuleRequest::commitRuleIdIsSet() const
{
    return commitRuleIdIsSet_;
}

void UpdateRepositoryCommitRuleRequest::unsetcommitRuleId()
{
    commitRuleIdIsSet_ = false;
}

CommitRuleUpdateBodyDto UpdateRepositoryCommitRuleRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryCommitRuleRequest::setBody(const CommitRuleUpdateBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryCommitRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryCommitRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



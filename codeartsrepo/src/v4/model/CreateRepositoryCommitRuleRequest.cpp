

#include "huaweicloud/codeartsrepo/v4/model/CreateRepositoryCommitRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateRepositoryCommitRuleRequest::CreateRepositoryCommitRuleRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRepositoryCommitRuleRequest::~CreateRepositoryCommitRuleRequest() = default;

void CreateRepositoryCommitRuleRequest::validate()
{
}

web::json::value CreateRepositoryCommitRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRepositoryCommitRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommitRuleCreateBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateRepositoryCommitRuleRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateRepositoryCommitRuleRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateRepositoryCommitRuleRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateRepositoryCommitRuleRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CommitRuleCreateBodyDto CreateRepositoryCommitRuleRequest::getBody() const
{
    return body_;
}

void CreateRepositoryCommitRuleRequest::setBody(const CommitRuleCreateBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRepositoryCommitRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRepositoryCommitRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



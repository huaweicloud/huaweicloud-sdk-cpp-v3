

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralCommitRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryGeneralCommitRuleRequest::UpdateRepositoryGeneralCommitRuleRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryGeneralCommitRuleRequest::~UpdateRepositoryGeneralCommitRuleRequest() = default;

void UpdateRepositoryGeneralCommitRuleRequest::validate()
{
}

web::json::value UpdateRepositoryGeneralCommitRuleRequest::toJson() const
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
bool UpdateRepositoryGeneralCommitRuleRequest::fromJson(const web::json::value& val)
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
            GeneralCommitRuleBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryGeneralCommitRuleRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryGeneralCommitRuleRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryGeneralCommitRuleRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

GeneralCommitRuleBodyDto UpdateRepositoryGeneralCommitRuleRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryGeneralCommitRuleRequest::setBody(const GeneralCommitRuleBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryGeneralCommitRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryGeneralCommitRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



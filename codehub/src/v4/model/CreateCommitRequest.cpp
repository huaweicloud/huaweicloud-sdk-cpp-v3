

#include "huaweicloud/codehub/v4/model/CreateCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateCommitRequest::CreateCommitRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCommitRequest::~CreateCommitRequest() = default;

void CreateCommitRequest::validate()
{
}

web::json::value CreateCommitRequest::toJson() const
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
bool CreateCommitRequest::fromJson(const web::json::value& val)
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
            CommitParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateCommitRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateCommitRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateCommitRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateCommitRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

CommitParams CreateCommitRequest::getBody() const
{
    return body_;
}

void CreateCommitRequest::setBody(const CommitParams& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCommitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCommitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



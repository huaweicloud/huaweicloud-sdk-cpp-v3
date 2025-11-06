

#include "huaweicloud/codeartsrepo/v4/model/CreateCommitRevertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateCommitRevertRequest::CreateCommitRevertRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCommitRevertRequest::~CreateCommitRevertRequest() = default;

void CreateCommitRevertRequest::validate()
{
}

web::json::value CreateCommitRevertRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCommitRevertRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommitRevetOrCherryPickDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateCommitRevertRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateCommitRevertRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateCommitRevertRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateCommitRevertRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CreateCommitRevertRequest::getSha() const
{
    return sha_;
}

void CreateCommitRevertRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool CreateCommitRevertRequest::shaIsSet() const
{
    return shaIsSet_;
}

void CreateCommitRevertRequest::unsetsha()
{
    shaIsSet_ = false;
}

CommitRevetOrCherryPickDto CreateCommitRevertRequest::getBody() const
{
    return body_;
}

void CreateCommitRevertRequest::setBody(const CommitRevetOrCherryPickDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCommitRevertRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCommitRevertRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



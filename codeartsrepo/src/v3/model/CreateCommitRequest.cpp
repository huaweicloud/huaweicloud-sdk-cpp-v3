

#include "huaweicloud/codeartsrepo/v3/model/CreateCommitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateCommitRequest::CreateCommitRequest()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCommitRequest::~CreateCommitRequest() = default;

void CreateCommitRequest::validate()
{
}

web::json::value CreateCommitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCommitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateCommitRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateCommitRequest::getRepoId() const
{
    return repoId_;
}

void CreateCommitRequest::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool CreateCommitRequest::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void CreateCommitRequest::unsetrepoId()
{
    repoIdIsSet_ = false;
}

CreateCommitRequestBody CreateCommitRequest::getBody() const
{
    return body_;
}

void CreateCommitRequest::setBody(const CreateCommitRequestBody& value)
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



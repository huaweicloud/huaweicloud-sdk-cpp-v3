

#include "huaweicloud/codeartsrepo/v4/model/CheckDeployKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CheckDeployKeyRequest::CheckDeployKeyRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckDeployKeyRequest::~CheckDeployKeyRequest() = default;

void CheckDeployKeyRequest::validate()
{
}

web::json::value CheckDeployKeyRequest::toJson() const
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
bool CheckDeployKeyRequest::fromJson(const web::json::value& val)
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
            DeployKeyValueDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CheckDeployKeyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CheckDeployKeyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CheckDeployKeyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CheckDeployKeyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

DeployKeyValueDto CheckDeployKeyRequest::getBody() const
{
    return body_;
}

void CheckDeployKeyRequest::setBody(const DeployKeyValueDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDeployKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDeployKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



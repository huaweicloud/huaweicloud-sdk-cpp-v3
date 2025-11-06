

#include "huaweicloud/codeartsrepo/v3/model/AddDeployKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddDeployKeyRequest::AddDeployKeyRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDeployKeyRequest::~AddDeployKeyRequest() = default;

void AddDeployKeyRequest::validate()
{
}

web::json::value AddDeployKeyRequest::toJson() const
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
bool AddDeployKeyRequest::fromJson(const web::json::value& val)
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
            AddDeployKeyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddDeployKeyRequest::getRepositoryId() const
{
    return repositoryId_;
}

void AddDeployKeyRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddDeployKeyRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddDeployKeyRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

AddDeployKeyRequestBody AddDeployKeyRequest::getBody() const
{
    return body_;
}

void AddDeployKeyRequest::setBody(const AddDeployKeyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDeployKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDeployKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchDeleteProtectedTagsRequest::BatchDeleteProtectedTagsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteProtectedTagsRequest::~BatchDeleteProtectedTagsRequest() = default;

void BatchDeleteProtectedTagsRequest::validate()
{
}

web::json::value BatchDeleteProtectedTagsRequest::toJson() const
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
bool BatchDeleteProtectedTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteProtectedTagsBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchDeleteProtectedTagsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchDeleteProtectedTagsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchDeleteProtectedTagsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchDeleteProtectedTagsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchDeleteProtectedTagsBodyDto BatchDeleteProtectedTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteProtectedTagsRequest::setBody(const BatchDeleteProtectedTagsBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteProtectedTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteProtectedTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



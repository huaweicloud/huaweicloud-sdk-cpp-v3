

#include "huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchUpdateProtectedTagsRequest::BatchUpdateProtectedTagsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateProtectedTagsRequest::~BatchUpdateProtectedTagsRequest() = default;

void BatchUpdateProtectedTagsRequest::validate()
{
}

web::json::value BatchUpdateProtectedTagsRequest::toJson() const
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
bool BatchUpdateProtectedTagsRequest::fromJson(const web::json::value& val)
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
            BatchUpdateProtectedTagsBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchUpdateProtectedTagsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchUpdateProtectedTagsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchUpdateProtectedTagsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchUpdateProtectedTagsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

BatchUpdateProtectedTagsBodyDto BatchUpdateProtectedTagsRequest::getBody() const
{
    return body_;
}

void BatchUpdateProtectedTagsRequest::setBody(const BatchUpdateProtectedTagsBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateProtectedTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateProtectedTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



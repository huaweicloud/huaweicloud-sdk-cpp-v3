

#include "huaweicloud/codehub/v4/model/BatchCreateProtectedTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchCreateProtectedTagsRequest::BatchCreateProtectedTagsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateProtectedTagsRequest::~BatchCreateProtectedTagsRequest() = default;

void BatchCreateProtectedTagsRequest::validate()
{
}

web::json::value BatchCreateProtectedTagsRequest::toJson() const
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
bool BatchCreateProtectedTagsRequest::fromJson(const web::json::value& val)
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
            RepositoryProtectedTagBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t BatchCreateProtectedTagsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void BatchCreateProtectedTagsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool BatchCreateProtectedTagsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void BatchCreateProtectedTagsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

RepositoryProtectedTagBodyDto BatchCreateProtectedTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateProtectedTagsRequest::setBody(const RepositoryProtectedTagBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateProtectedTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateProtectedTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



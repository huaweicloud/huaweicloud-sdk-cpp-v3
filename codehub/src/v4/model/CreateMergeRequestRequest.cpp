

#include "huaweicloud/codehub/v4/model/CreateMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestRequest::CreateMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestRequest::~CreateMergeRequestRequest() = default;

void CreateMergeRequestRequest::validate()
{
}

web::json::value CreateMergeRequestRequest::toJson() const
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
bool CreateMergeRequestRequest::fromJson(const web::json::value& val)
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
            PostMergeRequestParamsDtoForOpenApi refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

PostMergeRequestParamsDtoForOpenApi CreateMergeRequestRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestRequest::setBody(const PostMergeRequestParamsDtoForOpenApi& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



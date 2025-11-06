

#include "huaweicloud/codeartsrepo/v4/model/CreateReviewSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateReviewSettingRequest::CreateReviewSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateReviewSettingRequest::~CreateReviewSettingRequest() = default;

void CreateReviewSettingRequest::validate()
{
}

web::json::value CreateReviewSettingRequest::toJson() const
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
bool CreateReviewSettingRequest::fromJson(const web::json::value& val)
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
            ReviewSettingParamDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateReviewSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateReviewSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateReviewSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateReviewSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

ReviewSettingParamDto CreateReviewSettingRequest::getBody() const
{
    return body_;
}

void CreateReviewSettingRequest::setBody(const ReviewSettingParamDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReviewSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReviewSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



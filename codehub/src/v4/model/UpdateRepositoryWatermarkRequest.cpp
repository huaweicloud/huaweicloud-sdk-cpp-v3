

#include "huaweicloud/codehub/v4/model/UpdateRepositoryWatermarkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryWatermarkRequest::UpdateRepositoryWatermarkRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRepositoryWatermarkRequest::~UpdateRepositoryWatermarkRequest() = default;

void UpdateRepositoryWatermarkRequest::validate()
{
}

web::json::value UpdateRepositoryWatermarkRequest::toJson() const
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
bool UpdateRepositoryWatermarkRequest::fromJson(const web::json::value& val)
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
            UpdateWatermarkDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateRepositoryWatermarkRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateRepositoryWatermarkRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateRepositoryWatermarkRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateRepositoryWatermarkRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

UpdateWatermarkDto UpdateRepositoryWatermarkRequest::getBody() const
{
    return body_;
}

void UpdateRepositoryWatermarkRequest::setBody(const UpdateWatermarkDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRepositoryWatermarkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRepositoryWatermarkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



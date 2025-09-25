

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestSettingRequest::UpdateMergeRequestSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestSettingRequest::~UpdateMergeRequestSettingRequest() = default;

void UpdateMergeRequestSettingRequest::validate()
{
}

web::json::value UpdateMergeRequestSettingRequest::toJson() const
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
bool UpdateMergeRequestSettingRequest::fromJson(const web::json::value& val)
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
            UpdateMergeRequestSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

UpdateMergeRequestSettingDto UpdateMergeRequestSettingRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestSettingRequest::setBody(const UpdateMergeRequestSettingDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/codehub/v4/model/UpdateMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestApproverSettingRequest::UpdateMergeRequestApproverSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestApproverSettingRequest::~UpdateMergeRequestApproverSettingRequest() = default;

void UpdateMergeRequestApproverSettingRequest::validate()
{
}

web::json::value UpdateMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("setting_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MergeRequestApproverSettingResultDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestApproverSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestApproverSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestApproverSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void UpdateMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void UpdateMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

MergeRequestApproverSettingResultDto UpdateMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestApproverSettingRequest::setBody(const MergeRequestApproverSettingResultDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



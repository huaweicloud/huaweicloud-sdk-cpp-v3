

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectMergeRequestApproverSettingRequest::UpdateProjectMergeRequestApproverSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectMergeRequestApproverSettingRequest::~UpdateProjectMergeRequestApproverSettingRequest() = default;

void UpdateProjectMergeRequestApproverSettingRequest::validate()
{
}

web::json::value UpdateProjectMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
            CreateMergeRequestApproverSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectMergeRequestApproverSettingRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectMergeRequestApproverSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectMergeRequestApproverSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectMergeRequestApproverSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateProjectMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void UpdateProjectMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool UpdateProjectMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void UpdateProjectMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

CreateMergeRequestApproverSettingDto UpdateProjectMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void UpdateProjectMergeRequestApproverSettingRequest::setBody(const CreateMergeRequestApproverSettingDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



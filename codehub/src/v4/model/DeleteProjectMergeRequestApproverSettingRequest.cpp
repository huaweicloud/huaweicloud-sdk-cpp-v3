

#include "huaweicloud/codehub/v4/model/DeleteProjectMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProjectMergeRequestApproverSettingRequest::DeleteProjectMergeRequestApproverSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
}

DeleteProjectMergeRequestApproverSettingRequest::~DeleteProjectMergeRequestApproverSettingRequest() = default;

void DeleteProjectMergeRequestApproverSettingRequest::validate()
{
}

web::json::value DeleteProjectMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }

    return val;
}
bool DeleteProjectMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteProjectMergeRequestApproverSettingRequest::getProjectId() const
{
    return projectId_;
}

void DeleteProjectMergeRequestApproverSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteProjectMergeRequestApproverSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteProjectMergeRequestApproverSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t DeleteProjectMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void DeleteProjectMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool DeleteProjectMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void DeleteProjectMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

}
}
}
}
}



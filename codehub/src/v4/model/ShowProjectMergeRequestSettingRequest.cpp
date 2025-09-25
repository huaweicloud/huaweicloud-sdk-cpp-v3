

#include "huaweicloud/codehub/v4/model/ShowProjectMergeRequestSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectMergeRequestSettingRequest::ShowProjectMergeRequestSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectMergeRequestSettingRequest::~ShowProjectMergeRequestSettingRequest() = default;

void ShowProjectMergeRequestSettingRequest::validate()
{
}

web::json::value ShowProjectMergeRequestSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectMergeRequestSettingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowProjectMergeRequestSettingRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectMergeRequestSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectMergeRequestSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectMergeRequestSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



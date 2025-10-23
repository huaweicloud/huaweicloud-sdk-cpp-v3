

#include "huaweicloud/codehub/v4/model/ShowProjectE2eSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectE2eSettingRequest::ShowProjectE2eSettingRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectE2eSettingRequest::~ShowProjectE2eSettingRequest() = default;

void ShowProjectE2eSettingRequest::validate()
{
}

web::json::value ShowProjectE2eSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectE2eSettingRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectE2eSettingRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectE2eSettingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectE2eSettingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectE2eSettingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



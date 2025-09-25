

#include "huaweicloud/codehub/v4/model/ShowProjectWatermarkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectWatermarkRequest::ShowProjectWatermarkRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectWatermarkRequest::~ShowProjectWatermarkRequest() = default;

void ShowProjectWatermarkRequest::validate()
{
}

web::json::value ShowProjectWatermarkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectWatermarkRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectWatermarkRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectWatermarkRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectWatermarkRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectWatermarkRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



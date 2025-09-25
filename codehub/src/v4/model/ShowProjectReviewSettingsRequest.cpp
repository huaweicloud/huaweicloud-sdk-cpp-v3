

#include "huaweicloud/codehub/v4/model/ShowProjectReviewSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectReviewSettingsRequest::ShowProjectReviewSettingsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectReviewSettingsRequest::~ShowProjectReviewSettingsRequest() = default;

void ShowProjectReviewSettingsRequest::validate()
{
}

web::json::value ShowProjectReviewSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectReviewSettingsRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectReviewSettingsRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectReviewSettingsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectReviewSettingsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectReviewSettingsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



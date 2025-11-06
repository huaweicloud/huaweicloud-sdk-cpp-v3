

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectReviewSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectReviewSettingsRequest::UpdateProjectReviewSettingsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectReviewSettingsRequest::~UpdateProjectReviewSettingsRequest() = default;

void UpdateProjectReviewSettingsRequest::validate()
{
}

web::json::value UpdateProjectReviewSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectReviewSettingsRequest::fromJson(const web::json::value& val)
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


std::string UpdateProjectReviewSettingsRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectReviewSettingsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectReviewSettingsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectReviewSettingsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ReviewSettingParamDto UpdateProjectReviewSettingsRequest::getBody() const
{
    return body_;
}

void UpdateProjectReviewSettingsRequest::setBody(const ReviewSettingParamDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectReviewSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectReviewSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



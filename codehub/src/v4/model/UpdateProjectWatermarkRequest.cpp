

#include "huaweicloud/codehub/v4/model/UpdateProjectWatermarkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProjectWatermarkRequest::UpdateProjectWatermarkRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectWatermarkRequest::~UpdateProjectWatermarkRequest() = default;

void UpdateProjectWatermarkRequest::validate()
{
}

web::json::value UpdateProjectWatermarkRequest::toJson() const
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
bool UpdateProjectWatermarkRequest::fromJson(const web::json::value& val)
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
            UpdateWatermarkDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectWatermarkRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectWatermarkRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectWatermarkRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectWatermarkRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateWatermarkDto UpdateProjectWatermarkRequest::getBody() const
{
    return body_;
}

void UpdateProjectWatermarkRequest::setBody(const UpdateWatermarkDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectWatermarkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectWatermarkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



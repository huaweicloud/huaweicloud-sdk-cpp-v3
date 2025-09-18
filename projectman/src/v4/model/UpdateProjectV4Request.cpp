

#include "huaweicloud/projectman/v4/model/UpdateProjectV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectV4Request::UpdateProjectV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectV4Request::~UpdateProjectV4Request() = default;

void UpdateProjectV4Request::validate()
{
}

web::json::value UpdateProjectV4Request::toJson() const
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
bool UpdateProjectV4Request::fromJson(const web::json::value& val)
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
            UpdateProjectRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectV4Request::getProjectId() const
{
    return projectId_;
}

void UpdateProjectV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateProjectRequestV4 UpdateProjectV4Request::getBody() const
{
    return body_;
}

void UpdateProjectV4Request::setBody(const UpdateProjectRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



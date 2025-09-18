

#include "huaweicloud/projectman/v4/model/UpdateProjectModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectModuleRequest::UpdateProjectModuleRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    moduleId_ = 0;
    moduleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectModuleRequest::~UpdateProjectModuleRequest() = default;

void UpdateProjectModuleRequest::validate()
{
}

web::json::value UpdateProjectModuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProjectModuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProjectModuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectModuleRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectModuleRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectModuleRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectModuleRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UpdateProjectModuleRequest::getModuleId() const
{
    return moduleId_;
}

void UpdateProjectModuleRequest::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool UpdateProjectModuleRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void UpdateProjectModuleRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

UpdateProjectModuleRequestBody UpdateProjectModuleRequest::getBody() const
{
    return body_;
}

void UpdateProjectModuleRequest::setBody(const UpdateProjectModuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectModuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectModuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



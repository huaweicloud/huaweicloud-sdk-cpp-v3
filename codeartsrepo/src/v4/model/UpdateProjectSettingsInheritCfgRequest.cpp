

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectSettingsInheritCfgRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectSettingsInheritCfgRequest::UpdateProjectSettingsInheritCfgRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectSettingsInheritCfgRequest::~UpdateProjectSettingsInheritCfgRequest() = default;

void UpdateProjectSettingsInheritCfgRequest::validate()
{
}

web::json::value UpdateProjectSettingsInheritCfgRequest::toJson() const
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
bool UpdateProjectSettingsInheritCfgRequest::fromJson(const web::json::value& val)
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
            SettingsInheritCfgBodyApiDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectSettingsInheritCfgRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectSettingsInheritCfgRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectSettingsInheritCfgRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectSettingsInheritCfgRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

SettingsInheritCfgBodyApiDto UpdateProjectSettingsInheritCfgRequest::getBody() const
{
    return body_;
}

void UpdateProjectSettingsInheritCfgRequest::setBody(const SettingsInheritCfgBodyApiDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectSettingsInheritCfgRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectSettingsInheritCfgRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



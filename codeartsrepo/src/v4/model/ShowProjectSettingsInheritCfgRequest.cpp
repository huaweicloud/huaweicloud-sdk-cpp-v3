

#include "huaweicloud/codeartsrepo/v4/model/ShowProjectSettingsInheritCfgRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowProjectSettingsInheritCfgRequest::ShowProjectSettingsInheritCfgRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectSettingsInheritCfgRequest::~ShowProjectSettingsInheritCfgRequest() = default;

void ShowProjectSettingsInheritCfgRequest::validate()
{
}

web::json::value ShowProjectSettingsInheritCfgRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectSettingsInheritCfgRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectSettingsInheritCfgRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectSettingsInheritCfgRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectSettingsInheritCfgRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectSettingsInheritCfgRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



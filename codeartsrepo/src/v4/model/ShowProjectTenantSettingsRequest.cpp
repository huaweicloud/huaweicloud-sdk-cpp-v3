

#include "huaweicloud/codeartsrepo/v4/model/ShowProjectTenantSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowProjectTenantSettingsRequest::ShowProjectTenantSettingsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectTenantSettingsRequest::~ShowProjectTenantSettingsRequest() = default;

void ShowProjectTenantSettingsRequest::validate()
{
}

web::json::value ShowProjectTenantSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectTenantSettingsRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectTenantSettingsRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectTenantSettingsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectTenantSettingsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectTenantSettingsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



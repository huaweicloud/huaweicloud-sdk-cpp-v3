

#include "huaweicloud/codeartsbuild/v3/model/ShowProjectPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowProjectPermissionRequest::ShowProjectPermissionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectPermissionRequest::~ShowProjectPermissionRequest() = default;

void ShowProjectPermissionRequest::validate()
{
}

web::json::value ShowProjectPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectPermissionRequest::fromJson(const web::json::value& val)
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


std::string ShowProjectPermissionRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectPermissionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectPermissionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectPermissionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



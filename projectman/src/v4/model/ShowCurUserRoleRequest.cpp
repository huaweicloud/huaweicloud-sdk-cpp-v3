

#include "huaweicloud/projectman/v4/model/ShowCurUserRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCurUserRoleRequest::ShowCurUserRoleRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowCurUserRoleRequest::~ShowCurUserRoleRequest() = default;

void ShowCurUserRoleRequest::validate()
{
}

web::json::value ShowCurUserRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowCurUserRoleRequest::fromJson(const web::json::value& val)
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


std::string ShowCurUserRoleRequest::getProjectId() const
{
    return projectId_;
}

void ShowCurUserRoleRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCurUserRoleRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCurUserRoleRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}



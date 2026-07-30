

#include "huaweicloud/modelarts/v1/model/ShowWorkflowsTodolistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowsTodolistRequest::ShowWorkflowsTodolistRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowWorkflowsTodolistRequest::~ShowWorkflowsTodolistRequest() = default;

void ShowWorkflowsTodolistRequest::validate()
{
}

web::json::value ShowWorkflowsTodolistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowWorkflowsTodolistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string ShowWorkflowsTodolistRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkflowsTodolistRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkflowsTodolistRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkflowsTodolistRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}



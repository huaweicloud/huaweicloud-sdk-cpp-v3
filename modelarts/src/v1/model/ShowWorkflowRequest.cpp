

#include "huaweicloud/modelarts/v1/model/ShowWorkflowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowRequest::ShowWorkflowRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowWorkflowRequest::~ShowWorkflowRequest() = default;

void ShowWorkflowRequest::validate()
{
}

web::json::value ShowWorkflowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowWorkflowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
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


std::string ShowWorkflowRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkflowRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkflowRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkflowRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}



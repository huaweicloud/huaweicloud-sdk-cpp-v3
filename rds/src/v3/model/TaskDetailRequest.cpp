

#include "huaweicloud/rds/v3/model/TaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TaskDetailRequest::TaskDetailRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
}

TaskDetailRequest::~TaskDetailRequest() = default;

void TaskDetailRequest::validate()
{
}

web::json::value TaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }

    return val;
}
bool TaskDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    return ok;
}


std::string TaskDetailRequest::getWorkflowId() const
{
    return workflowId_;
}

void TaskDetailRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool TaskDetailRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void TaskDetailRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string TaskDetailRequest::getWorkflowName() const
{
    return workflowName_;
}

void TaskDetailRequest::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool TaskDetailRequest::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void TaskDetailRequest::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

}
}
}
}
}



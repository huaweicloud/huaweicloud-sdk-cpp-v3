

#include "huaweicloud/projectman/v4/model/WorkItemFlowProcessInstanceVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowProcessInstanceVO::WorkItemFlowProcessInstanceVO()
{
    id_ = "";
    idIsSet_ = false;
    flowState_ = 0;
    flowStateIsSet_ = false;
    workflowEntryId_ = "";
    workflowEntryIdIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

WorkItemFlowProcessInstanceVO::~WorkItemFlowProcessInstanceVO() = default;

void WorkItemFlowProcessInstanceVO::validate()
{
}

web::json::value WorkItemFlowProcessInstanceVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(flowStateIsSet_) {
        val[utility::conversions::to_string_t("flow_state")] = ModelBase::toJson(flowState_);
    }
    if(workflowEntryIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_entry_id")] = ModelBase::toJson(workflowEntryId_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool WorkItemFlowProcessInstanceVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_entry_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_entry_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowEntryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowProcessInstanceVO::getId() const
{
    return id_;
}

void WorkItemFlowProcessInstanceVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemFlowProcessInstanceVO::idIsSet() const
{
    return idIsSet_;
}

void WorkItemFlowProcessInstanceVO::unsetid()
{
    idIsSet_ = false;
}

int32_t WorkItemFlowProcessInstanceVO::getFlowState() const
{
    return flowState_;
}

void WorkItemFlowProcessInstanceVO::setFlowState(int32_t value)
{
    flowState_ = value;
    flowStateIsSet_ = true;
}

bool WorkItemFlowProcessInstanceVO::flowStateIsSet() const
{
    return flowStateIsSet_;
}

void WorkItemFlowProcessInstanceVO::unsetflowState()
{
    flowStateIsSet_ = false;
}

std::string WorkItemFlowProcessInstanceVO::getWorkflowEntryId() const
{
    return workflowEntryId_;
}

void WorkItemFlowProcessInstanceVO::setWorkflowEntryId(const std::string& value)
{
    workflowEntryId_ = value;
    workflowEntryIdIsSet_ = true;
}

bool WorkItemFlowProcessInstanceVO::workflowEntryIdIsSet() const
{
    return workflowEntryIdIsSet_;
}

void WorkItemFlowProcessInstanceVO::unsetworkflowEntryId()
{
    workflowEntryIdIsSet_ = false;
}

std::string WorkItemFlowProcessInstanceVO::getCategory() const
{
    return category_;
}

void WorkItemFlowProcessInstanceVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WorkItemFlowProcessInstanceVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void WorkItemFlowProcessInstanceVO::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}



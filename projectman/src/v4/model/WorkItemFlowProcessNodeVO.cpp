

#include "huaweicloud/projectman/v4/model/WorkItemFlowProcessNodeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowProcessNodeVO::WorkItemFlowProcessNodeVO()
{
    id_ = "";
    idIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    processInstanceId_ = "";
    processInstanceIdIsSet_ = false;
    workflowActivityId_ = "";
    workflowActivityIdIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    configIsSet_ = false;
    enableSuspend_ = false;
    enableSuspendIsSet_ = false;
}

WorkItemFlowProcessNodeVO::~WorkItemFlowProcessNodeVO() = default;

void WorkItemFlowProcessNodeVO::validate()
{
}

web::json::value WorkItemFlowProcessNodeVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(processInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("process_instance_id")] = ModelBase::toJson(processInstanceId_);
    }
    if(workflowActivityIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_activity_id")] = ModelBase::toJson(workflowActivityId_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(enableSuspendIsSet_) {
        val[utility::conversions::to_string_t("enable_suspend")] = ModelBase::toJson(enableSuspend_);
    }

    return val;
}
bool WorkItemFlowProcessNodeVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_activity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_activity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowActivityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowNodeConfigVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_suspend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_suspend"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSuspend(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowProcessNodeVO::getId() const
{
    return id_;
}

void WorkItemFlowProcessNodeVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::idIsSet() const
{
    return idIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetid()
{
    idIsSet_ = false;
}

std::string WorkItemFlowProcessNodeVO::getCategory() const
{
    return category_;
}

void WorkItemFlowProcessNodeVO::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::categoryIsSet() const
{
    return categoryIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string WorkItemFlowProcessNodeVO::getProcessInstanceId() const
{
    return processInstanceId_;
}

void WorkItemFlowProcessNodeVO::setProcessInstanceId(const std::string& value)
{
    processInstanceId_ = value;
    processInstanceIdIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::processInstanceIdIsSet() const
{
    return processInstanceIdIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetprocessInstanceId()
{
    processInstanceIdIsSet_ = false;
}

std::string WorkItemFlowProcessNodeVO::getWorkflowActivityId() const
{
    return workflowActivityId_;
}

void WorkItemFlowProcessNodeVO::setWorkflowActivityId(const std::string& value)
{
    workflowActivityId_ = value;
    workflowActivityIdIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::workflowActivityIdIsSet() const
{
    return workflowActivityIdIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetworkflowActivityId()
{
    workflowActivityIdIsSet_ = false;
}

std::string WorkItemFlowProcessNodeVO::getCode() const
{
    return code_;
}

void WorkItemFlowProcessNodeVO::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::codeIsSet() const
{
    return codeIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetcode()
{
    codeIsSet_ = false;
}

WorkItemFlowNodeConfigVO WorkItemFlowProcessNodeVO::getConfig() const
{
    return config_;
}

void WorkItemFlowProcessNodeVO::setConfig(const WorkItemFlowNodeConfigVO& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::configIsSet() const
{
    return configIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetconfig()
{
    configIsSet_ = false;
}

bool WorkItemFlowProcessNodeVO::isEnableSuspend() const
{
    return enableSuspend_;
}

void WorkItemFlowProcessNodeVO::setEnableSuspend(bool value)
{
    enableSuspend_ = value;
    enableSuspendIsSet_ = true;
}

bool WorkItemFlowProcessNodeVO::enableSuspendIsSet() const
{
    return enableSuspendIsSet_;
}

void WorkItemFlowProcessNodeVO::unsetenableSuspend()
{
    enableSuspendIsSet_ = false;
}

}
}
}
}
}



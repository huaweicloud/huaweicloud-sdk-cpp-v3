

#include "huaweicloud/projectman/v4/model/WorkItemFlowInfoVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowInfoVO::WorkItemFlowInfoVO()
{
    processInstanceIsSet_ = false;
    processNodesIsSet_ = false;
    currentProcessNodeIsSet_ = false;
    nextFlowIsSet_ = false;
    failResult_ = "";
    failResultIsSet_ = false;
}

WorkItemFlowInfoVO::~WorkItemFlowInfoVO() = default;

void WorkItemFlowInfoVO::validate()
{
}

web::json::value WorkItemFlowInfoVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(processInstanceIsSet_) {
        val[utility::conversions::to_string_t("process_instance")] = ModelBase::toJson(processInstance_);
    }
    if(processNodesIsSet_) {
        val[utility::conversions::to_string_t("process_nodes")] = ModelBase::toJson(processNodes_);
    }
    if(currentProcessNodeIsSet_) {
        val[utility::conversions::to_string_t("current_process_node")] = ModelBase::toJson(currentProcessNode_);
    }
    if(nextFlowIsSet_) {
        val[utility::conversions::to_string_t("next_flow")] = ModelBase::toJson(nextFlow_);
    }
    if(failResultIsSet_) {
        val[utility::conversions::to_string_t("fail_result")] = ModelBase::toJson(failResult_);
    }

    return val;
}
bool WorkItemFlowInfoVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("process_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_instance"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowProcessInstanceVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemFlowProcessNodeVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_process_node"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_process_node"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowProcessNodeVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentProcessNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_flow"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowsInfoVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailResult(refVal);
        }
    }
    return ok;
}


WorkItemFlowProcessInstanceVO WorkItemFlowInfoVO::getProcessInstance() const
{
    return processInstance_;
}

void WorkItemFlowInfoVO::setProcessInstance(const WorkItemFlowProcessInstanceVO& value)
{
    processInstance_ = value;
    processInstanceIsSet_ = true;
}

bool WorkItemFlowInfoVO::processInstanceIsSet() const
{
    return processInstanceIsSet_;
}

void WorkItemFlowInfoVO::unsetprocessInstance()
{
    processInstanceIsSet_ = false;
}

std::vector<WorkItemFlowProcessNodeVO>& WorkItemFlowInfoVO::getProcessNodes()
{
    return processNodes_;
}

void WorkItemFlowInfoVO::setProcessNodes(const std::vector<WorkItemFlowProcessNodeVO>& value)
{
    processNodes_ = value;
    processNodesIsSet_ = true;
}

bool WorkItemFlowInfoVO::processNodesIsSet() const
{
    return processNodesIsSet_;
}

void WorkItemFlowInfoVO::unsetprocessNodes()
{
    processNodesIsSet_ = false;
}

WorkItemFlowProcessNodeVO WorkItemFlowInfoVO::getCurrentProcessNode() const
{
    return currentProcessNode_;
}

void WorkItemFlowInfoVO::setCurrentProcessNode(const WorkItemFlowProcessNodeVO& value)
{
    currentProcessNode_ = value;
    currentProcessNodeIsSet_ = true;
}

bool WorkItemFlowInfoVO::currentProcessNodeIsSet() const
{
    return currentProcessNodeIsSet_;
}

void WorkItemFlowInfoVO::unsetcurrentProcessNode()
{
    currentProcessNodeIsSet_ = false;
}

std::vector<FlowsInfoVO>& WorkItemFlowInfoVO::getNextFlow()
{
    return nextFlow_;
}

void WorkItemFlowInfoVO::setNextFlow(const std::vector<FlowsInfoVO>& value)
{
    nextFlow_ = value;
    nextFlowIsSet_ = true;
}

bool WorkItemFlowInfoVO::nextFlowIsSet() const
{
    return nextFlowIsSet_;
}

void WorkItemFlowInfoVO::unsetnextFlow()
{
    nextFlowIsSet_ = false;
}

std::string WorkItemFlowInfoVO::getFailResult() const
{
    return failResult_;
}

void WorkItemFlowInfoVO::setFailResult(const std::string& value)
{
    failResult_ = value;
    failResultIsSet_ = true;
}

bool WorkItemFlowInfoVO::failResultIsSet() const
{
    return failResultIsSet_;
}

void WorkItemFlowInfoVO::unsetfailResult()
{
    failResultIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/functiongraph/v2/model/NodeExecutionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




NodeExecutionDetail::NodeExecutionDetail()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    executionsIsSet_ = false;
}

NodeExecutionDetail::~NodeExecutionDetail() = default;

void NodeExecutionDetail::validate()
{
}

web::json::value NodeExecutionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(executionsIsSet_) {
        val[utility::conversions::to_string_t("executions")] = ModelBase::toJson(executions_);
    }

    return val;
}
bool NodeExecutionDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executions"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeExecution> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutions(refVal);
        }
    }
    return ok;
}


std::string NodeExecutionDetail::getNodeId() const
{
    return nodeId_;
}

void NodeExecutionDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool NodeExecutionDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void NodeExecutionDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string NodeExecutionDetail::getNodeName() const
{
    return nodeName_;
}

void NodeExecutionDetail::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool NodeExecutionDetail::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void NodeExecutionDetail::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string NodeExecutionDetail::getExecutionId() const
{
    return executionId_;
}

void NodeExecutionDetail::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool NodeExecutionDetail::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void NodeExecutionDetail::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::vector<NodeExecution>& NodeExecutionDetail::getExecutions()
{
    return executions_;
}

void NodeExecutionDetail::setExecutions(const std::vector<NodeExecution>& value)
{
    executions_ = value;
    executionsIsSet_ = true;
}

bool NodeExecutionDetail::executionsIsSet() const
{
    return executionsIsSet_;
}

void NodeExecutionDetail::unsetexecutions()
{
    executionsIsSet_ = false;
}

}
}
}
}
}



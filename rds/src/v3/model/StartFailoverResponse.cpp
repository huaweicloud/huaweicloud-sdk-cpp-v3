

#include "huaweicloud/rds/v3/model/StartFailoverResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartFailoverResponse::StartFailoverResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

StartFailoverResponse::~StartFailoverResponse() = default;

void StartFailoverResponse::validate()
{
}

web::json::value StartFailoverResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instanceId")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("nodeId")] = ModelBase::toJson(nodeId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}

bool StartFailoverResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instanceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflowId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflowId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}

std::string StartFailoverResponse::getInstanceId() const
{
    return instanceId_;
}

void StartFailoverResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartFailoverResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartFailoverResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StartFailoverResponse::getNodeId() const
{
    return nodeId_;
}

void StartFailoverResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool StartFailoverResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void StartFailoverResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string StartFailoverResponse::getWorkflowId() const
{
    return workflowId_;
}

void StartFailoverResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StartFailoverResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StartFailoverResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}



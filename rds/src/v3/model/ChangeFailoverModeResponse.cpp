

#include "huaweicloud/rds/v3/model/ChangeFailoverModeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeFailoverModeResponse::ChangeFailoverModeResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    replicationMode_ = "";
    replicationModeIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

ChangeFailoverModeResponse::~ChangeFailoverModeResponse() = default;

void ChangeFailoverModeResponse::validate()
{
}

web::json::value ChangeFailoverModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instanceId")] = ModelBase::toJson(instanceId_);
    }
    if(replicationModeIsSet_) {
        val[utility::conversions::to_string_t("replicationMode")] = ModelBase::toJson(replicationMode_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}

bool ChangeFailoverModeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("replicationMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicationMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationMode(refVal);
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

std::string ChangeFailoverModeResponse::getInstanceId() const
{
    return instanceId_;
}

void ChangeFailoverModeResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeFailoverModeResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeFailoverModeResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ChangeFailoverModeResponse::getReplicationMode() const
{
    return replicationMode_;
}

void ChangeFailoverModeResponse::setReplicationMode(const std::string& value)
{
    replicationMode_ = value;
    replicationModeIsSet_ = true;
}

bool ChangeFailoverModeResponse::replicationModeIsSet() const
{
    return replicationModeIsSet_;
}

void ChangeFailoverModeResponse::unsetreplicationMode()
{
    replicationModeIsSet_ = false;
}

std::string ChangeFailoverModeResponse::getWorkflowId() const
{
    return workflowId_;
}

void ChangeFailoverModeResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ChangeFailoverModeResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ChangeFailoverModeResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}



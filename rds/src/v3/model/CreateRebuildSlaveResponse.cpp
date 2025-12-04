

#include "huaweicloud/rds/v3/model/CreateRebuildSlaveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRebuildSlaveResponse::CreateRebuildSlaveResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

CreateRebuildSlaveResponse::~CreateRebuildSlaveResponse() = default;

void CreateRebuildSlaveResponse::validate()
{
}

web::json::value CreateRebuildSlaveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool CreateRebuildSlaveResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}


std::string CreateRebuildSlaveResponse::getInstanceId() const
{
    return instanceId_;
}

void CreateRebuildSlaveResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRebuildSlaveResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRebuildSlaveResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateRebuildSlaveResponse::getWorkflowId() const
{
    return workflowId_;
}

void CreateRebuildSlaveResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateRebuildSlaveResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateRebuildSlaveResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}



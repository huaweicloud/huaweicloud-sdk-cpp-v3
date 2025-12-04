

#include "huaweicloud/rds/v3/model/ShowRebuildSlaveStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRebuildSlaveStatusResponse::ShowRebuildSlaveStatusResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    lastRebuildTime_ = "";
    lastRebuildTimeIsSet_ = false;
    nextRebuildTime_ = "";
    nextRebuildTimeIsSet_ = false;
}

ShowRebuildSlaveStatusResponse::~ShowRebuildSlaveStatusResponse() = default;

void ShowRebuildSlaveStatusResponse::validate()
{
}

web::json::value ShowRebuildSlaveStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(lastRebuildTimeIsSet_) {
        val[utility::conversions::to_string_t("last_rebuild_time")] = ModelBase::toJson(lastRebuildTime_);
    }
    if(nextRebuildTimeIsSet_) {
        val[utility::conversions::to_string_t("next_rebuild_time")] = ModelBase::toJson(nextRebuildTime_);
    }

    return val;
}
bool ShowRebuildSlaveStatusResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("last_rebuild_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_rebuild_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastRebuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_rebuild_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_rebuild_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextRebuildTime(refVal);
        }
    }
    return ok;
}


std::string ShowRebuildSlaveStatusResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowRebuildSlaveStatusResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRebuildSlaveStatusResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRebuildSlaveStatusResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRebuildSlaveStatusResponse::getWorkflowId() const
{
    return workflowId_;
}

void ShowRebuildSlaveStatusResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowRebuildSlaveStatusResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowRebuildSlaveStatusResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowRebuildSlaveStatusResponse::getLastRebuildTime() const
{
    return lastRebuildTime_;
}

void ShowRebuildSlaveStatusResponse::setLastRebuildTime(const std::string& value)
{
    lastRebuildTime_ = value;
    lastRebuildTimeIsSet_ = true;
}

bool ShowRebuildSlaveStatusResponse::lastRebuildTimeIsSet() const
{
    return lastRebuildTimeIsSet_;
}

void ShowRebuildSlaveStatusResponse::unsetlastRebuildTime()
{
    lastRebuildTimeIsSet_ = false;
}

std::string ShowRebuildSlaveStatusResponse::getNextRebuildTime() const
{
    return nextRebuildTime_;
}

void ShowRebuildSlaveStatusResponse::setNextRebuildTime(const std::string& value)
{
    nextRebuildTime_ = value;
    nextRebuildTimeIsSet_ = true;
}

bool ShowRebuildSlaveStatusResponse::nextRebuildTimeIsSet() const
{
    return nextRebuildTimeIsSet_;
}

void ShowRebuildSlaveStatusResponse::unsetnextRebuildTime()
{
    nextRebuildTimeIsSet_ = false;
}

}
}
}
}
}



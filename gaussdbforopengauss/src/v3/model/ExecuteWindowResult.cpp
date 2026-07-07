

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteWindowResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteWindowResult::ExecuteWindowResult()
{
    plannedExecutionTime_ = "";
    plannedExecutionTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ExecuteWindowResult::~ExecuteWindowResult() = default;

void ExecuteWindowResult::validate()
{
}

web::json::value ExecuteWindowResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plannedExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("planned_execution_time")] = ModelBase::toJson(plannedExecutionTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ExecuteWindowResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("planned_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planned_execution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlannedExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ExecuteWindowResult::getPlannedExecutionTime() const
{
    return plannedExecutionTime_;
}

void ExecuteWindowResult::setPlannedExecutionTime(const std::string& value)
{
    plannedExecutionTime_ = value;
    plannedExecutionTimeIsSet_ = true;
}

bool ExecuteWindowResult::plannedExecutionTimeIsSet() const
{
    return plannedExecutionTimeIsSet_;
}

void ExecuteWindowResult::unsetplannedExecutionTime()
{
    plannedExecutionTimeIsSet_ = false;
}

std::string ExecuteWindowResult::getStartTime() const
{
    return startTime_;
}

void ExecuteWindowResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExecuteWindowResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExecuteWindowResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ExecuteWindowResult::getEndTime() const
{
    return endTime_;
}

void ExecuteWindowResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExecuteWindowResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExecuteWindowResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}



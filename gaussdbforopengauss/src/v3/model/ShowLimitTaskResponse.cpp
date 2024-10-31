

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowLimitTaskResponse::ShowLimitTaskResponse()
{
    taskName_ = "";
    taskNameIsSet_ = false;
    limitType_ = "";
    limitTypeIsSet_ = false;
    parallelSize_ = 0;
    parallelSizeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    taskRunningTime_ = 0;
    taskRunningTimeIsSet_ = false;
    limitCount_ = 0;
    limitCountIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    memoryUtilization_ = 0;
    memoryUtilizationIsSet_ = false;
    cpuUtilization_ = 0;
    cpuUtilizationIsSet_ = false;
    limitTaskRuleInfoListIsSet_ = false;
}

ShowLimitTaskResponse::~ShowLimitTaskResponse() = default;

void ShowLimitTaskResponse::validate()
{
}

web::json::value ShowLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(limitTypeIsSet_) {
        val[utility::conversions::to_string_t("limit_type")] = ModelBase::toJson(limitType_);
    }
    if(parallelSizeIsSet_) {
        val[utility::conversions::to_string_t("parallel_size")] = ModelBase::toJson(parallelSize_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(taskRunningTimeIsSet_) {
        val[utility::conversions::to_string_t("task_running_time")] = ModelBase::toJson(taskRunningTime_);
    }
    if(limitCountIsSet_) {
        val[utility::conversions::to_string_t("limit_count")] = ModelBase::toJson(limitCount_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(memoryUtilizationIsSet_) {
        val[utility::conversions::to_string_t("memory_utilization")] = ModelBase::toJson(memoryUtilization_);
    }
    if(cpuUtilizationIsSet_) {
        val[utility::conversions::to_string_t("cpu_utilization")] = ModelBase::toJson(cpuUtilization_);
    }
    if(limitTaskRuleInfoListIsSet_) {
        val[utility::conversions::to_string_t("limit_task_rule_info_list")] = ModelBase::toJson(limitTaskRuleInfoList_);
    }

    return val;
}
bool ShowLimitTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parallel_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallel_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallelSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_running_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_running_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskRunningTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_utilization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_utilization"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryUtilization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_utilization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_utilization"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtilization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_task_rule_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_task_rule_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<LimitTaskRuleInfoOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitTaskRuleInfoList(refVal);
        }
    }
    return ok;
}


std::string ShowLimitTaskResponse::getTaskName() const
{
    return taskName_;
}

void ShowLimitTaskResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ShowLimitTaskResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ShowLimitTaskResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ShowLimitTaskResponse::getLimitType() const
{
    return limitType_;
}

void ShowLimitTaskResponse::setLimitType(const std::string& value)
{
    limitType_ = value;
    limitTypeIsSet_ = true;
}

bool ShowLimitTaskResponse::limitTypeIsSet() const
{
    return limitTypeIsSet_;
}

void ShowLimitTaskResponse::unsetlimitType()
{
    limitTypeIsSet_ = false;
}

int32_t ShowLimitTaskResponse::getParallelSize() const
{
    return parallelSize_;
}

void ShowLimitTaskResponse::setParallelSize(int32_t value)
{
    parallelSize_ = value;
    parallelSizeIsSet_ = true;
}

bool ShowLimitTaskResponse::parallelSizeIsSet() const
{
    return parallelSizeIsSet_;
}

void ShowLimitTaskResponse::unsetparallelSize()
{
    parallelSizeIsSet_ = false;
}

std::string ShowLimitTaskResponse::getStartTime() const
{
    return startTime_;
}

void ShowLimitTaskResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowLimitTaskResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowLimitTaskResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowLimitTaskResponse::getEndTime() const
{
    return endTime_;
}

void ShowLimitTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowLimitTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowLimitTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowLimitTaskResponse::getTaskRunningTime() const
{
    return taskRunningTime_;
}

void ShowLimitTaskResponse::setTaskRunningTime(int32_t value)
{
    taskRunningTime_ = value;
    taskRunningTimeIsSet_ = true;
}

bool ShowLimitTaskResponse::taskRunningTimeIsSet() const
{
    return taskRunningTimeIsSet_;
}

void ShowLimitTaskResponse::unsettaskRunningTime()
{
    taskRunningTimeIsSet_ = false;
}

int32_t ShowLimitTaskResponse::getLimitCount() const
{
    return limitCount_;
}

void ShowLimitTaskResponse::setLimitCount(int32_t value)
{
    limitCount_ = value;
    limitCountIsSet_ = true;
}

bool ShowLimitTaskResponse::limitCountIsSet() const
{
    return limitCountIsSet_;
}

void ShowLimitTaskResponse::unsetlimitCount()
{
    limitCountIsSet_ = false;
}

std::string ShowLimitTaskResponse::getRuleName() const
{
    return ruleName_;
}

void ShowLimitTaskResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ShowLimitTaskResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ShowLimitTaskResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t ShowLimitTaskResponse::getMemoryUtilization() const
{
    return memoryUtilization_;
}

void ShowLimitTaskResponse::setMemoryUtilization(int32_t value)
{
    memoryUtilization_ = value;
    memoryUtilizationIsSet_ = true;
}

bool ShowLimitTaskResponse::memoryUtilizationIsSet() const
{
    return memoryUtilizationIsSet_;
}

void ShowLimitTaskResponse::unsetmemoryUtilization()
{
    memoryUtilizationIsSet_ = false;
}

int32_t ShowLimitTaskResponse::getCpuUtilization() const
{
    return cpuUtilization_;
}

void ShowLimitTaskResponse::setCpuUtilization(int32_t value)
{
    cpuUtilization_ = value;
    cpuUtilizationIsSet_ = true;
}

bool ShowLimitTaskResponse::cpuUtilizationIsSet() const
{
    return cpuUtilizationIsSet_;
}

void ShowLimitTaskResponse::unsetcpuUtilization()
{
    cpuUtilizationIsSet_ = false;
}

std::vector<LimitTaskRuleInfoOption>& ShowLimitTaskResponse::getLimitTaskRuleInfoList()
{
    return limitTaskRuleInfoList_;
}

void ShowLimitTaskResponse::setLimitTaskRuleInfoList(const std::vector<LimitTaskRuleInfoOption>& value)
{
    limitTaskRuleInfoList_ = value;
    limitTaskRuleInfoListIsSet_ = true;
}

bool ShowLimitTaskResponse::limitTaskRuleInfoListIsSet() const
{
    return limitTaskRuleInfoListIsSet_;
}

void ShowLimitTaskResponse::unsetlimitTaskRuleInfoList()
{
    limitTaskRuleInfoListIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ListDbAgentJobHistoryStepsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistoryStepsResult::ListDbAgentJobHistoryStepsResult()
{
    stepId_ = "";
    stepIdIsSet_ = false;
    stepName_ = "";
    stepNameIsSet_ = false;
    runStatus_ = "";
    runStatusIsSet_ = false;
    runTime_ = "";
    runTimeIsSet_ = false;
    runDuration_ = "";
    runDurationIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ListDbAgentJobHistoryStepsResult::~ListDbAgentJobHistoryStepsResult() = default;

void ListDbAgentJobHistoryStepsResult::validate()
{
}

web::json::value ListDbAgentJobHistoryStepsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepIdIsSet_) {
        val[utility::conversions::to_string_t("step_id")] = ModelBase::toJson(stepId_);
    }
    if(stepNameIsSet_) {
        val[utility::conversions::to_string_t("step_name")] = ModelBase::toJson(stepName_);
    }
    if(runStatusIsSet_) {
        val[utility::conversions::to_string_t("run_status")] = ModelBase::toJson(runStatus_);
    }
    if(runTimeIsSet_) {
        val[utility::conversions::to_string_t("run_time")] = ModelBase::toJson(runTime_);
    }
    if(runDurationIsSet_) {
        val[utility::conversions::to_string_t("run_duration")] = ModelBase::toJson(runDuration_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ListDbAgentJobHistoryStepsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ListDbAgentJobHistoryStepsResult::getStepId() const
{
    return stepId_;
}

void ListDbAgentJobHistoryStepsResult::setStepId(const std::string& value)
{
    stepId_ = value;
    stepIdIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::stepIdIsSet() const
{
    return stepIdIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetstepId()
{
    stepIdIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsResult::getStepName() const
{
    return stepName_;
}

void ListDbAgentJobHistoryStepsResult::setStepName(const std::string& value)
{
    stepName_ = value;
    stepNameIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::stepNameIsSet() const
{
    return stepNameIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetstepName()
{
    stepNameIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsResult::getRunStatus() const
{
    return runStatus_;
}

void ListDbAgentJobHistoryStepsResult::setRunStatus(const std::string& value)
{
    runStatus_ = value;
    runStatusIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::runStatusIsSet() const
{
    return runStatusIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetrunStatus()
{
    runStatusIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsResult::getRunTime() const
{
    return runTime_;
}

void ListDbAgentJobHistoryStepsResult::setRunTime(const std::string& value)
{
    runTime_ = value;
    runTimeIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::runTimeIsSet() const
{
    return runTimeIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetrunTime()
{
    runTimeIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsResult::getRunDuration() const
{
    return runDuration_;
}

void ListDbAgentJobHistoryStepsResult::setRunDuration(const std::string& value)
{
    runDuration_ = value;
    runDurationIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::runDurationIsSet() const
{
    return runDurationIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetrunDuration()
{
    runDurationIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsResult::getMessage() const
{
    return message_;
}

void ListDbAgentJobHistoryStepsResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsResult::messageIsSet() const
{
    return messageIsSet_;
}

void ListDbAgentJobHistoryStepsResult::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}



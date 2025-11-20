

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistorysResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistorysResult::ListDbAgentJobHistorysResult()
{
    historyId_ = "";
    historyIdIsSet_ = false;
    runStatus_ = "";
    runStatusIsSet_ = false;
    runTime_ = "";
    runTimeIsSet_ = false;
    runDuration_ = "";
    runDurationIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ListDbAgentJobHistorysResult::~ListDbAgentJobHistorysResult() = default;

void ListDbAgentJobHistorysResult::validate()
{
}

web::json::value ListDbAgentJobHistorysResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historyIdIsSet_) {
        val[utility::conversions::to_string_t("history_id")] = ModelBase::toJson(historyId_);
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
bool ListDbAgentJobHistorysResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("history_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryId(refVal);
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


std::string ListDbAgentJobHistorysResult::getHistoryId() const
{
    return historyId_;
}

void ListDbAgentJobHistorysResult::setHistoryId(const std::string& value)
{
    historyId_ = value;
    historyIdIsSet_ = true;
}

bool ListDbAgentJobHistorysResult::historyIdIsSet() const
{
    return historyIdIsSet_;
}

void ListDbAgentJobHistorysResult::unsethistoryId()
{
    historyIdIsSet_ = false;
}

std::string ListDbAgentJobHistorysResult::getRunStatus() const
{
    return runStatus_;
}

void ListDbAgentJobHistorysResult::setRunStatus(const std::string& value)
{
    runStatus_ = value;
    runStatusIsSet_ = true;
}

bool ListDbAgentJobHistorysResult::runStatusIsSet() const
{
    return runStatusIsSet_;
}

void ListDbAgentJobHistorysResult::unsetrunStatus()
{
    runStatusIsSet_ = false;
}

std::string ListDbAgentJobHistorysResult::getRunTime() const
{
    return runTime_;
}

void ListDbAgentJobHistorysResult::setRunTime(const std::string& value)
{
    runTime_ = value;
    runTimeIsSet_ = true;
}

bool ListDbAgentJobHistorysResult::runTimeIsSet() const
{
    return runTimeIsSet_;
}

void ListDbAgentJobHistorysResult::unsetrunTime()
{
    runTimeIsSet_ = false;
}

std::string ListDbAgentJobHistorysResult::getRunDuration() const
{
    return runDuration_;
}

void ListDbAgentJobHistorysResult::setRunDuration(const std::string& value)
{
    runDuration_ = value;
    runDurationIsSet_ = true;
}

bool ListDbAgentJobHistorysResult::runDurationIsSet() const
{
    return runDurationIsSet_;
}

void ListDbAgentJobHistorysResult::unsetrunDuration()
{
    runDurationIsSet_ = false;
}

std::string ListDbAgentJobHistorysResult::getMessage() const
{
    return message_;
}

void ListDbAgentJobHistorysResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListDbAgentJobHistorysResult::messageIsSet() const
{
    return messageIsSet_;
}

void ListDbAgentJobHistorysResult::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}



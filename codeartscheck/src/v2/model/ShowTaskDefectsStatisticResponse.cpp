

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDefectsStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDefectsStatisticResponse::ShowTaskDefectsStatisticResponse()
{
    severityIsSet_ = false;
    statusIsSet_ = false;
    lastCheckTime_ = "";
    lastCheckTimeIsSet_ = false;
    lastCheckFinishTime_ = "";
    lastCheckFinishTimeIsSet_ = false;
}

ShowTaskDefectsStatisticResponse::~ShowTaskDefectsStatisticResponse() = default;

void ShowTaskDefectsStatisticResponse::validate()
{
}

web::json::value ShowTaskDefectsStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastCheckTimeIsSet_) {
        val[utility::conversions::to_string_t("last_check_time")] = ModelBase::toJson(lastCheckTime_);
    }
    if(lastCheckFinishTimeIsSet_) {
        val[utility::conversions::to_string_t("last_check_finish_time")] = ModelBase::toJson(lastCheckFinishTime_);
    }

    return val;
}
bool ShowTaskDefectsStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            StatisticSeverityV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            StatisticStatusV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_check_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_check_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCheckTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_check_finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_check_finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastCheckFinishTime(refVal);
        }
    }
    return ok;
}


StatisticSeverityV2 ShowTaskDefectsStatisticResponse::getSeverity() const
{
    return severity_;
}

void ShowTaskDefectsStatisticResponse::setSeverity(const StatisticSeverityV2& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::severityIsSet() const
{
    return severityIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetseverity()
{
    severityIsSet_ = false;
}

StatisticStatusV2 ShowTaskDefectsStatisticResponse::getStatus() const
{
    return status_;
}

void ShowTaskDefectsStatisticResponse::setStatus(const StatisticStatusV2& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowTaskDefectsStatisticResponse::getLastCheckTime() const
{
    return lastCheckTime_;
}

void ShowTaskDefectsStatisticResponse::setLastCheckTime(const std::string& value)
{
    lastCheckTime_ = value;
    lastCheckTimeIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::lastCheckTimeIsSet() const
{
    return lastCheckTimeIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetlastCheckTime()
{
    lastCheckTimeIsSet_ = false;
}

std::string ShowTaskDefectsStatisticResponse::getLastCheckFinishTime() const
{
    return lastCheckFinishTime_;
}

void ShowTaskDefectsStatisticResponse::setLastCheckFinishTime(const std::string& value)
{
    lastCheckFinishTime_ = value;
    lastCheckFinishTimeIsSet_ = true;
}

bool ShowTaskDefectsStatisticResponse::lastCheckFinishTimeIsSet() const
{
    return lastCheckFinishTimeIsSet_;
}

void ShowTaskDefectsStatisticResponse::unsetlastCheckFinishTime()
{
    lastCheckFinishTimeIsSet_ = false;
}

}
}
}
}
}



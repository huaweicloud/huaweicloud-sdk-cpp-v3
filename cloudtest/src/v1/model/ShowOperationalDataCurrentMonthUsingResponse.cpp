

#include "huaweicloud/cloudtest/v1/model/ShowOperationalDataCurrentMonthUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowOperationalDataCurrentMonthUsingResponse::ShowOperationalDataCurrentMonthUsingResponse()
{
    alertSuccessRate_ = 0;
    alertSuccessRateIsSet_ = false;
    runningTasks_ = 0;
    runningTasksIsSet_ = false;
    totalAlerts_ = 0;
    totalAlertsIsSet_ = false;
    totalDays_ = 0;
    totalDaysIsSet_ = false;
    totalRuns_ = 0L;
    totalRunsIsSet_ = false;
    totalTasks_ = 0;
    totalTasksIsSet_ = false;
    workItemCount_ = 0;
    workItemCountIsSet_ = false;
}

ShowOperationalDataCurrentMonthUsingResponse::~ShowOperationalDataCurrentMonthUsingResponse() = default;

void ShowOperationalDataCurrentMonthUsingResponse::validate()
{
}

web::json::value ShowOperationalDataCurrentMonthUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertSuccessRateIsSet_) {
        val[utility::conversions::to_string_t("alert_success_rate")] = ModelBase::toJson(alertSuccessRate_);
    }
    if(runningTasksIsSet_) {
        val[utility::conversions::to_string_t("running_tasks")] = ModelBase::toJson(runningTasks_);
    }
    if(totalAlertsIsSet_) {
        val[utility::conversions::to_string_t("total_alerts")] = ModelBase::toJson(totalAlerts_);
    }
    if(totalDaysIsSet_) {
        val[utility::conversions::to_string_t("total_days")] = ModelBase::toJson(totalDays_);
    }
    if(totalRunsIsSet_) {
        val[utility::conversions::to_string_t("total_runs")] = ModelBase::toJson(totalRuns_);
    }
    if(totalTasksIsSet_) {
        val[utility::conversions::to_string_t("total_tasks")] = ModelBase::toJson(totalTasks_);
    }
    if(workItemCountIsSet_) {
        val[utility::conversions::to_string_t("work_item_count")] = ModelBase::toJson(workItemCount_);
    }

    return val;
}
bool ShowOperationalDataCurrentMonthUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_success_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_tasks"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_alerts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_alerts"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAlerts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_runs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_runs"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRuns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_tasks"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_item_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemCount(refVal);
        }
    }
    return ok;
}


int32_t ShowOperationalDataCurrentMonthUsingResponse::getAlertSuccessRate() const
{
    return alertSuccessRate_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setAlertSuccessRate(int32_t value)
{
    alertSuccessRate_ = value;
    alertSuccessRateIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::alertSuccessRateIsSet() const
{
    return alertSuccessRateIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsetalertSuccessRate()
{
    alertSuccessRateIsSet_ = false;
}

int32_t ShowOperationalDataCurrentMonthUsingResponse::getRunningTasks() const
{
    return runningTasks_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setRunningTasks(int32_t value)
{
    runningTasks_ = value;
    runningTasksIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::runningTasksIsSet() const
{
    return runningTasksIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsetrunningTasks()
{
    runningTasksIsSet_ = false;
}

int32_t ShowOperationalDataCurrentMonthUsingResponse::getTotalAlerts() const
{
    return totalAlerts_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setTotalAlerts(int32_t value)
{
    totalAlerts_ = value;
    totalAlertsIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::totalAlertsIsSet() const
{
    return totalAlertsIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsettotalAlerts()
{
    totalAlertsIsSet_ = false;
}

int32_t ShowOperationalDataCurrentMonthUsingResponse::getTotalDays() const
{
    return totalDays_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setTotalDays(int32_t value)
{
    totalDays_ = value;
    totalDaysIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::totalDaysIsSet() const
{
    return totalDaysIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsettotalDays()
{
    totalDaysIsSet_ = false;
}

int64_t ShowOperationalDataCurrentMonthUsingResponse::getTotalRuns() const
{
    return totalRuns_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setTotalRuns(int64_t value)
{
    totalRuns_ = value;
    totalRunsIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::totalRunsIsSet() const
{
    return totalRunsIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsettotalRuns()
{
    totalRunsIsSet_ = false;
}

int32_t ShowOperationalDataCurrentMonthUsingResponse::getTotalTasks() const
{
    return totalTasks_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setTotalTasks(int32_t value)
{
    totalTasks_ = value;
    totalTasksIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::totalTasksIsSet() const
{
    return totalTasksIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsettotalTasks()
{
    totalTasksIsSet_ = false;
}

int32_t ShowOperationalDataCurrentMonthUsingResponse::getWorkItemCount() const
{
    return workItemCount_;
}

void ShowOperationalDataCurrentMonthUsingResponse::setWorkItemCount(int32_t value)
{
    workItemCount_ = value;
    workItemCountIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingResponse::workItemCountIsSet() const
{
    return workItemCountIsSet_;
}

void ShowOperationalDataCurrentMonthUsingResponse::unsetworkItemCount()
{
    workItemCountIsSet_ = false;
}

}
}
}
}
}



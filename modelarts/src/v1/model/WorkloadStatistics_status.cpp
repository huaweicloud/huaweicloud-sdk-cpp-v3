

#include "huaweicloud/modelarts/v1/model/WorkloadStatistics_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadStatistics_status::WorkloadStatistics_status()
{
    queue_ = 0;
    queueIsSet_ = false;
    pending_ = 0;
    pendingIsSet_ = false;
    abnormal_ = 0;
    abnormalIsSet_ = false;
    terminating_ = 0;
    terminatingIsSet_ = false;
    creating_ = 0;
    creatingIsSet_ = false;
    running_ = 0;
    runningIsSet_ = false;
    completed_ = 0;
    completedIsSet_ = false;
    terminated_ = 0;
    terminatedIsSet_ = false;
    failed_ = 0;
    failedIsSet_ = false;
}

WorkloadStatistics_status::~WorkloadStatistics_status() = default;

void WorkloadStatistics_status::validate()
{
}

web::json::value WorkloadStatistics_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queueIsSet_) {
        val[utility::conversions::to_string_t("Queue")] = ModelBase::toJson(queue_);
    }
    if(pendingIsSet_) {
        val[utility::conversions::to_string_t("Pending")] = ModelBase::toJson(pending_);
    }
    if(abnormalIsSet_) {
        val[utility::conversions::to_string_t("Abnormal")] = ModelBase::toJson(abnormal_);
    }
    if(terminatingIsSet_) {
        val[utility::conversions::to_string_t("Terminating")] = ModelBase::toJson(terminating_);
    }
    if(creatingIsSet_) {
        val[utility::conversions::to_string_t("Creating")] = ModelBase::toJson(creating_);
    }
    if(runningIsSet_) {
        val[utility::conversions::to_string_t("Running")] = ModelBase::toJson(running_);
    }
    if(completedIsSet_) {
        val[utility::conversions::to_string_t("Completed")] = ModelBase::toJson(completed_);
    }
    if(terminatedIsSet_) {
        val[utility::conversions::to_string_t("Terminated")] = ModelBase::toJson(terminated_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("Failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool WorkloadStatistics_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Queue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Queue"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Pending"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Pending"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPending(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Abnormal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Abnormal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Terminating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Terminating"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Creating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Creating"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Running"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Completed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Completed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Terminated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Terminated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Failed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


int32_t WorkloadStatistics_status::getQueue() const
{
    return queue_;
}

void WorkloadStatistics_status::setQueue(int32_t value)
{
    queue_ = value;
    queueIsSet_ = true;
}

bool WorkloadStatistics_status::queueIsSet() const
{
    return queueIsSet_;
}

void WorkloadStatistics_status::unsetqueue()
{
    queueIsSet_ = false;
}

int32_t WorkloadStatistics_status::getPending() const
{
    return pending_;
}

void WorkloadStatistics_status::setPending(int32_t value)
{
    pending_ = value;
    pendingIsSet_ = true;
}

bool WorkloadStatistics_status::pendingIsSet() const
{
    return pendingIsSet_;
}

void WorkloadStatistics_status::unsetpending()
{
    pendingIsSet_ = false;
}

int32_t WorkloadStatistics_status::getAbnormal() const
{
    return abnormal_;
}

void WorkloadStatistics_status::setAbnormal(int32_t value)
{
    abnormal_ = value;
    abnormalIsSet_ = true;
}

bool WorkloadStatistics_status::abnormalIsSet() const
{
    return abnormalIsSet_;
}

void WorkloadStatistics_status::unsetabnormal()
{
    abnormalIsSet_ = false;
}

int32_t WorkloadStatistics_status::getTerminating() const
{
    return terminating_;
}

void WorkloadStatistics_status::setTerminating(int32_t value)
{
    terminating_ = value;
    terminatingIsSet_ = true;
}

bool WorkloadStatistics_status::terminatingIsSet() const
{
    return terminatingIsSet_;
}

void WorkloadStatistics_status::unsetterminating()
{
    terminatingIsSet_ = false;
}

int32_t WorkloadStatistics_status::getCreating() const
{
    return creating_;
}

void WorkloadStatistics_status::setCreating(int32_t value)
{
    creating_ = value;
    creatingIsSet_ = true;
}

bool WorkloadStatistics_status::creatingIsSet() const
{
    return creatingIsSet_;
}

void WorkloadStatistics_status::unsetcreating()
{
    creatingIsSet_ = false;
}

int32_t WorkloadStatistics_status::getRunning() const
{
    return running_;
}

void WorkloadStatistics_status::setRunning(int32_t value)
{
    running_ = value;
    runningIsSet_ = true;
}

bool WorkloadStatistics_status::runningIsSet() const
{
    return runningIsSet_;
}

void WorkloadStatistics_status::unsetrunning()
{
    runningIsSet_ = false;
}

int32_t WorkloadStatistics_status::getCompleted() const
{
    return completed_;
}

void WorkloadStatistics_status::setCompleted(int32_t value)
{
    completed_ = value;
    completedIsSet_ = true;
}

bool WorkloadStatistics_status::completedIsSet() const
{
    return completedIsSet_;
}

void WorkloadStatistics_status::unsetcompleted()
{
    completedIsSet_ = false;
}

int32_t WorkloadStatistics_status::getTerminated() const
{
    return terminated_;
}

void WorkloadStatistics_status::setTerminated(int32_t value)
{
    terminated_ = value;
    terminatedIsSet_ = true;
}

bool WorkloadStatistics_status::terminatedIsSet() const
{
    return terminatedIsSet_;
}

void WorkloadStatistics_status::unsetterminated()
{
    terminatedIsSet_ = false;
}

int32_t WorkloadStatistics_status::getFailed() const
{
    return failed_;
}

void WorkloadStatistics_status::setFailed(int32_t value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool WorkloadStatistics_status::failedIsSet() const
{
    return failedIsSet_;
}

void WorkloadStatistics_status::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}



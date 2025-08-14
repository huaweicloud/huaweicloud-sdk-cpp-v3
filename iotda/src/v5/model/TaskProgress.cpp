

#include "huaweicloud/iotda/v5/model/TaskProgress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TaskProgress::TaskProgress()
{
    total_ = 0;
    totalIsSet_ = false;
    processing_ = 0;
    processingIsSet_ = false;
    success_ = 0;
    successIsSet_ = false;
    fail_ = 0;
    failIsSet_ = false;
    waitting_ = 0;
    waittingIsSet_ = false;
    failWaitRetry_ = 0;
    failWaitRetryIsSet_ = false;
    stopped_ = 0;
    stoppedIsSet_ = false;
    removed_ = 0;
    removedIsSet_ = false;
}

TaskProgress::~TaskProgress() = default;

void TaskProgress::validate()
{
}

web::json::value TaskProgress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(processingIsSet_) {
        val[utility::conversions::to_string_t("processing")] = ModelBase::toJson(processing_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(failIsSet_) {
        val[utility::conversions::to_string_t("fail")] = ModelBase::toJson(fail_);
    }
    if(waittingIsSet_) {
        val[utility::conversions::to_string_t("waitting")] = ModelBase::toJson(waitting_);
    }
    if(failWaitRetryIsSet_) {
        val[utility::conversions::to_string_t("fail_wait_retry")] = ModelBase::toJson(failWaitRetry_);
    }
    if(stoppedIsSet_) {
        val[utility::conversions::to_string_t("stopped")] = ModelBase::toJson(stopped_);
    }
    if(removedIsSet_) {
        val[utility::conversions::to_string_t("removed")] = ModelBase::toJson(removed_);
    }

    return val;
}
bool TaskProgress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waitting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waitting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_wait_retry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_wait_retry"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailWaitRetry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stopped"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stopped"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStopped(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoved(refVal);
        }
    }
    return ok;
}


int32_t TaskProgress::getTotal() const
{
    return total_;
}

void TaskProgress::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TaskProgress::totalIsSet() const
{
    return totalIsSet_;
}

void TaskProgress::unsettotal()
{
    totalIsSet_ = false;
}

int32_t TaskProgress::getProcessing() const
{
    return processing_;
}

void TaskProgress::setProcessing(int32_t value)
{
    processing_ = value;
    processingIsSet_ = true;
}

bool TaskProgress::processingIsSet() const
{
    return processingIsSet_;
}

void TaskProgress::unsetprocessing()
{
    processingIsSet_ = false;
}

int32_t TaskProgress::getSuccess() const
{
    return success_;
}

void TaskProgress::setSuccess(int32_t value)
{
    success_ = value;
    successIsSet_ = true;
}

bool TaskProgress::successIsSet() const
{
    return successIsSet_;
}

void TaskProgress::unsetsuccess()
{
    successIsSet_ = false;
}

int32_t TaskProgress::getFail() const
{
    return fail_;
}

void TaskProgress::setFail(int32_t value)
{
    fail_ = value;
    failIsSet_ = true;
}

bool TaskProgress::failIsSet() const
{
    return failIsSet_;
}

void TaskProgress::unsetfail()
{
    failIsSet_ = false;
}

int32_t TaskProgress::getWaitting() const
{
    return waitting_;
}

void TaskProgress::setWaitting(int32_t value)
{
    waitting_ = value;
    waittingIsSet_ = true;
}

bool TaskProgress::waittingIsSet() const
{
    return waittingIsSet_;
}

void TaskProgress::unsetwaitting()
{
    waittingIsSet_ = false;
}

int32_t TaskProgress::getFailWaitRetry() const
{
    return failWaitRetry_;
}

void TaskProgress::setFailWaitRetry(int32_t value)
{
    failWaitRetry_ = value;
    failWaitRetryIsSet_ = true;
}

bool TaskProgress::failWaitRetryIsSet() const
{
    return failWaitRetryIsSet_;
}

void TaskProgress::unsetfailWaitRetry()
{
    failWaitRetryIsSet_ = false;
}

int32_t TaskProgress::getStopped() const
{
    return stopped_;
}

void TaskProgress::setStopped(int32_t value)
{
    stopped_ = value;
    stoppedIsSet_ = true;
}

bool TaskProgress::stoppedIsSet() const
{
    return stoppedIsSet_;
}

void TaskProgress::unsetstopped()
{
    stoppedIsSet_ = false;
}

int32_t TaskProgress::getRemoved() const
{
    return removed_;
}

void TaskProgress::setRemoved(int32_t value)
{
    removed_ = value;
    removedIsSet_ = true;
}

bool TaskProgress::removedIsSet() const
{
    return removedIsSet_;
}

void TaskProgress::unsetremoved()
{
    removedIsSet_ = false;
}

}
}
}
}
}



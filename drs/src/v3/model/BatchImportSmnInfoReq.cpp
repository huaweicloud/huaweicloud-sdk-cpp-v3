

#include "huaweicloud/drs/v3/model/BatchImportSmnInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchImportSmnInfoReq::BatchImportSmnInfoReq()
{
    jobsIsSet_ = false;
    alarmNotifyInfoIsSet_ = false;
}

BatchImportSmnInfoReq::~BatchImportSmnInfoReq() = default;

void BatchImportSmnInfoReq::validate()
{
}

web::json::value BatchImportSmnInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(alarmNotifyInfoIsSet_) {
        val[utility::conversions::to_string_t("alarm_notify_info")] = ModelBase::toJson(alarmNotifyInfo_);
    }

    return val;
}
bool BatchImportSmnInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SelectedSetAlarmTaskReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_notify_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_notify_info"));
        if(!fieldValue.is_null())
        {
            BatchSetAlarmNotifyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmNotifyInfo(refVal);
        }
    }
    return ok;
}


std::vector<SelectedSetAlarmTaskReq>& BatchImportSmnInfoReq::getJobs()
{
    return jobs_;
}

void BatchImportSmnInfoReq::setJobs(const std::vector<SelectedSetAlarmTaskReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchImportSmnInfoReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchImportSmnInfoReq::unsetjobs()
{
    jobsIsSet_ = false;
}

BatchSetAlarmNotifyInfo BatchImportSmnInfoReq::getAlarmNotifyInfo() const
{
    return alarmNotifyInfo_;
}

void BatchImportSmnInfoReq::setAlarmNotifyInfo(const BatchSetAlarmNotifyInfo& value)
{
    alarmNotifyInfo_ = value;
    alarmNotifyInfoIsSet_ = true;
}

bool BatchImportSmnInfoReq::alarmNotifyInfoIsSet() const
{
    return alarmNotifyInfoIsSet_;
}

void BatchImportSmnInfoReq::unsetalarmNotifyInfo()
{
    alarmNotifyInfoIsSet_ = false;
}

}
}
}
}
}



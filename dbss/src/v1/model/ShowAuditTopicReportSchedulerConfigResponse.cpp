

#include "huaweicloud/dbss/v1/model/ShowAuditTopicReportSchedulerConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditTopicReportSchedulerConfigResponse::ShowAuditTopicReportSchedulerConfigResponse()
{
    schedulerIsSet_ = false;
    smnEffective_ = false;
    smnEffectiveIsSet_ = false;
}

ShowAuditTopicReportSchedulerConfigResponse::~ShowAuditTopicReportSchedulerConfigResponse() = default;

void ShowAuditTopicReportSchedulerConfigResponse::validate()
{
}

web::json::value ShowAuditTopicReportSchedulerConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schedulerIsSet_) {
        val[utility::conversions::to_string_t("scheduler")] = ModelBase::toJson(scheduler_);
    }
    if(smnEffectiveIsSet_) {
        val[utility::conversions::to_string_t("smn_effective")] = ModelBase::toJson(smnEffective_);
    }

    return val;
}
bool ShowAuditTopicReportSchedulerConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scheduler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduler"));
        if(!fieldValue.is_null())
        {
            SchedulerConfigBase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_effective"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_effective"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnEffective(refVal);
        }
    }
    return ok;
}


SchedulerConfigBase ShowAuditTopicReportSchedulerConfigResponse::getScheduler() const
{
    return scheduler_;
}

void ShowAuditTopicReportSchedulerConfigResponse::setScheduler(const SchedulerConfigBase& value)
{
    scheduler_ = value;
    schedulerIsSet_ = true;
}

bool ShowAuditTopicReportSchedulerConfigResponse::schedulerIsSet() const
{
    return schedulerIsSet_;
}

void ShowAuditTopicReportSchedulerConfigResponse::unsetscheduler()
{
    schedulerIsSet_ = false;
}

bool ShowAuditTopicReportSchedulerConfigResponse::isSmnEffective() const
{
    return smnEffective_;
}

void ShowAuditTopicReportSchedulerConfigResponse::setSmnEffective(bool value)
{
    smnEffective_ = value;
    smnEffectiveIsSet_ = true;
}

bool ShowAuditTopicReportSchedulerConfigResponse::smnEffectiveIsSet() const
{
    return smnEffectiveIsSet_;
}

void ShowAuditTopicReportSchedulerConfigResponse::unsetsmnEffective()
{
    smnEffectiveIsSet_ = false;
}

}
}
}
}
}



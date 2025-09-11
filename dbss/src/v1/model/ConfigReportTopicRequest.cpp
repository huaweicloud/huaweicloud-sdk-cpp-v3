

#include "huaweicloud/dbss/v1/model/ConfigReportTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ConfigReportTopicRequest::ConfigReportTopicRequest()
{
    schedulerIsSet_ = false;
}

ConfigReportTopicRequest::~ConfigReportTopicRequest() = default;

void ConfigReportTopicRequest::validate()
{
}

web::json::value ConfigReportTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schedulerIsSet_) {
        val[utility::conversions::to_string_t("scheduler")] = ModelBase::toJson(scheduler_);
    }

    return val;
}
bool ConfigReportTopicRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scheduler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduler"));
        if(!fieldValue.is_null())
        {
            SchedulerBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduler(refVal);
        }
    }
    return ok;
}


SchedulerBean ConfigReportTopicRequest::getScheduler() const
{
    return scheduler_;
}

void ConfigReportTopicRequest::setScheduler(const SchedulerBean& value)
{
    scheduler_ = value;
    schedulerIsSet_ = true;
}

bool ConfigReportTopicRequest::schedulerIsSet() const
{
    return schedulerIsSet_;
}

void ConfigReportTopicRequest::unsetscheduler()
{
    schedulerIsSet_ = false;
}

}
}
}
}
}



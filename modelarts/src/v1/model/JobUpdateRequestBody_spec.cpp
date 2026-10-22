

#include "huaweicloud/modelarts/v1/model/JobUpdateRequestBody_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobUpdateRequestBody_spec::JobUpdateRequestBody_spec()
{
    notificationIsSet_ = false;
    schedulePolicyIsSet_ = false;
}

JobUpdateRequestBody_spec::~JobUpdateRequestBody_spec() = default;

void JobUpdateRequestBody_spec::validate()
{
}

web::json::value JobUpdateRequestBody_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notificationIsSet_) {
        val[utility::conversions::to_string_t("notification")] = ModelBase::toJson(notification_);
    }
    if(schedulePolicyIsSet_) {
        val[utility::conversions::to_string_t("schedule_policy")] = ModelBase::toJson(schedulePolicy_);
    }

    return val;
}
bool JobUpdateRequestBody_spec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification"));
        if(!fieldValue.is_null())
        {
            Notification refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_policy"));
        if(!fieldValue.is_null())
        {
            JobUpdateRequestBody_spec_schedule_policy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedulePolicy(refVal);
        }
    }
    return ok;
}


Notification JobUpdateRequestBody_spec::getNotification() const
{
    return notification_;
}

void JobUpdateRequestBody_spec::setNotification(const Notification& value)
{
    notification_ = value;
    notificationIsSet_ = true;
}

bool JobUpdateRequestBody_spec::notificationIsSet() const
{
    return notificationIsSet_;
}

void JobUpdateRequestBody_spec::unsetnotification()
{
    notificationIsSet_ = false;
}

JobUpdateRequestBody_spec_schedule_policy JobUpdateRequestBody_spec::getSchedulePolicy() const
{
    return schedulePolicy_;
}

void JobUpdateRequestBody_spec::setSchedulePolicy(const JobUpdateRequestBody_spec_schedule_policy& value)
{
    schedulePolicy_ = value;
    schedulePolicyIsSet_ = true;
}

bool JobUpdateRequestBody_spec::schedulePolicyIsSet() const
{
    return schedulePolicyIsSet_;
}

void JobUpdateRequestBody_spec::unsetschedulePolicy()
{
    schedulePolicyIsSet_ = false;
}

}
}
}
}
}



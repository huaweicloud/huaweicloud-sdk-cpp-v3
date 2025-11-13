

#include "huaweicloud/rds/v3/model/ModifySubscriptionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySubscriptionsRequestBody::ModifySubscriptionsRequestBody()
{
    subscriptionIdsIsSet_ = false;
    jobScheduleIsSet_ = false;
}

ModifySubscriptionsRequestBody::~ModifySubscriptionsRequestBody() = default;

void ModifySubscriptionsRequestBody::validate()
{
}

web::json::value ModifySubscriptionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionIdsIsSet_) {
        val[utility::conversions::to_string_t("subscription_ids")] = ModelBase::toJson(subscriptionIds_);
    }
    if(jobScheduleIsSet_) {
        val[utility::conversions::to_string_t("job_schedule")] = ModelBase::toJson(jobSchedule_);
    }

    return val;
}
bool ModifySubscriptionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_schedule"));
        if(!fieldValue.is_null())
        {
            OperateUsedJobSchedule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobSchedule(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ModifySubscriptionsRequestBody::getSubscriptionIds()
{
    return subscriptionIds_;
}

void ModifySubscriptionsRequestBody::setSubscriptionIds(const std::vector<std::string>& value)
{
    subscriptionIds_ = value;
    subscriptionIdsIsSet_ = true;
}

bool ModifySubscriptionsRequestBody::subscriptionIdsIsSet() const
{
    return subscriptionIdsIsSet_;
}

void ModifySubscriptionsRequestBody::unsetsubscriptionIds()
{
    subscriptionIdsIsSet_ = false;
}

OperateUsedJobSchedule ModifySubscriptionsRequestBody::getJobSchedule() const
{
    return jobSchedule_;
}

void ModifySubscriptionsRequestBody::setJobSchedule(const OperateUsedJobSchedule& value)
{
    jobSchedule_ = value;
    jobScheduleIsSet_ = true;
}

bool ModifySubscriptionsRequestBody::jobScheduleIsSet() const
{
    return jobScheduleIsSet_;
}

void ModifySubscriptionsRequestBody::unsetjobSchedule()
{
    jobScheduleIsSet_ = false;
}

}
}
}
}
}



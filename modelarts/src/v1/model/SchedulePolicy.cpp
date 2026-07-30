

#include "huaweicloud/modelarts/v1/model/SchedulePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SchedulePolicy::SchedulePolicy()
{
    requiredAffinityIsSet_ = false;
    preferredAffinityIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    preemptible_ = false;
    preemptibleIsSet_ = false;
}

SchedulePolicy::~SchedulePolicy() = default;

void SchedulePolicy::validate()
{
}

web::json::value SchedulePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredAffinityIsSet_) {
        val[utility::conversions::to_string_t("required_affinity")] = ModelBase::toJson(requiredAffinity_);
    }
    if(preferredAffinityIsSet_) {
        val[utility::conversions::to_string_t("preferred_affinity")] = ModelBase::toJson(preferredAffinity_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(preemptibleIsSet_) {
        val[utility::conversions::to_string_t("preemptible")] = ModelBase::toJson(preemptible_);
    }

    return val;
}
bool SchedulePolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_affinity"));
        if(!fieldValue.is_null())
        {
            RequiredAffinity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredAffinity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preferred_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preferred_affinity"));
        if(!fieldValue.is_null())
        {
            PreferredAffinity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreferredAffinity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preemptible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preemptible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreemptible(refVal);
        }
    }
    return ok;
}


RequiredAffinity SchedulePolicy::getRequiredAffinity() const
{
    return requiredAffinity_;
}

void SchedulePolicy::setRequiredAffinity(const RequiredAffinity& value)
{
    requiredAffinity_ = value;
    requiredAffinityIsSet_ = true;
}

bool SchedulePolicy::requiredAffinityIsSet() const
{
    return requiredAffinityIsSet_;
}

void SchedulePolicy::unsetrequiredAffinity()
{
    requiredAffinityIsSet_ = false;
}

PreferredAffinity SchedulePolicy::getPreferredAffinity() const
{
    return preferredAffinity_;
}

void SchedulePolicy::setPreferredAffinity(const PreferredAffinity& value)
{
    preferredAffinity_ = value;
    preferredAffinityIsSet_ = true;
}

bool SchedulePolicy::preferredAffinityIsSet() const
{
    return preferredAffinityIsSet_;
}

void SchedulePolicy::unsetpreferredAffinity()
{
    preferredAffinityIsSet_ = false;
}

int32_t SchedulePolicy::getPriority() const
{
    return priority_;
}

void SchedulePolicy::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool SchedulePolicy::priorityIsSet() const
{
    return priorityIsSet_;
}

void SchedulePolicy::unsetpriority()
{
    priorityIsSet_ = false;
}

bool SchedulePolicy::isPreemptible() const
{
    return preemptible_;
}

void SchedulePolicy::setPreemptible(bool value)
{
    preemptible_ = value;
    preemptibleIsSet_ = true;
}

bool SchedulePolicy::preemptibleIsSet() const
{
    return preemptibleIsSet_;
}

void SchedulePolicy::unsetpreemptible()
{
    preemptibleIsSet_ = false;
}

}
}
}
}
}



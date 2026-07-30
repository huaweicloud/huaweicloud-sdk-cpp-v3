

#include "huaweicloud/modelarts/v1/model/SchedulePolicyResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SchedulePolicyResp::SchedulePolicyResp()
{
    requiredAffinityIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    preemptible_ = false;
    preemptibleIsSet_ = false;
}

SchedulePolicyResp::~SchedulePolicyResp() = default;

void SchedulePolicyResp::validate()
{
}

web::json::value SchedulePolicyResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requiredAffinityIsSet_) {
        val[utility::conversions::to_string_t("required_affinity")] = ModelBase::toJson(requiredAffinity_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(preemptibleIsSet_) {
        val[utility::conversions::to_string_t("preemptible")] = ModelBase::toJson(preemptible_);
    }

    return val;
}
bool SchedulePolicyResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("required_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_affinity"));
        if(!fieldValue.is_null())
        {
            RequiredAffinityResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredAffinity(refVal);
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


RequiredAffinityResp SchedulePolicyResp::getRequiredAffinity() const
{
    return requiredAffinity_;
}

void SchedulePolicyResp::setRequiredAffinity(const RequiredAffinityResp& value)
{
    requiredAffinity_ = value;
    requiredAffinityIsSet_ = true;
}

bool SchedulePolicyResp::requiredAffinityIsSet() const
{
    return requiredAffinityIsSet_;
}

void SchedulePolicyResp::unsetrequiredAffinity()
{
    requiredAffinityIsSet_ = false;
}

int32_t SchedulePolicyResp::getPriority() const
{
    return priority_;
}

void SchedulePolicyResp::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool SchedulePolicyResp::priorityIsSet() const
{
    return priorityIsSet_;
}

void SchedulePolicyResp::unsetpriority()
{
    priorityIsSet_ = false;
}

bool SchedulePolicyResp::isPreemptible() const
{
    return preemptible_;
}

void SchedulePolicyResp::setPreemptible(bool value)
{
    preemptible_ = value;
    preemptibleIsSet_ = true;
}

bool SchedulePolicyResp::preemptibleIsSet() const
{
    return preemptibleIsSet_;
}

void SchedulePolicyResp::unsetpreemptible()
{
    preemptibleIsSet_ = false;
}

}
}
}
}
}



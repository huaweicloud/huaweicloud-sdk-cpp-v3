

#include "huaweicloud/modelarts/v1/model/JobUpdateRequestBody_spec_schedule_policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobUpdateRequestBody_spec_schedule_policy::JobUpdateRequestBody_spec_schedule_policy()
{
    priority_ = 0;
    priorityIsSet_ = false;
    preemptible_ = false;
    preemptibleIsSet_ = false;
}

JobUpdateRequestBody_spec_schedule_policy::~JobUpdateRequestBody_spec_schedule_policy() = default;

void JobUpdateRequestBody_spec_schedule_policy::validate()
{
}

web::json::value JobUpdateRequestBody_spec_schedule_policy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(preemptibleIsSet_) {
        val[utility::conversions::to_string_t("preemptible")] = ModelBase::toJson(preemptible_);
    }

    return val;
}
bool JobUpdateRequestBody_spec_schedule_policy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t JobUpdateRequestBody_spec_schedule_policy::getPriority() const
{
    return priority_;
}

void JobUpdateRequestBody_spec_schedule_policy::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool JobUpdateRequestBody_spec_schedule_policy::priorityIsSet() const
{
    return priorityIsSet_;
}

void JobUpdateRequestBody_spec_schedule_policy::unsetpriority()
{
    priorityIsSet_ = false;
}

bool JobUpdateRequestBody_spec_schedule_policy::isPreemptible() const
{
    return preemptible_;
}

void JobUpdateRequestBody_spec_schedule_policy::setPreemptible(bool value)
{
    preemptible_ = value;
    preemptibleIsSet_ = true;
}

bool JobUpdateRequestBody_spec_schedule_policy::preemptibleIsSet() const
{
    return preemptibleIsSet_;
}

void JobUpdateRequestBody_spec_schedule_policy::unsetpreemptible()
{
    preemptibleIsSet_ = false;
}

}
}
}
}
}



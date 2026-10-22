

#include "huaweicloud/modelarts/v1/model/UnitGroupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnitGroupPolicy::UnitGroupPolicy()
{
    scheduleScope_ = "";
    scheduleScopeIsSet_ = false;
}

UnitGroupPolicy::~UnitGroupPolicy() = default;

void UnitGroupPolicy::validate()
{
}

web::json::value UnitGroupPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleScopeIsSet_) {
        val[utility::conversions::to_string_t("schedule_scope")] = ModelBase::toJson(scheduleScope_);
    }

    return val;
}
bool UnitGroupPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleScope(refVal);
        }
    }
    return ok;
}


std::string UnitGroupPolicy::getScheduleScope() const
{
    return scheduleScope_;
}

void UnitGroupPolicy::setScheduleScope(const std::string& value)
{
    scheduleScope_ = value;
    scheduleScopeIsSet_ = true;
}

bool UnitGroupPolicy::scheduleScopeIsSet() const
{
    return scheduleScopeIsSet_;
}

void UnitGroupPolicy::unsetscheduleScope()
{
    scheduleScopeIsSet_ = false;
}

}
}
}
}
}



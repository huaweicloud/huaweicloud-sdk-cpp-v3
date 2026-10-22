

#include "huaweicloud/modelarts/v1/model/UnitGroupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnitGroupPolicyResponse::UnitGroupPolicyResponse()
{
    scheduleScope_ = "";
    scheduleScopeIsSet_ = false;
}

UnitGroupPolicyResponse::~UnitGroupPolicyResponse() = default;

void UnitGroupPolicyResponse::validate()
{
}

web::json::value UnitGroupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleScopeIsSet_) {
        val[utility::conversions::to_string_t("schedule_scope")] = ModelBase::toJson(scheduleScope_);
    }

    return val;
}
bool UnitGroupPolicyResponse::fromJson(const web::json::value& val)
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


std::string UnitGroupPolicyResponse::getScheduleScope() const
{
    return scheduleScope_;
}

void UnitGroupPolicyResponse::setScheduleScope(const std::string& value)
{
    scheduleScope_ = value;
    scheduleScopeIsSet_ = true;
}

bool UnitGroupPolicyResponse::scheduleScopeIsSet() const
{
    return scheduleScopeIsSet_;
}

void UnitGroupPolicyResponse::unsetscheduleScope()
{
    scheduleScopeIsSet_ = false;
}

}
}
}
}
}



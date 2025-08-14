

#include "huaweicloud/iotda/v5/model/ConditionGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ConditionGroup::ConditionGroup()
{
    conditionsIsSet_ = false;
    logic_ = "";
    logicIsSet_ = false;
    timeRangeIsSet_ = false;
}

ConditionGroup::~ConditionGroup() = default;

void ConditionGroup::validate()
{
}

web::json::value ConditionGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(logicIsSet_) {
        val[utility::conversions::to_string_t("logic")] = ModelBase::toJson(logic_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }

    return val;
}
bool ConditionGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            TimeRange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    return ok;
}


std::vector<RuleCondition>& ConditionGroup::getConditions()
{
    return conditions_;
}

void ConditionGroup::setConditions(const std::vector<RuleCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool ConditionGroup::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void ConditionGroup::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::string ConditionGroup::getLogic() const
{
    return logic_;
}

void ConditionGroup::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool ConditionGroup::logicIsSet() const
{
    return logicIsSet_;
}

void ConditionGroup::unsetlogic()
{
    logicIsSet_ = false;
}

TimeRange ConditionGroup::getTimeRange() const
{
    return timeRange_;
}

void ConditionGroup::setTimeRange(const TimeRange& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool ConditionGroup::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void ConditionGroup::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

}
}
}
}
}



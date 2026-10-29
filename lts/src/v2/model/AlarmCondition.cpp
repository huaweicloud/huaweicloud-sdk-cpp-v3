

#include "huaweicloud/lts/v2/model/AlarmCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AlarmCondition::AlarmCondition()
{
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    alarmLevel_ = "";
    alarmLevelIsSet_ = false;
}

AlarmCondition::~AlarmCondition() = default;

void AlarmCondition::validate()
{
}

web::json::value AlarmCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
    }
    if(alarmLevelIsSet_) {
        val[utility::conversions::to_string_t("alarm_level")] = ModelBase::toJson(alarmLevel_);
    }

    return val;
}
bool AlarmCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_expression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLevel(refVal);
        }
    }
    return ok;
}


std::string AlarmCondition::getConditionExpression() const
{
    return conditionExpression_;
}

void AlarmCondition::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool AlarmCondition::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void AlarmCondition::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::string AlarmCondition::getAlarmLevel() const
{
    return alarmLevel_;
}

void AlarmCondition::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool AlarmCondition::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void AlarmCondition::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

}
}
}
}
}



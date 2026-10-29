

#include "huaweicloud/lts/v2/model/KeywordsAlarmConditions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




KeywordsAlarmConditions::KeywordsAlarmConditions()
{
    condition_ = "";
    conditionIsSet_ = false;
    number_ = 0;
    numberIsSet_ = false;
    alarmLevel_ = "";
    alarmLevelIsSet_ = false;
}

KeywordsAlarmConditions::~KeywordsAlarmConditions() = default;

void KeywordsAlarmConditions::validate()
{
}

web::json::value KeywordsAlarmConditions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(alarmLevelIsSet_) {
        val[utility::conversions::to_string_t("alarm_level")] = ModelBase::toJson(alarmLevel_);
    }

    return val;
}
bool KeywordsAlarmConditions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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


std::string KeywordsAlarmConditions::getCondition() const
{
    return condition_;
}

void KeywordsAlarmConditions::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool KeywordsAlarmConditions::conditionIsSet() const
{
    return conditionIsSet_;
}

void KeywordsAlarmConditions::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t KeywordsAlarmConditions::getNumber() const
{
    return number_;
}

void KeywordsAlarmConditions::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool KeywordsAlarmConditions::numberIsSet() const
{
    return numberIsSet_;
}

void KeywordsAlarmConditions::unsetnumber()
{
    numberIsSet_ = false;
}

std::string KeywordsAlarmConditions::getAlarmLevel() const
{
    return alarmLevel_;
}

void KeywordsAlarmConditions::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool KeywordsAlarmConditions::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void KeywordsAlarmConditions::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

}
}
}
}
}



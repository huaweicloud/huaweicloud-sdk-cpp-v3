

#include "huaweicloud/lts/v2/model/ChangeAlarmRuleStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ChangeAlarmRuleStatus::ChangeAlarmRuleStatus()
{
    alarmRuleId_ = "";
    alarmRuleIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ChangeAlarmRuleStatus::~ChangeAlarmRuleStatus() = default;

void ChangeAlarmRuleStatus::validate()
{
}

web::json::value ChangeAlarmRuleStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_id")] = ModelBase::toJson(alarmRuleId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ChangeAlarmRuleStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ChangeAlarmRuleStatus::getAlarmRuleId() const
{
    return alarmRuleId_;
}

void ChangeAlarmRuleStatus::setAlarmRuleId(const std::string& value)
{
    alarmRuleId_ = value;
    alarmRuleIdIsSet_ = true;
}

bool ChangeAlarmRuleStatus::alarmRuleIdIsSet() const
{
    return alarmRuleIdIsSet_;
}

void ChangeAlarmRuleStatus::unsetalarmRuleId()
{
    alarmRuleIdIsSet_ = false;
}

std::string ChangeAlarmRuleStatus::getStatus() const
{
    return status_;
}

void ChangeAlarmRuleStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeAlarmRuleStatus::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeAlarmRuleStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChangeAlarmRuleStatus::getType() const
{
    return type_;
}

void ChangeAlarmRuleStatus::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ChangeAlarmRuleStatus::typeIsSet() const
{
    return typeIsSet_;
}

void ChangeAlarmRuleStatus::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



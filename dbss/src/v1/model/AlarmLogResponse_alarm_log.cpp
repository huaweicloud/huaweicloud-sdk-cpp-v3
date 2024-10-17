

#include "huaweicloud/dbss/v1/model/AlarmLogResponse_alarm_log.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AlarmLogResponse_alarm_log::AlarmLogResponse_alarm_log()
{
    id_ = "";
    idIsSet_ = false;
    alarmLife_ = "";
    alarmLifeIsSet_ = false;
    sendEmail_ = false;
    sendEmailIsSet_ = false;
    alarmTime_ = "";
    alarmTimeIsSet_ = false;
    alarmType_ = "";
    alarmTypeIsSet_ = false;
    alarmFixTime_ = "";
    alarmFixTimeIsSet_ = false;
    alarmStatus_ = "";
    alarmStatusIsSet_ = false;
    alarmRisk_ = "";
    alarmRiskIsSet_ = false;
    alarmDescription_ = "";
    alarmDescriptionIsSet_ = false;
}

AlarmLogResponse_alarm_log::~AlarmLogResponse_alarm_log() = default;

void AlarmLogResponse_alarm_log::validate()
{
}

web::json::value AlarmLogResponse_alarm_log::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(alarmLifeIsSet_) {
        val[utility::conversions::to_string_t("alarmLife")] = ModelBase::toJson(alarmLife_);
    }
    if(sendEmailIsSet_) {
        val[utility::conversions::to_string_t("sendEmail")] = ModelBase::toJson(sendEmail_);
    }
    if(alarmTimeIsSet_) {
        val[utility::conversions::to_string_t("alarm_time")] = ModelBase::toJson(alarmTime_);
    }
    if(alarmTypeIsSet_) {
        val[utility::conversions::to_string_t("alarm_type")] = ModelBase::toJson(alarmType_);
    }
    if(alarmFixTimeIsSet_) {
        val[utility::conversions::to_string_t("alarm_fix_time")] = ModelBase::toJson(alarmFixTime_);
    }
    if(alarmStatusIsSet_) {
        val[utility::conversions::to_string_t("alarm_status")] = ModelBase::toJson(alarmStatus_);
    }
    if(alarmRiskIsSet_) {
        val[utility::conversions::to_string_t("alarm_risk")] = ModelBase::toJson(alarmRisk_);
    }
    if(alarmDescriptionIsSet_) {
        val[utility::conversions::to_string_t("alarm_description")] = ModelBase::toJson(alarmDescription_);
    }

    return val;
}
bool AlarmLogResponse_alarm_log::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarmLife"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarmLife"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLife(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendEmail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendEmail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_fix_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_fix_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmFixTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_risk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmDescription(refVal);
        }
    }
    return ok;
}


std::string AlarmLogResponse_alarm_log::getId() const
{
    return id_;
}

void AlarmLogResponse_alarm_log::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::idIsSet() const
{
    return idIsSet_;
}

void AlarmLogResponse_alarm_log::unsetid()
{
    idIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmLife() const
{
    return alarmLife_;
}

void AlarmLogResponse_alarm_log::setAlarmLife(const std::string& value)
{
    alarmLife_ = value;
    alarmLifeIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmLifeIsSet() const
{
    return alarmLifeIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmLife()
{
    alarmLifeIsSet_ = false;
}

bool AlarmLogResponse_alarm_log::isSendEmail() const
{
    return sendEmail_;
}

void AlarmLogResponse_alarm_log::setSendEmail(bool value)
{
    sendEmail_ = value;
    sendEmailIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::sendEmailIsSet() const
{
    return sendEmailIsSet_;
}

void AlarmLogResponse_alarm_log::unsetsendEmail()
{
    sendEmailIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmTime() const
{
    return alarmTime_;
}

void AlarmLogResponse_alarm_log::setAlarmTime(const std::string& value)
{
    alarmTime_ = value;
    alarmTimeIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmTimeIsSet() const
{
    return alarmTimeIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmTime()
{
    alarmTimeIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmType() const
{
    return alarmType_;
}

void AlarmLogResponse_alarm_log::setAlarmType(const std::string& value)
{
    alarmType_ = value;
    alarmTypeIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmTypeIsSet() const
{
    return alarmTypeIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmType()
{
    alarmTypeIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmFixTime() const
{
    return alarmFixTime_;
}

void AlarmLogResponse_alarm_log::setAlarmFixTime(const std::string& value)
{
    alarmFixTime_ = value;
    alarmFixTimeIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmFixTimeIsSet() const
{
    return alarmFixTimeIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmFixTime()
{
    alarmFixTimeIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmStatus() const
{
    return alarmStatus_;
}

void AlarmLogResponse_alarm_log::setAlarmStatus(const std::string& value)
{
    alarmStatus_ = value;
    alarmStatusIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmStatusIsSet() const
{
    return alarmStatusIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmStatus()
{
    alarmStatusIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmRisk() const
{
    return alarmRisk_;
}

void AlarmLogResponse_alarm_log::setAlarmRisk(const std::string& value)
{
    alarmRisk_ = value;
    alarmRiskIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmRiskIsSet() const
{
    return alarmRiskIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmRisk()
{
    alarmRiskIsSet_ = false;
}

std::string AlarmLogResponse_alarm_log::getAlarmDescription() const
{
    return alarmDescription_;
}

void AlarmLogResponse_alarm_log::setAlarmDescription(const std::string& value)
{
    alarmDescription_ = value;
    alarmDescriptionIsSet_ = true;
}

bool AlarmLogResponse_alarm_log::alarmDescriptionIsSet() const
{
    return alarmDescriptionIsSet_;
}

void AlarmLogResponse_alarm_log::unsetalarmDescription()
{
    alarmDescriptionIsSet_ = false;
}

}
}
}
}
}



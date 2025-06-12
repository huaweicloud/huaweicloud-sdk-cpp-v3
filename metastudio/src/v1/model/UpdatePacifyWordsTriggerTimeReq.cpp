

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsTriggerTimeReq::UpdatePacifyWordsTriggerTimeReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    languageIsSet_ = false;
    triggerTime_ = 0;
    triggerTimeIsSet_ = false;
}

UpdatePacifyWordsTriggerTimeReq::~UpdatePacifyWordsTriggerTimeReq() = default;

void UpdatePacifyWordsTriggerTimeReq::validate()
{
}

web::json::value UpdatePacifyWordsTriggerTimeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(triggerTimeIsSet_) {
        val[utility::conversions::to_string_t("trigger_time")] = ModelBase::toJson(triggerTime_);
    }

    return val;
}
bool UpdatePacifyWordsTriggerTimeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerTime(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsTriggerTimeReq::getRobotId() const
{
    return robotId_;
}

void UpdatePacifyWordsTriggerTimeReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdatePacifyWordsTriggerTimeReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

LanguageEnum UpdatePacifyWordsTriggerTimeReq::getLanguage() const
{
    return language_;
}

void UpdatePacifyWordsTriggerTimeReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeReq::languageIsSet() const
{
    return languageIsSet_;
}

void UpdatePacifyWordsTriggerTimeReq::unsetlanguage()
{
    languageIsSet_ = false;
}

int32_t UpdatePacifyWordsTriggerTimeReq::getTriggerTime() const
{
    return triggerTime_;
}

void UpdatePacifyWordsTriggerTimeReq::setTriggerTime(int32_t value)
{
    triggerTime_ = value;
    triggerTimeIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeReq::triggerTimeIsSet() const
{
    return triggerTimeIsSet_;
}

void UpdatePacifyWordsTriggerTimeReq::unsettriggerTime()
{
    triggerTimeIsSet_ = false;
}

}
}
}
}
}



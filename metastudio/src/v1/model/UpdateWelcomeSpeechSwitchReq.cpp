

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechSwitchReq::UpdateWelcomeSpeechSwitchReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    enableWelcomeSpeech_ = false;
    enableWelcomeSpeechIsSet_ = false;
    languageIsSet_ = false;
}

UpdateWelcomeSpeechSwitchReq::~UpdateWelcomeSpeechSwitchReq() = default;

void UpdateWelcomeSpeechSwitchReq::validate()
{
}

web::json::value UpdateWelcomeSpeechSwitchReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(enableWelcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("enable_welcome_speech")] = ModelBase::toJson(enableWelcomeSpeech_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool UpdateWelcomeSpeechSwitchReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable_welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_welcome_speech"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableWelcomeSpeech(refVal);
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
    return ok;
}


std::string UpdateWelcomeSpeechSwitchReq::getRobotId() const
{
    return robotId_;
}

void UpdateWelcomeSpeechSwitchReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateWelcomeSpeechSwitchReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

bool UpdateWelcomeSpeechSwitchReq::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void UpdateWelcomeSpeechSwitchReq::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchReq::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void UpdateWelcomeSpeechSwitchReq::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

LanguageEnum UpdateWelcomeSpeechSwitchReq::getLanguage() const
{
    return language_;
}

void UpdateWelcomeSpeechSwitchReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchReq::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateWelcomeSpeechSwitchReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}



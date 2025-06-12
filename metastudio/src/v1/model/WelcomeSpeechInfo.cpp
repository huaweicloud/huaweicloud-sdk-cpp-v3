

#include "huaweicloud/metastudio/v1/model/WelcomeSpeechInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




WelcomeSpeechInfo::WelcomeSpeechInfo()
{
    welcomeSpeechId_ = "";
    welcomeSpeechIdIsSet_ = false;
    welcomeSpeech_ = "";
    welcomeSpeechIsSet_ = false;
    enableWelcomeSpeech_ = false;
    enableWelcomeSpeechIsSet_ = false;
    languageIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

WelcomeSpeechInfo::~WelcomeSpeechInfo() = default;

void WelcomeSpeechInfo::validate()
{
}

web::json::value WelcomeSpeechInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(welcomeSpeechIdIsSet_) {
        val[utility::conversions::to_string_t("welcome_speech_id")] = ModelBase::toJson(welcomeSpeechId_);
    }
    if(welcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("welcome_speech")] = ModelBase::toJson(welcomeSpeech_);
    }
    if(enableWelcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("enable_welcome_speech")] = ModelBase::toJson(enableWelcomeSpeech_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool WelcomeSpeechInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("welcome_speech_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welcome_speech_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelcomeSpeechId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welcome_speech"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelcomeSpeech(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string WelcomeSpeechInfo::getWelcomeSpeechId() const
{
    return welcomeSpeechId_;
}

void WelcomeSpeechInfo::setWelcomeSpeechId(const std::string& value)
{
    welcomeSpeechId_ = value;
    welcomeSpeechIdIsSet_ = true;
}

bool WelcomeSpeechInfo::welcomeSpeechIdIsSet() const
{
    return welcomeSpeechIdIsSet_;
}

void WelcomeSpeechInfo::unsetwelcomeSpeechId()
{
    welcomeSpeechIdIsSet_ = false;
}

std::string WelcomeSpeechInfo::getWelcomeSpeech() const
{
    return welcomeSpeech_;
}

void WelcomeSpeechInfo::setWelcomeSpeech(const std::string& value)
{
    welcomeSpeech_ = value;
    welcomeSpeechIsSet_ = true;
}

bool WelcomeSpeechInfo::welcomeSpeechIsSet() const
{
    return welcomeSpeechIsSet_;
}

void WelcomeSpeechInfo::unsetwelcomeSpeech()
{
    welcomeSpeechIsSet_ = false;
}

bool WelcomeSpeechInfo::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void WelcomeSpeechInfo::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool WelcomeSpeechInfo::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void WelcomeSpeechInfo::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

LanguageEnum WelcomeSpeechInfo::getLanguage() const
{
    return language_;
}

void WelcomeSpeechInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool WelcomeSpeechInfo::languageIsSet() const
{
    return languageIsSet_;
}

void WelcomeSpeechInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string WelcomeSpeechInfo::getRobotId() const
{
    return robotId_;
}

void WelcomeSpeechInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool WelcomeSpeechInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void WelcomeSpeechInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string WelcomeSpeechInfo::getCreateTime() const
{
    return createTime_;
}

void WelcomeSpeechInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool WelcomeSpeechInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void WelcomeSpeechInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string WelcomeSpeechInfo::getUpdateTime() const
{
    return updateTime_;
}

void WelcomeSpeechInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool WelcomeSpeechInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void WelcomeSpeechInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



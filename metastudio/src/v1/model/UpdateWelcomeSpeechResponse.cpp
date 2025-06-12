

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechResponse::UpdateWelcomeSpeechResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateWelcomeSpeechResponse::~UpdateWelcomeSpeechResponse() = default;

void UpdateWelcomeSpeechResponse::validate()
{
}

web::json::value UpdateWelcomeSpeechResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateWelcomeSpeechResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateWelcomeSpeechResponse::getWelcomeSpeechId() const
{
    return welcomeSpeechId_;
}

void UpdateWelcomeSpeechResponse::setWelcomeSpeechId(const std::string& value)
{
    welcomeSpeechId_ = value;
    welcomeSpeechIdIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::welcomeSpeechIdIsSet() const
{
    return welcomeSpeechIdIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetwelcomeSpeechId()
{
    welcomeSpeechIdIsSet_ = false;
}

std::string UpdateWelcomeSpeechResponse::getWelcomeSpeech() const
{
    return welcomeSpeech_;
}

void UpdateWelcomeSpeechResponse::setWelcomeSpeech(const std::string& value)
{
    welcomeSpeech_ = value;
    welcomeSpeechIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::welcomeSpeechIsSet() const
{
    return welcomeSpeechIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetwelcomeSpeech()
{
    welcomeSpeechIsSet_ = false;
}

bool UpdateWelcomeSpeechResponse::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void UpdateWelcomeSpeechResponse::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

LanguageEnum UpdateWelcomeSpeechResponse::getLanguage() const
{
    return language_;
}

void UpdateWelcomeSpeechResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateWelcomeSpeechResponse::getRobotId() const
{
    return robotId_;
}

void UpdateWelcomeSpeechResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string UpdateWelcomeSpeechResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateWelcomeSpeechResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateWelcomeSpeechResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateWelcomeSpeechResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateWelcomeSpeechResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateWelcomeSpeechResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateWelcomeSpeechResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateWelcomeSpeechResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



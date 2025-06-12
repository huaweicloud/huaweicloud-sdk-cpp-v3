

#include "huaweicloud/metastudio/v1/model/CreateWelcomeSpeechResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateWelcomeSpeechResponse::CreateWelcomeSpeechResponse()
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

CreateWelcomeSpeechResponse::~CreateWelcomeSpeechResponse() = default;

void CreateWelcomeSpeechResponse::validate()
{
}

web::json::value CreateWelcomeSpeechResponse::toJson() const
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
bool CreateWelcomeSpeechResponse::fromJson(const web::json::value& val)
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


std::string CreateWelcomeSpeechResponse::getWelcomeSpeechId() const
{
    return welcomeSpeechId_;
}

void CreateWelcomeSpeechResponse::setWelcomeSpeechId(const std::string& value)
{
    welcomeSpeechId_ = value;
    welcomeSpeechIdIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::welcomeSpeechIdIsSet() const
{
    return welcomeSpeechIdIsSet_;
}

void CreateWelcomeSpeechResponse::unsetwelcomeSpeechId()
{
    welcomeSpeechIdIsSet_ = false;
}

std::string CreateWelcomeSpeechResponse::getWelcomeSpeech() const
{
    return welcomeSpeech_;
}

void CreateWelcomeSpeechResponse::setWelcomeSpeech(const std::string& value)
{
    welcomeSpeech_ = value;
    welcomeSpeechIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::welcomeSpeechIsSet() const
{
    return welcomeSpeechIsSet_;
}

void CreateWelcomeSpeechResponse::unsetwelcomeSpeech()
{
    welcomeSpeechIsSet_ = false;
}

bool CreateWelcomeSpeechResponse::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void CreateWelcomeSpeechResponse::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void CreateWelcomeSpeechResponse::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

LanguageEnum CreateWelcomeSpeechResponse::getLanguage() const
{
    return language_;
}

void CreateWelcomeSpeechResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::languageIsSet() const
{
    return languageIsSet_;
}

void CreateWelcomeSpeechResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CreateWelcomeSpeechResponse::getRobotId() const
{
    return robotId_;
}

void CreateWelcomeSpeechResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateWelcomeSpeechResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateWelcomeSpeechResponse::getCreateTime() const
{
    return createTime_;
}

void CreateWelcomeSpeechResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateWelcomeSpeechResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateWelcomeSpeechResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateWelcomeSpeechResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateWelcomeSpeechResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateWelcomeSpeechResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateWelcomeSpeechResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateWelcomeSpeechResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateWelcomeSpeechResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



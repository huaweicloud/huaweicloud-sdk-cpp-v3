

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsResponse::UpdatePacifyWordsResponse()
{
    pacifyWordsId_ = "";
    pacifyWordsIdIsSet_ = false;
    pacifyWords_ = "";
    pacifyWordsIsSet_ = false;
    languageIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    pacifyWordsType_ = 0;
    pacifyWordsTypeIsSet_ = false;
    intent_ = "";
    intentIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdatePacifyWordsResponse::~UpdatePacifyWordsResponse() = default;

void UpdatePacifyWordsResponse::validate()
{
}

web::json::value UpdatePacifyWordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pacifyWordsIdIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_id")] = ModelBase::toJson(pacifyWordsId_);
    }
    if(pacifyWordsIsSet_) {
        val[utility::conversions::to_string_t("pacify_words")] = ModelBase::toJson(pacifyWords_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(pacifyWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_type")] = ModelBase::toJson(pacifyWordsType_);
    }
    if(intentIsSet_) {
        val[utility::conversions::to_string_t("intent")] = ModelBase::toJson(intent_);
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
bool UpdatePacifyWordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pacify_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWordsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pacify_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pacify_words_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWordsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntent(refVal);
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


std::string UpdatePacifyWordsResponse::getPacifyWordsId() const
{
    return pacifyWordsId_;
}

void UpdatePacifyWordsResponse::setPacifyWordsId(const std::string& value)
{
    pacifyWordsId_ = value;
    pacifyWordsIdIsSet_ = true;
}

bool UpdatePacifyWordsResponse::pacifyWordsIdIsSet() const
{
    return pacifyWordsIdIsSet_;
}

void UpdatePacifyWordsResponse::unsetpacifyWordsId()
{
    pacifyWordsIdIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getPacifyWords() const
{
    return pacifyWords_;
}

void UpdatePacifyWordsResponse::setPacifyWords(const std::string& value)
{
    pacifyWords_ = value;
    pacifyWordsIsSet_ = true;
}

bool UpdatePacifyWordsResponse::pacifyWordsIsSet() const
{
    return pacifyWordsIsSet_;
}

void UpdatePacifyWordsResponse::unsetpacifyWords()
{
    pacifyWordsIsSet_ = false;
}

LanguageEnum UpdatePacifyWordsResponse::getLanguage() const
{
    return language_;
}

void UpdatePacifyWordsResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdatePacifyWordsResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdatePacifyWordsResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getRobotId() const
{
    return robotId_;
}

void UpdatePacifyWordsResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdatePacifyWordsResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdatePacifyWordsResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t UpdatePacifyWordsResponse::getPacifyWordsType() const
{
    return pacifyWordsType_;
}

void UpdatePacifyWordsResponse::setPacifyWordsType(int32_t value)
{
    pacifyWordsType_ = value;
    pacifyWordsTypeIsSet_ = true;
}

bool UpdatePacifyWordsResponse::pacifyWordsTypeIsSet() const
{
    return pacifyWordsTypeIsSet_;
}

void UpdatePacifyWordsResponse::unsetpacifyWordsType()
{
    pacifyWordsTypeIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getIntent() const
{
    return intent_;
}

void UpdatePacifyWordsResponse::setIntent(const std::string& value)
{
    intent_ = value;
    intentIsSet_ = true;
}

bool UpdatePacifyWordsResponse::intentIsSet() const
{
    return intentIsSet_;
}

void UpdatePacifyWordsResponse::unsetintent()
{
    intentIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getCreateTime() const
{
    return createTime_;
}

void UpdatePacifyWordsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdatePacifyWordsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdatePacifyWordsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdatePacifyWordsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdatePacifyWordsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdatePacifyWordsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdatePacifyWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePacifyWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePacifyWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePacifyWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



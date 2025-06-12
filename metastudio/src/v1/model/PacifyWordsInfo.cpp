

#include "huaweicloud/metastudio/v1/model/PacifyWordsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PacifyWordsInfo::PacifyWordsInfo()
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
}

PacifyWordsInfo::~PacifyWordsInfo() = default;

void PacifyWordsInfo::validate()
{
}

web::json::value PacifyWordsInfo::toJson() const
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

    return val;
}
bool PacifyWordsInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PacifyWordsInfo::getPacifyWordsId() const
{
    return pacifyWordsId_;
}

void PacifyWordsInfo::setPacifyWordsId(const std::string& value)
{
    pacifyWordsId_ = value;
    pacifyWordsIdIsSet_ = true;
}

bool PacifyWordsInfo::pacifyWordsIdIsSet() const
{
    return pacifyWordsIdIsSet_;
}

void PacifyWordsInfo::unsetpacifyWordsId()
{
    pacifyWordsIdIsSet_ = false;
}

std::string PacifyWordsInfo::getPacifyWords() const
{
    return pacifyWords_;
}

void PacifyWordsInfo::setPacifyWords(const std::string& value)
{
    pacifyWords_ = value;
    pacifyWordsIsSet_ = true;
}

bool PacifyWordsInfo::pacifyWordsIsSet() const
{
    return pacifyWordsIsSet_;
}

void PacifyWordsInfo::unsetpacifyWords()
{
    pacifyWordsIsSet_ = false;
}

LanguageEnum PacifyWordsInfo::getLanguage() const
{
    return language_;
}

void PacifyWordsInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PacifyWordsInfo::languageIsSet() const
{
    return languageIsSet_;
}

void PacifyWordsInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string PacifyWordsInfo::getRobotId() const
{
    return robotId_;
}

void PacifyWordsInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool PacifyWordsInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void PacifyWordsInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t PacifyWordsInfo::getPacifyWordsType() const
{
    return pacifyWordsType_;
}

void PacifyWordsInfo::setPacifyWordsType(int32_t value)
{
    pacifyWordsType_ = value;
    pacifyWordsTypeIsSet_ = true;
}

bool PacifyWordsInfo::pacifyWordsTypeIsSet() const
{
    return pacifyWordsTypeIsSet_;
}

void PacifyWordsInfo::unsetpacifyWordsType()
{
    pacifyWordsTypeIsSet_ = false;
}

std::string PacifyWordsInfo::getIntent() const
{
    return intent_;
}

void PacifyWordsInfo::setIntent(const std::string& value)
{
    intent_ = value;
    intentIsSet_ = true;
}

bool PacifyWordsInfo::intentIsSet() const
{
    return intentIsSet_;
}

void PacifyWordsInfo::unsetintent()
{
    intentIsSet_ = false;
}

std::string PacifyWordsInfo::getCreateTime() const
{
    return createTime_;
}

void PacifyWordsInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PacifyWordsInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PacifyWordsInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PacifyWordsInfo::getUpdateTime() const
{
    return updateTime_;
}

void PacifyWordsInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PacifyWordsInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PacifyWordsInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



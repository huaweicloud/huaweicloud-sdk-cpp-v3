

#include "huaweicloud/metastudio/v1/model/CreatePacifyWordsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePacifyWordsReq::CreatePacifyWordsReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    pacifyWordsType_ = 0;
    pacifyWordsTypeIsSet_ = false;
    intent_ = "";
    intentIsSet_ = false;
    pacifyWords_ = "";
    pacifyWordsIsSet_ = false;
    languageIsSet_ = false;
}

CreatePacifyWordsReq::~CreatePacifyWordsReq() = default;

void CreatePacifyWordsReq::validate()
{
}

web::json::value CreatePacifyWordsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(pacifyWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_type")] = ModelBase::toJson(pacifyWordsType_);
    }
    if(intentIsSet_) {
        val[utility::conversions::to_string_t("intent")] = ModelBase::toJson(intent_);
    }
    if(pacifyWordsIsSet_) {
        val[utility::conversions::to_string_t("pacify_words")] = ModelBase::toJson(pacifyWords_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CreatePacifyWordsReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreatePacifyWordsReq::getRobotId() const
{
    return robotId_;
}

void CreatePacifyWordsReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreatePacifyWordsReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreatePacifyWordsReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

int32_t CreatePacifyWordsReq::getPacifyWordsType() const
{
    return pacifyWordsType_;
}

void CreatePacifyWordsReq::setPacifyWordsType(int32_t value)
{
    pacifyWordsType_ = value;
    pacifyWordsTypeIsSet_ = true;
}

bool CreatePacifyWordsReq::pacifyWordsTypeIsSet() const
{
    return pacifyWordsTypeIsSet_;
}

void CreatePacifyWordsReq::unsetpacifyWordsType()
{
    pacifyWordsTypeIsSet_ = false;
}

std::string CreatePacifyWordsReq::getIntent() const
{
    return intent_;
}

void CreatePacifyWordsReq::setIntent(const std::string& value)
{
    intent_ = value;
    intentIsSet_ = true;
}

bool CreatePacifyWordsReq::intentIsSet() const
{
    return intentIsSet_;
}

void CreatePacifyWordsReq::unsetintent()
{
    intentIsSet_ = false;
}

std::string CreatePacifyWordsReq::getPacifyWords() const
{
    return pacifyWords_;
}

void CreatePacifyWordsReq::setPacifyWords(const std::string& value)
{
    pacifyWords_ = value;
    pacifyWordsIsSet_ = true;
}

bool CreatePacifyWordsReq::pacifyWordsIsSet() const
{
    return pacifyWordsIsSet_;
}

void CreatePacifyWordsReq::unsetpacifyWords()
{
    pacifyWordsIsSet_ = false;
}

LanguageEnum CreatePacifyWordsReq::getLanguage() const
{
    return language_;
}

void CreatePacifyWordsReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreatePacifyWordsReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreatePacifyWordsReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}



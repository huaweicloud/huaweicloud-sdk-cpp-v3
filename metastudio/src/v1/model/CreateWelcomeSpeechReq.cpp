

#include "huaweicloud/metastudio/v1/model/CreateWelcomeSpeechReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateWelcomeSpeechReq::CreateWelcomeSpeechReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    welcomeSpeech_ = "";
    welcomeSpeechIsSet_ = false;
    languageIsSet_ = false;
}

CreateWelcomeSpeechReq::~CreateWelcomeSpeechReq() = default;

void CreateWelcomeSpeechReq::validate()
{
}

web::json::value CreateWelcomeSpeechReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(welcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("welcome_speech")] = ModelBase::toJson(welcomeSpeech_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CreateWelcomeSpeechReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welcome_speech"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelcomeSpeech(refVal);
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


std::string CreateWelcomeSpeechReq::getRobotId() const
{
    return robotId_;
}

void CreateWelcomeSpeechReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateWelcomeSpeechReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateWelcomeSpeechReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateWelcomeSpeechReq::getWelcomeSpeech() const
{
    return welcomeSpeech_;
}

void CreateWelcomeSpeechReq::setWelcomeSpeech(const std::string& value)
{
    welcomeSpeech_ = value;
    welcomeSpeechIsSet_ = true;
}

bool CreateWelcomeSpeechReq::welcomeSpeechIsSet() const
{
    return welcomeSpeechIsSet_;
}

void CreateWelcomeSpeechReq::unsetwelcomeSpeech()
{
    welcomeSpeechIsSet_ = false;
}

LanguageEnum CreateWelcomeSpeechReq::getLanguage() const
{
    return language_;
}

void CreateWelcomeSpeechReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateWelcomeSpeechReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateWelcomeSpeechReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}



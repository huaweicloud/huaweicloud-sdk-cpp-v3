

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsSwitchReq::UpdatePacifyWordsSwitchReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    languageIsSet_ = false;
    enablePacifyWords_ = false;
    enablePacifyWordsIsSet_ = false;
}

UpdatePacifyWordsSwitchReq::~UpdatePacifyWordsSwitchReq() = default;

void UpdatePacifyWordsSwitchReq::validate()
{
}

web::json::value UpdatePacifyWordsSwitchReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(enablePacifyWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_pacify_words")] = ModelBase::toJson(enablePacifyWords_);
    }

    return val;
}
bool UpdatePacifyWordsSwitchReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable_pacify_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_pacify_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnablePacifyWords(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsSwitchReq::getRobotId() const
{
    return robotId_;
}

void UpdatePacifyWordsSwitchReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdatePacifyWordsSwitchReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdatePacifyWordsSwitchReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

LanguageEnum UpdatePacifyWordsSwitchReq::getLanguage() const
{
    return language_;
}

void UpdatePacifyWordsSwitchReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdatePacifyWordsSwitchReq::languageIsSet() const
{
    return languageIsSet_;
}

void UpdatePacifyWordsSwitchReq::unsetlanguage()
{
    languageIsSet_ = false;
}

bool UpdatePacifyWordsSwitchReq::isEnablePacifyWords() const
{
    return enablePacifyWords_;
}

void UpdatePacifyWordsSwitchReq::setEnablePacifyWords(bool value)
{
    enablePacifyWords_ = value;
    enablePacifyWordsIsSet_ = true;
}

bool UpdatePacifyWordsSwitchReq::enablePacifyWordsIsSet() const
{
    return enablePacifyWordsIsSet_;
}

void UpdatePacifyWordsSwitchReq::unsetenablePacifyWords()
{
    enablePacifyWordsIsSet_ = false;
}

}
}
}
}
}



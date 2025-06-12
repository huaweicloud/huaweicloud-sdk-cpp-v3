

#include "huaweicloud/metastudio/v1/model/CreateHotQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotQuestionReq::CreateHotQuestionReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    hotQuestion_ = "";
    hotQuestionIsSet_ = false;
    languageIsSet_ = false;
}

CreateHotQuestionReq::~CreateHotQuestionReq() = default;

void CreateHotQuestionReq::validate()
{
}

web::json::value CreateHotQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(hotQuestionIsSet_) {
        val[utility::conversions::to_string_t("hot_question")] = ModelBase::toJson(hotQuestion_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CreateHotQuestionReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hot_question"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_question"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotQuestion(refVal);
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


std::string CreateHotQuestionReq::getRobotId() const
{
    return robotId_;
}

void CreateHotQuestionReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateHotQuestionReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateHotQuestionReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateHotQuestionReq::getHotQuestion() const
{
    return hotQuestion_;
}

void CreateHotQuestionReq::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool CreateHotQuestionReq::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void CreateHotQuestionReq::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

LanguageEnum CreateHotQuestionReq::getLanguage() const
{
    return language_;
}

void CreateHotQuestionReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateHotQuestionReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateHotQuestionReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}



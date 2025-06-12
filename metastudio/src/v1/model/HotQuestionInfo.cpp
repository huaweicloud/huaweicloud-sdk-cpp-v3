

#include "huaweicloud/metastudio/v1/model/HotQuestionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HotQuestionInfo::HotQuestionInfo()
{
    hotQuestionId_ = "";
    hotQuestionIdIsSet_ = false;
    hotQuestion_ = "";
    hotQuestionIsSet_ = false;
    languageIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

HotQuestionInfo::~HotQuestionInfo() = default;

void HotQuestionInfo::validate()
{
}

web::json::value HotQuestionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotQuestionIdIsSet_) {
        val[utility::conversions::to_string_t("hot_question_id")] = ModelBase::toJson(hotQuestionId_);
    }
    if(hotQuestionIsSet_) {
        val[utility::conversions::to_string_t("hot_question")] = ModelBase::toJson(hotQuestion_);
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
bool HotQuestionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_question_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_question_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotQuestionId(refVal);
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


std::string HotQuestionInfo::getHotQuestionId() const
{
    return hotQuestionId_;
}

void HotQuestionInfo::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool HotQuestionInfo::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void HotQuestionInfo::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

std::string HotQuestionInfo::getHotQuestion() const
{
    return hotQuestion_;
}

void HotQuestionInfo::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool HotQuestionInfo::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void HotQuestionInfo::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

LanguageEnum HotQuestionInfo::getLanguage() const
{
    return language_;
}

void HotQuestionInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool HotQuestionInfo::languageIsSet() const
{
    return languageIsSet_;
}

void HotQuestionInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string HotQuestionInfo::getRobotId() const
{
    return robotId_;
}

void HotQuestionInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool HotQuestionInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void HotQuestionInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string HotQuestionInfo::getCreateTime() const
{
    return createTime_;
}

void HotQuestionInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool HotQuestionInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void HotQuestionInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string HotQuestionInfo::getUpdateTime() const
{
    return updateTime_;
}

void HotQuestionInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool HotQuestionInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void HotQuestionInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



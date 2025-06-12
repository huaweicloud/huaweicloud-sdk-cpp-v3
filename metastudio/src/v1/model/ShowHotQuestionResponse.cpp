

#include "huaweicloud/metastudio/v1/model/ShowHotQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotQuestionResponse::ShowHotQuestionResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowHotQuestionResponse::~ShowHotQuestionResponse() = default;

void ShowHotQuestionResponse::validate()
{
}

web::json::value ShowHotQuestionResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowHotQuestionResponse::fromJson(const web::json::value& val)
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


std::string ShowHotQuestionResponse::getHotQuestionId() const
{
    return hotQuestionId_;
}

void ShowHotQuestionResponse::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool ShowHotQuestionResponse::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void ShowHotQuestionResponse::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

std::string ShowHotQuestionResponse::getHotQuestion() const
{
    return hotQuestion_;
}

void ShowHotQuestionResponse::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool ShowHotQuestionResponse::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void ShowHotQuestionResponse::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

LanguageEnum ShowHotQuestionResponse::getLanguage() const
{
    return language_;
}

void ShowHotQuestionResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowHotQuestionResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowHotQuestionResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowHotQuestionResponse::getRobotId() const
{
    return robotId_;
}

void ShowHotQuestionResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowHotQuestionResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowHotQuestionResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowHotQuestionResponse::getCreateTime() const
{
    return createTime_;
}

void ShowHotQuestionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowHotQuestionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowHotQuestionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowHotQuestionResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowHotQuestionResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowHotQuestionResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowHotQuestionResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowHotQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowHotQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowHotQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowHotQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



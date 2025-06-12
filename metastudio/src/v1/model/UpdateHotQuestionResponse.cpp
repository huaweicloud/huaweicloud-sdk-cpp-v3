

#include "huaweicloud/metastudio/v1/model/UpdateHotQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotQuestionResponse::UpdateHotQuestionResponse()
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

UpdateHotQuestionResponse::~UpdateHotQuestionResponse() = default;

void UpdateHotQuestionResponse::validate()
{
}

web::json::value UpdateHotQuestionResponse::toJson() const
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
bool UpdateHotQuestionResponse::fromJson(const web::json::value& val)
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


std::string UpdateHotQuestionResponse::getHotQuestionId() const
{
    return hotQuestionId_;
}

void UpdateHotQuestionResponse::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool UpdateHotQuestionResponse::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void UpdateHotQuestionResponse::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

std::string UpdateHotQuestionResponse::getHotQuestion() const
{
    return hotQuestion_;
}

void UpdateHotQuestionResponse::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool UpdateHotQuestionResponse::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void UpdateHotQuestionResponse::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

LanguageEnum UpdateHotQuestionResponse::getLanguage() const
{
    return language_;
}

void UpdateHotQuestionResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateHotQuestionResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateHotQuestionResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateHotQuestionResponse::getRobotId() const
{
    return robotId_;
}

void UpdateHotQuestionResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateHotQuestionResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateHotQuestionResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string UpdateHotQuestionResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateHotQuestionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateHotQuestionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateHotQuestionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateHotQuestionResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateHotQuestionResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateHotQuestionResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateHotQuestionResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateHotQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateHotQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateHotQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateHotQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



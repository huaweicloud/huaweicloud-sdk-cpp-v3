

#include "huaweicloud/metastudio/v1/model/CreateHotQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotQuestionResponse::CreateHotQuestionResponse()
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

CreateHotQuestionResponse::~CreateHotQuestionResponse() = default;

void CreateHotQuestionResponse::validate()
{
}

web::json::value CreateHotQuestionResponse::toJson() const
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
bool CreateHotQuestionResponse::fromJson(const web::json::value& val)
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


std::string CreateHotQuestionResponse::getHotQuestionId() const
{
    return hotQuestionId_;
}

void CreateHotQuestionResponse::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool CreateHotQuestionResponse::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void CreateHotQuestionResponse::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

std::string CreateHotQuestionResponse::getHotQuestion() const
{
    return hotQuestion_;
}

void CreateHotQuestionResponse::setHotQuestion(const std::string& value)
{
    hotQuestion_ = value;
    hotQuestionIsSet_ = true;
}

bool CreateHotQuestionResponse::hotQuestionIsSet() const
{
    return hotQuestionIsSet_;
}

void CreateHotQuestionResponse::unsethotQuestion()
{
    hotQuestionIsSet_ = false;
}

LanguageEnum CreateHotQuestionResponse::getLanguage() const
{
    return language_;
}

void CreateHotQuestionResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateHotQuestionResponse::languageIsSet() const
{
    return languageIsSet_;
}

void CreateHotQuestionResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CreateHotQuestionResponse::getRobotId() const
{
    return robotId_;
}

void CreateHotQuestionResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateHotQuestionResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateHotQuestionResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateHotQuestionResponse::getCreateTime() const
{
    return createTime_;
}

void CreateHotQuestionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateHotQuestionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateHotQuestionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateHotQuestionResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateHotQuestionResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateHotQuestionResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateHotQuestionResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateHotQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateHotQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateHotQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateHotQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



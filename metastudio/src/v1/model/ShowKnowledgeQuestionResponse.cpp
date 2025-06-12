

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeQuestionResponse::ShowKnowledgeQuestionResponse()
{
    questionId_ = "";
    questionIdIsSet_ = false;
    question_ = "";
    questionIsSet_ = false;
    intentId_ = "";
    intentIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowKnowledgeQuestionResponse::~ShowKnowledgeQuestionResponse() = default;

void ShowKnowledgeQuestionResponse::validate()
{
}

web::json::value ShowKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIdIsSet_) {
        val[utility::conversions::to_string_t("question_id")] = ModelBase::toJson(questionId_);
    }
    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
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
bool ShowKnowledgeQuestionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("question"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
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


std::string ShowKnowledgeQuestionResponse::getQuestionId() const
{
    return questionId_;
}

void ShowKnowledgeQuestionResponse::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetquestionId()
{
    questionIdIsSet_ = false;
}

std::string ShowKnowledgeQuestionResponse::getQuestion() const
{
    return question_;
}

void ShowKnowledgeQuestionResponse::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::questionIsSet() const
{
    return questionIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetquestion()
{
    questionIsSet_ = false;
}

std::string ShowKnowledgeQuestionResponse::getIntentId() const
{
    return intentId_;
}

void ShowKnowledgeQuestionResponse::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string ShowKnowledgeQuestionResponse::getCreateTime() const
{
    return createTime_;
}

void ShowKnowledgeQuestionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowKnowledgeQuestionResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowKnowledgeQuestionResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



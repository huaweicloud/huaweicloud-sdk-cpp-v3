

#include "huaweicloud/metastudio/v1/model/ShowQuestionAnswerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowQuestionAnswerResponse::ShowQuestionAnswerResponse()
{
    questionAnswerId_ = "";
    questionAnswerIdIsSet_ = false;
    question_ = "";
    questionIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    similarQuestions_ = "";
    similarQuestionsIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowQuestionAnswerResponse::~ShowQuestionAnswerResponse() = default;

void ShowQuestionAnswerResponse::validate()
{
}

web::json::value ShowQuestionAnswerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionAnswerIdIsSet_) {
        val[utility::conversions::to_string_t("question_answer_id")] = ModelBase::toJson(questionAnswerId_);
    }
    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }
    if(similarQuestionsIsSet_) {
        val[utility::conversions::to_string_t("similar_questions")] = ModelBase::toJson(similarQuestions_);
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
bool ShowQuestionAnswerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_answer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_answer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionAnswerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("answer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("answer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnswer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("similar_questions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("similar_questions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimilarQuestions(refVal);
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


std::string ShowQuestionAnswerResponse::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void ShowQuestionAnswerResponse::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool ShowQuestionAnswerResponse::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void ShowQuestionAnswerResponse::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getQuestion() const
{
    return question_;
}

void ShowQuestionAnswerResponse::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool ShowQuestionAnswerResponse::questionIsSet() const
{
    return questionIsSet_;
}

void ShowQuestionAnswerResponse::unsetquestion()
{
    questionIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getAnswer() const
{
    return answer_;
}

void ShowQuestionAnswerResponse::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool ShowQuestionAnswerResponse::answerIsSet() const
{
    return answerIsSet_;
}

void ShowQuestionAnswerResponse::unsetanswer()
{
    answerIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getSimilarQuestions() const
{
    return similarQuestions_;
}

void ShowQuestionAnswerResponse::setSimilarQuestions(const std::string& value)
{
    similarQuestions_ = value;
    similarQuestionsIsSet_ = true;
}

bool ShowQuestionAnswerResponse::similarQuestionsIsSet() const
{
    return similarQuestionsIsSet_;
}

void ShowQuestionAnswerResponse::unsetsimilarQuestions()
{
    similarQuestionsIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getCreateTime() const
{
    return createTime_;
}

void ShowQuestionAnswerResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowQuestionAnswerResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowQuestionAnswerResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowQuestionAnswerResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowQuestionAnswerResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowQuestionAnswerResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowQuestionAnswerResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowQuestionAnswerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowQuestionAnswerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowQuestionAnswerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



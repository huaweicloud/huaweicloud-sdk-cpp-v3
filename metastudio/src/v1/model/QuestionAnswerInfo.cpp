

#include "huaweicloud/metastudio/v1/model/QuestionAnswerInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




QuestionAnswerInfo::QuestionAnswerInfo()
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
}

QuestionAnswerInfo::~QuestionAnswerInfo() = default;

void QuestionAnswerInfo::validate()
{
}

web::json::value QuestionAnswerInfo::toJson() const
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

    return val;
}
bool QuestionAnswerInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string QuestionAnswerInfo::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void QuestionAnswerInfo::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool QuestionAnswerInfo::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void QuestionAnswerInfo::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

std::string QuestionAnswerInfo::getQuestion() const
{
    return question_;
}

void QuestionAnswerInfo::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool QuestionAnswerInfo::questionIsSet() const
{
    return questionIsSet_;
}

void QuestionAnswerInfo::unsetquestion()
{
    questionIsSet_ = false;
}

std::string QuestionAnswerInfo::getAnswer() const
{
    return answer_;
}

void QuestionAnswerInfo::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool QuestionAnswerInfo::answerIsSet() const
{
    return answerIsSet_;
}

void QuestionAnswerInfo::unsetanswer()
{
    answerIsSet_ = false;
}

std::string QuestionAnswerInfo::getSimilarQuestions() const
{
    return similarQuestions_;
}

void QuestionAnswerInfo::setSimilarQuestions(const std::string& value)
{
    similarQuestions_ = value;
    similarQuestionsIsSet_ = true;
}

bool QuestionAnswerInfo::similarQuestionsIsSet() const
{
    return similarQuestionsIsSet_;
}

void QuestionAnswerInfo::unsetsimilarQuestions()
{
    similarQuestionsIsSet_ = false;
}

std::string QuestionAnswerInfo::getCreateTime() const
{
    return createTime_;
}

void QuestionAnswerInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QuestionAnswerInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QuestionAnswerInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QuestionAnswerInfo::getUpdateTime() const
{
    return updateTime_;
}

void QuestionAnswerInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool QuestionAnswerInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void QuestionAnswerInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}



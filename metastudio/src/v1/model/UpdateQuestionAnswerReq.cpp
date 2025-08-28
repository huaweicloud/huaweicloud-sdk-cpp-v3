

#include "huaweicloud/metastudio/v1/model/UpdateQuestionAnswerReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateQuestionAnswerReq::UpdateQuestionAnswerReq()
{
    question_ = "";
    questionIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    similarQuestions_ = "";
    similarQuestionsIsSet_ = false;
}

UpdateQuestionAnswerReq::~UpdateQuestionAnswerReq() = default;

void UpdateQuestionAnswerReq::validate()
{
}

web::json::value UpdateQuestionAnswerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }
    if(similarQuestionsIsSet_) {
        val[utility::conversions::to_string_t("similar_questions")] = ModelBase::toJson(similarQuestions_);
    }

    return val;
}
bool UpdateQuestionAnswerReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateQuestionAnswerReq::getQuestion() const
{
    return question_;
}

void UpdateQuestionAnswerReq::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool UpdateQuestionAnswerReq::questionIsSet() const
{
    return questionIsSet_;
}

void UpdateQuestionAnswerReq::unsetquestion()
{
    questionIsSet_ = false;
}

std::string UpdateQuestionAnswerReq::getAnswer() const
{
    return answer_;
}

void UpdateQuestionAnswerReq::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool UpdateQuestionAnswerReq::answerIsSet() const
{
    return answerIsSet_;
}

void UpdateQuestionAnswerReq::unsetanswer()
{
    answerIsSet_ = false;
}

std::string UpdateQuestionAnswerReq::getSimilarQuestions() const
{
    return similarQuestions_;
}

void UpdateQuestionAnswerReq::setSimilarQuestions(const std::string& value)
{
    similarQuestions_ = value;
    similarQuestionsIsSet_ = true;
}

bool UpdateQuestionAnswerReq::similarQuestionsIsSet() const
{
    return similarQuestionsIsSet_;
}

void UpdateQuestionAnswerReq::unsetsimilarQuestions()
{
    similarQuestionsIsSet_ = false;
}

}
}
}
}
}



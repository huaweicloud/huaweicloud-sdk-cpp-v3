

#include "huaweicloud/metastudio/v1/model/CreateQuestionAnswerReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateQuestionAnswerReq::CreateQuestionAnswerReq()
{
    question_ = "";
    questionIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    similarQuestions_ = "";
    similarQuestionsIsSet_ = false;
}

CreateQuestionAnswerReq::~CreateQuestionAnswerReq() = default;

void CreateQuestionAnswerReq::validate()
{
}

web::json::value CreateQuestionAnswerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }
    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(similarQuestionsIsSet_) {
        val[utility::conversions::to_string_t("similar_questions")] = ModelBase::toJson(similarQuestions_);
    }

    return val;
}
bool CreateQuestionAnswerReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
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


std::string CreateQuestionAnswerReq::getQuestion() const
{
    return question_;
}

void CreateQuestionAnswerReq::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool CreateQuestionAnswerReq::questionIsSet() const
{
    return questionIsSet_;
}

void CreateQuestionAnswerReq::unsetquestion()
{
    questionIsSet_ = false;
}

std::string CreateQuestionAnswerReq::getAnswer() const
{
    return answer_;
}

void CreateQuestionAnswerReq::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool CreateQuestionAnswerReq::answerIsSet() const
{
    return answerIsSet_;
}

void CreateQuestionAnswerReq::unsetanswer()
{
    answerIsSet_ = false;
}

std::string CreateQuestionAnswerReq::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void CreateQuestionAnswerReq::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool CreateQuestionAnswerReq::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void CreateQuestionAnswerReq::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string CreateQuestionAnswerReq::getSimilarQuestions() const
{
    return similarQuestions_;
}

void CreateQuestionAnswerReq::setSimilarQuestions(const std::string& value)
{
    similarQuestions_ = value;
    similarQuestionsIsSet_ = true;
}

bool CreateQuestionAnswerReq::similarQuestionsIsSet() const
{
    return similarQuestionsIsSet_;
}

void CreateQuestionAnswerReq::unsetsimilarQuestions()
{
    similarQuestionsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/KnowledgeQuestionUpdateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeQuestionUpdateInfo::KnowledgeQuestionUpdateInfo()
{
    questionId_ = "";
    questionIdIsSet_ = false;
    question_ = "";
    questionIsSet_ = false;
}

KnowledgeQuestionUpdateInfo::~KnowledgeQuestionUpdateInfo() = default;

void KnowledgeQuestionUpdateInfo::validate()
{
}

web::json::value KnowledgeQuestionUpdateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIdIsSet_) {
        val[utility::conversions::to_string_t("question_id")] = ModelBase::toJson(questionId_);
    }
    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }

    return val;
}
bool KnowledgeQuestionUpdateInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string KnowledgeQuestionUpdateInfo::getQuestionId() const
{
    return questionId_;
}

void KnowledgeQuestionUpdateInfo::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool KnowledgeQuestionUpdateInfo::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void KnowledgeQuestionUpdateInfo::unsetquestionId()
{
    questionIdIsSet_ = false;
}

std::string KnowledgeQuestionUpdateInfo::getQuestion() const
{
    return question_;
}

void KnowledgeQuestionUpdateInfo::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool KnowledgeQuestionUpdateInfo::questionIsSet() const
{
    return questionIsSet_;
}

void KnowledgeQuestionUpdateInfo::unsetquestion()
{
    questionIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/KnowledgeQuestionCreateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeQuestionCreateInfo::KnowledgeQuestionCreateInfo()
{
    question_ = "";
    questionIsSet_ = false;
}

KnowledgeQuestionCreateInfo::~KnowledgeQuestionCreateInfo() = default;

void KnowledgeQuestionCreateInfo::validate()
{
}

web::json::value KnowledgeQuestionCreateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }

    return val;
}
bool KnowledgeQuestionCreateInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string KnowledgeQuestionCreateInfo::getQuestion() const
{
    return question_;
}

void KnowledgeQuestionCreateInfo::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool KnowledgeQuestionCreateInfo::questionIsSet() const
{
    return questionIsSet_;
}

void KnowledgeQuestionCreateInfo::unsetquestion()
{
    questionIsSet_ = false;
}

}
}
}
}
}



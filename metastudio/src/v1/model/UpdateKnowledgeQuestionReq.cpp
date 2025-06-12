

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeQuestionReq::UpdateKnowledgeQuestionReq()
{
    question_ = "";
    questionIsSet_ = false;
}

UpdateKnowledgeQuestionReq::~UpdateKnowledgeQuestionReq() = default;

void UpdateKnowledgeQuestionReq::validate()
{
}

web::json::value UpdateKnowledgeQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }

    return val;
}
bool UpdateKnowledgeQuestionReq::fromJson(const web::json::value& val)
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


std::string UpdateKnowledgeQuestionReq::getQuestion() const
{
    return question_;
}

void UpdateKnowledgeQuestionReq::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool UpdateKnowledgeQuestionReq::questionIsSet() const
{
    return questionIsSet_;
}

void UpdateKnowledgeQuestionReq::unsetquestion()
{
    questionIsSet_ = false;
}

}
}
}
}
}



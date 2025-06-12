

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeQuestionReq::CreateKnowledgeQuestionReq()
{
    question_ = "";
    questionIsSet_ = false;
    intentId_ = "";
    intentIdIsSet_ = false;
}

CreateKnowledgeQuestionReq::~CreateKnowledgeQuestionReq() = default;

void CreateKnowledgeQuestionReq::validate()
{
}

web::json::value CreateKnowledgeQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }

    return val;
}
bool CreateKnowledgeQuestionReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeQuestionReq::getQuestion() const
{
    return question_;
}

void CreateKnowledgeQuestionReq::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool CreateKnowledgeQuestionReq::questionIsSet() const
{
    return questionIsSet_;
}

void CreateKnowledgeQuestionReq::unsetquestion()
{
    questionIsSet_ = false;
}

std::string CreateKnowledgeQuestionReq::getIntentId() const
{
    return intentId_;
}

void CreateKnowledgeQuestionReq::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool CreateKnowledgeQuestionReq::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void CreateKnowledgeQuestionReq::unsetintentId()
{
    intentIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateBatchKnowledgeQuestionReq::CreateBatchKnowledgeQuestionReq()
{
    intentId_ = "";
    intentIdIsSet_ = false;
    questionListIsSet_ = false;
}

CreateBatchKnowledgeQuestionReq::~CreateBatchKnowledgeQuestionReq() = default;

void CreateBatchKnowledgeQuestionReq::validate()
{
}

web::json::value CreateBatchKnowledgeQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(questionListIsSet_) {
        val[utility::conversions::to_string_t("question_list")] = ModelBase::toJson(questionList_);
    }

    return val;
}
bool CreateBatchKnowledgeQuestionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("question_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_list"));
        if(!fieldValue.is_null())
        {
            std::vector<KnowledgeQuestionCreateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionList(refVal);
        }
    }
    return ok;
}


std::string CreateBatchKnowledgeQuestionReq::getIntentId() const
{
    return intentId_;
}

void CreateBatchKnowledgeQuestionReq::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionReq::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void CreateBatchKnowledgeQuestionReq::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::vector<KnowledgeQuestionCreateInfo>& CreateBatchKnowledgeQuestionReq::getQuestionList()
{
    return questionList_;
}

void CreateBatchKnowledgeQuestionReq::setQuestionList(const std::vector<KnowledgeQuestionCreateInfo>& value)
{
    questionList_ = value;
    questionListIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionReq::questionListIsSet() const
{
    return questionListIsSet_;
}

void CreateBatchKnowledgeQuestionReq::unsetquestionList()
{
    questionListIsSet_ = false;
}

}
}
}
}
}



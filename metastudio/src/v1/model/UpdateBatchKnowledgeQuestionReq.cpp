

#include "huaweicloud/metastudio/v1/model/UpdateBatchKnowledgeQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateBatchKnowledgeQuestionReq::UpdateBatchKnowledgeQuestionReq()
{
    questionListIsSet_ = false;
}

UpdateBatchKnowledgeQuestionReq::~UpdateBatchKnowledgeQuestionReq() = default;

void UpdateBatchKnowledgeQuestionReq::validate()
{
}

web::json::value UpdateBatchKnowledgeQuestionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionListIsSet_) {
        val[utility::conversions::to_string_t("question_list")] = ModelBase::toJson(questionList_);
    }

    return val;
}
bool UpdateBatchKnowledgeQuestionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_list"));
        if(!fieldValue.is_null())
        {
            std::vector<KnowledgeQuestionUpdateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionList(refVal);
        }
    }
    return ok;
}


std::vector<KnowledgeQuestionUpdateInfo>& UpdateBatchKnowledgeQuestionReq::getQuestionList()
{
    return questionList_;
}

void UpdateBatchKnowledgeQuestionReq::setQuestionList(const std::vector<KnowledgeQuestionUpdateInfo>& value)
{
    questionList_ = value;
    questionListIsSet_ = true;
}

bool UpdateBatchKnowledgeQuestionReq::questionListIsSet() const
{
    return questionListIsSet_;
}

void UpdateBatchKnowledgeQuestionReq::unsetquestionList()
{
    questionListIsSet_ = false;
}

}
}
}
}
}



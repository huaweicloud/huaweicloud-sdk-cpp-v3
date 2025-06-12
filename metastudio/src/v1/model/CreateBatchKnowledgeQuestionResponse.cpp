

#include "huaweicloud/metastudio/v1/model/CreateBatchKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateBatchKnowledgeQuestionResponse::CreateBatchKnowledgeQuestionResponse()
{
    questionListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateBatchKnowledgeQuestionResponse::~CreateBatchKnowledgeQuestionResponse() = default;

void CreateBatchKnowledgeQuestionResponse::validate()
{
}

web::json::value CreateBatchKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionListIsSet_) {
        val[utility::conversions::to_string_t("question_list")] = ModelBase::toJson(questionList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateBatchKnowledgeQuestionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_list"));
        if(!fieldValue.is_null())
        {
            std::vector<KnowledgeQuestionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionList(refVal);
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


std::vector<KnowledgeQuestionInfo>& CreateBatchKnowledgeQuestionResponse::getQuestionList()
{
    return questionList_;
}

void CreateBatchKnowledgeQuestionResponse::setQuestionList(const std::vector<KnowledgeQuestionInfo>& value)
{
    questionList_ = value;
    questionListIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionResponse::questionListIsSet() const
{
    return questionListIsSet_;
}

void CreateBatchKnowledgeQuestionResponse::unsetquestionList()
{
    questionListIsSet_ = false;
}

std::string CreateBatchKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateBatchKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateBatchKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateBatchKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



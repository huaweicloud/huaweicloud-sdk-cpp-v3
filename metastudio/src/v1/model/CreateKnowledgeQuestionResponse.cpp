

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeQuestionResponse::CreateKnowledgeQuestionResponse()
{
    questionId_ = "";
    questionIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateKnowledgeQuestionResponse::~CreateKnowledgeQuestionResponse() = default;

void CreateKnowledgeQuestionResponse::validate()
{
}

web::json::value CreateKnowledgeQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIdIsSet_) {
        val[utility::conversions::to_string_t("question_id")] = ModelBase::toJson(questionId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateKnowledgeQuestionResponse::fromJson(const web::json::value& val)
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


std::string CreateKnowledgeQuestionResponse::getQuestionId() const
{
    return questionId_;
}

void CreateKnowledgeQuestionResponse::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool CreateKnowledgeQuestionResponse::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void CreateKnowledgeQuestionResponse::unsetquestionId()
{
    questionIdIsSet_ = false;
}

std::string CreateKnowledgeQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateKnowledgeQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateKnowledgeQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateKnowledgeQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



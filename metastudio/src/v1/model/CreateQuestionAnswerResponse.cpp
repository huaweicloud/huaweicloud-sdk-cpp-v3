

#include "huaweicloud/metastudio/v1/model/CreateQuestionAnswerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateQuestionAnswerResponse::CreateQuestionAnswerResponse()
{
    questionAnswerId_ = "";
    questionAnswerIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateQuestionAnswerResponse::~CreateQuestionAnswerResponse() = default;

void CreateQuestionAnswerResponse::validate()
{
}

web::json::value CreateQuestionAnswerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionAnswerIdIsSet_) {
        val[utility::conversions::to_string_t("question_answer_id")] = ModelBase::toJson(questionAnswerId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateQuestionAnswerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_answer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_answer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionAnswerId(refVal);
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


std::string CreateQuestionAnswerResponse::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void CreateQuestionAnswerResponse::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool CreateQuestionAnswerResponse::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void CreateQuestionAnswerResponse::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

std::string CreateQuestionAnswerResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateQuestionAnswerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateQuestionAnswerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateQuestionAnswerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/CreateIntentAndQuestionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateIntentAndQuestionResponse::CreateIntentAndQuestionResponse()
{
    intentId_ = "";
    intentIdIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
    questionListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateIntentAndQuestionResponse::~CreateIntentAndQuestionResponse() = default;

void CreateIntentAndQuestionResponse::validate()
{
}

web::json::value CreateIntentAndQuestionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }
    if(questionListIsSet_) {
        val[utility::conversions::to_string_t("question_list")] = ModelBase::toJson(questionList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateIntentAndQuestionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("identify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentify(refVal);
        }
    }
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


std::string CreateIntentAndQuestionResponse::getIntentId() const
{
    return intentId_;
}

void CreateIntentAndQuestionResponse::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool CreateIntentAndQuestionResponse::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void CreateIntentAndQuestionResponse::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string CreateIntentAndQuestionResponse::getIdentify() const
{
    return identify_;
}

void CreateIntentAndQuestionResponse::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool CreateIntentAndQuestionResponse::identifyIsSet() const
{
    return identifyIsSet_;
}

void CreateIntentAndQuestionResponse::unsetidentify()
{
    identifyIsSet_ = false;
}

std::vector<KnowledgeQuestionInfo>& CreateIntentAndQuestionResponse::getQuestionList()
{
    return questionList_;
}

void CreateIntentAndQuestionResponse::setQuestionList(const std::vector<KnowledgeQuestionInfo>& value)
{
    questionList_ = value;
    questionListIsSet_ = true;
}

bool CreateIntentAndQuestionResponse::questionListIsSet() const
{
    return questionListIsSet_;
}

void CreateIntentAndQuestionResponse::unsetquestionList()
{
    questionListIsSet_ = false;
}

std::string CreateIntentAndQuestionResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateIntentAndQuestionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateIntentAndQuestionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateIntentAndQuestionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/CreateKnowledgeIntentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeIntentResponse::CreateKnowledgeIntentResponse()
{
    intentId_ = "";
    intentIdIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateKnowledgeIntentResponse::~CreateKnowledgeIntentResponse() = default;

void CreateKnowledgeIntentResponse::validate()
{
}

web::json::value CreateKnowledgeIntentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateKnowledgeIntentResponse::fromJson(const web::json::value& val)
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


std::string CreateKnowledgeIntentResponse::getIntentId() const
{
    return intentId_;
}

void CreateKnowledgeIntentResponse::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool CreateKnowledgeIntentResponse::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void CreateKnowledgeIntentResponse::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string CreateKnowledgeIntentResponse::getIdentify() const
{
    return identify_;
}

void CreateKnowledgeIntentResponse::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool CreateKnowledgeIntentResponse::identifyIsSet() const
{
    return identifyIsSet_;
}

void CreateKnowledgeIntentResponse::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string CreateKnowledgeIntentResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateKnowledgeIntentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateKnowledgeIntentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateKnowledgeIntentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



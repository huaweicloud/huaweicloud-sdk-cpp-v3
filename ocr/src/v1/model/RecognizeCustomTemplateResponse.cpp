

#include "huaweicloud/ocr/v1/model/RecognizeCustomTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeCustomTemplateResponse::RecognizeCustomTemplateResponse()
{
    resultIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeCustomTemplateResponse::~RecognizeCustomTemplateResponse() = default;

void RecognizeCustomTemplateResponse::validate()
{
}

web::json::value RecognizeCustomTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RecognizeCustomTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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


Object RecognizeCustomTemplateResponse::getResult() const
{
    return result_;
}

void RecognizeCustomTemplateResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeCustomTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeCustomTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeCustomTemplateResponse::getTemplateId() const
{
    return templateId_;
}

void RecognizeCustomTemplateResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool RecognizeCustomTemplateResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void RecognizeCustomTemplateResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string RecognizeCustomTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeCustomTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeCustomTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeCustomTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/meeting/v1/model/BatchDeleteProgramsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchDeleteProgramsRequest::BatchDeleteProgramsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteProgramsRequest::~BatchDeleteProgramsRequest() = default;

void BatchDeleteProgramsRequest::validate()
{
}

web::json::value BatchDeleteProgramsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteProgramsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteProgramsRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeleteProgramsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeleteProgramsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeleteProgramsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchDeleteProgramsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchDeleteProgramsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchDeleteProgramsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchDeleteProgramsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::vector<std::string>& BatchDeleteProgramsRequest::getBody()
{
    return body_;
}

void BatchDeleteProgramsRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteProgramsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteProgramsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/meeting/v1/model/AddProgramRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddProgramRequest::AddProgramRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

AddProgramRequest::~AddProgramRequest() = default;

void AddProgramRequest::validate()
{
}

web::json::value AddProgramRequest::toJson() const
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
bool AddProgramRequest::fromJson(const web::json::value& val)
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
            CreateProgramRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddProgramRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddProgramRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddProgramRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddProgramRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddProgramRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddProgramRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddProgramRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddProgramRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

CreateProgramRequestDTO AddProgramRequest::getBody() const
{
    return body_;
}

void AddProgramRequest::setBody(const CreateProgramRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddProgramRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddProgramRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



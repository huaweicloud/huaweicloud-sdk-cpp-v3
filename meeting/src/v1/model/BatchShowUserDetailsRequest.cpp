

#include "huaweicloud/meeting/v1/model/BatchShowUserDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchShowUserDetailsRequest::BatchShowUserDetailsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    idType_ = "";
    idTypeIsSet_ = false;
    bodyIsSet_ = false;
}

BatchShowUserDetailsRequest::~BatchShowUserDetailsRequest() = default;

void BatchShowUserDetailsRequest::validate()
{
}

web::json::value BatchShowUserDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(idTypeIsSet_) {
        val[utility::conversions::to_string_t("idType")] = ModelBase::toJson(idType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchShowUserDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("idType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowUserRequestDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchShowUserDetailsRequest::getXRequestId() const
{
    return xRequestId_;
}

void BatchShowUserDetailsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchShowUserDetailsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchShowUserDetailsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string BatchShowUserDetailsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void BatchShowUserDetailsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool BatchShowUserDetailsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void BatchShowUserDetailsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string BatchShowUserDetailsRequest::getIdType() const
{
    return idType_;
}

void BatchShowUserDetailsRequest::setIdType(const std::string& value)
{
    idType_ = value;
    idTypeIsSet_ = true;
}

bool BatchShowUserDetailsRequest::idTypeIsSet() const
{
    return idTypeIsSet_;
}

void BatchShowUserDetailsRequest::unsetidType()
{
    idTypeIsSet_ = false;
}

std::vector<ShowUserRequestDTO>& BatchShowUserDetailsRequest::getBody()
{
    return body_;
}

void BatchShowUserDetailsRequest::setBody(const std::vector<ShowUserRequestDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowUserDetailsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowUserDetailsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



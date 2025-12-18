

#include "huaweicloud/meeting/v1/model/DeleteResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteResourceRequest::DeleteResourceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteResourceRequest::~DeleteResourceRequest() = default;

void DeleteResourceRequest::validate()
{
}

web::json::value DeleteResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corp_id")] = ModelBase::toJson(corpId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("corp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
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


std::string DeleteResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DeleteResourceRequest::getCorpId() const
{
    return corpId_;
}

void DeleteResourceRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool DeleteResourceRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void DeleteResourceRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::vector<std::string>& DeleteResourceRequest::getBody()
{
    return body_;
}

void DeleteResourceRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



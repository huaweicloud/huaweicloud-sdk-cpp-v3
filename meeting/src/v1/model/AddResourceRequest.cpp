

#include "huaweicloud/meeting/v1/model/AddResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddResourceRequest::AddResourceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddResourceRequest::~AddResourceRequest() = default;

void AddResourceRequest::validate()
{
}

web::json::value AddResourceRequest::toJson() const
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
bool AddResourceRequest::fromJson(const web::json::value& val)
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
            std::vector<ResourceDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void AddResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AddResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AddResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string AddResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void AddResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool AddResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void AddResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string AddResourceRequest::getCorpId() const
{
    return corpId_;
}

void AddResourceRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool AddResourceRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void AddResourceRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::vector<ResourceDTO>& AddResourceRequest::getBody()
{
    return body_;
}

void AddResourceRequest::setBody(const std::vector<ResourceDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



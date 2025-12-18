

#include "huaweicloud/meeting/v1/model/UpdateResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateResourceRequest::UpdateResourceRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateResourceRequest::~UpdateResourceRequest() = default;

void UpdateResourceRequest::validate()
{
}

web::json::value UpdateResourceRequest::toJson() const
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
bool UpdateResourceRequest::fromJson(const web::json::value& val)
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
            std::vector<ModResourceDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void UpdateResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool UpdateResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void UpdateResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string UpdateResourceRequest::getCorpId() const
{
    return corpId_;
}

void UpdateResourceRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool UpdateResourceRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void UpdateResourceRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::vector<ModResourceDTO>& UpdateResourceRequest::getBody()
{
    return body_;
}

void UpdateResourceRequest::setBody(const std::vector<ModResourceDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



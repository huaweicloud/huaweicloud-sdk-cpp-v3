

#include "huaweicloud/rds/v3/model/SwitchSupabaseApplicationSslRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSupabaseApplicationSslRequest::SwitchSupabaseApplicationSslRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSupabaseApplicationSslRequest::~SwitchSupabaseApplicationSslRequest() = default;

void SwitchSupabaseApplicationSslRequest::validate()
{
}

web::json::value SwitchSupabaseApplicationSslRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchSupabaseApplicationSslRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchSupabaseApplicationSslRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchSupabaseApplicationSslRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchSupabaseApplicationSslRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchSupabaseApplicationSslRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchSupabaseApplicationSslRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchSupabaseApplicationSslRequest::getApplicationId() const
{
    return applicationId_;
}

void SwitchSupabaseApplicationSslRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool SwitchSupabaseApplicationSslRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void SwitchSupabaseApplicationSslRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

SwitchSupabaseApplicationSslRequestBody SwitchSupabaseApplicationSslRequest::getBody() const
{
    return body_;
}

void SwitchSupabaseApplicationSslRequest::setBody(const SwitchSupabaseApplicationSslRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSupabaseApplicationSslRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSupabaseApplicationSslRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



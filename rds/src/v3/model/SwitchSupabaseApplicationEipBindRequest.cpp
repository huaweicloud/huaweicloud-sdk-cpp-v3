

#include "huaweicloud/rds/v3/model/SwitchSupabaseApplicationEipBindRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSupabaseApplicationEipBindRequest::SwitchSupabaseApplicationEipBindRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSupabaseApplicationEipBindRequest::~SwitchSupabaseApplicationEipBindRequest() = default;

void SwitchSupabaseApplicationEipBindRequest::validate()
{
}

web::json::value SwitchSupabaseApplicationEipBindRequest::toJson() const
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
bool SwitchSupabaseApplicationEipBindRequest::fromJson(const web::json::value& val)
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
            SwitchSupabaseApplicationEipBindRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchSupabaseApplicationEipBindRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchSupabaseApplicationEipBindRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchSupabaseApplicationEipBindRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchSupabaseApplicationEipBindRequest::getApplicationId() const
{
    return applicationId_;
}

void SwitchSupabaseApplicationEipBindRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void SwitchSupabaseApplicationEipBindRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

SwitchSupabaseApplicationEipBindRequestBody SwitchSupabaseApplicationEipBindRequest::getBody() const
{
    return body_;
}

void SwitchSupabaseApplicationEipBindRequest::setBody(const SwitchSupabaseApplicationEipBindRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSupabaseApplicationEipBindRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



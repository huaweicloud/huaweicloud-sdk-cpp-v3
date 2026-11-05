

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationPasswordRequest::ModifySupabaseApplicationPasswordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifySupabaseApplicationPasswordRequest::~ModifySupabaseApplicationPasswordRequest() = default;

void ModifySupabaseApplicationPasswordRequest::validate()
{
}

web::json::value ModifySupabaseApplicationPasswordRequest::toJson() const
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
bool ModifySupabaseApplicationPasswordRequest::fromJson(const web::json::value& val)
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
            ModifySupabaseApplicationPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifySupabaseApplicationPasswordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifySupabaseApplicationPasswordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifySupabaseApplicationPasswordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifySupabaseApplicationPasswordRequest::getApplicationId() const
{
    return applicationId_;
}

void ModifySupabaseApplicationPasswordRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ModifySupabaseApplicationPasswordRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

ModifySupabaseApplicationPasswordRequestBody ModifySupabaseApplicationPasswordRequest::getBody() const
{
    return body_;
}

void ModifySupabaseApplicationPasswordRequest::setBody(const ModifySupabaseApplicationPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifySupabaseApplicationPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationStorageRequest::ModifySupabaseApplicationStorageRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifySupabaseApplicationStorageRequest::~ModifySupabaseApplicationStorageRequest() = default;

void ModifySupabaseApplicationStorageRequest::validate()
{
}

web::json::value ModifySupabaseApplicationStorageRequest::toJson() const
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
bool ModifySupabaseApplicationStorageRequest::fromJson(const web::json::value& val)
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
            ModifySupabaseApplicationStorageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifySupabaseApplicationStorageRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifySupabaseApplicationStorageRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifySupabaseApplicationStorageRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifySupabaseApplicationStorageRequest::getApplicationId() const
{
    return applicationId_;
}

void ModifySupabaseApplicationStorageRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ModifySupabaseApplicationStorageRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

ModifySupabaseApplicationStorageRequestBody ModifySupabaseApplicationStorageRequest::getBody() const
{
    return body_;
}

void ModifySupabaseApplicationStorageRequest::setBody(const ModifySupabaseApplicationStorageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifySupabaseApplicationStorageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



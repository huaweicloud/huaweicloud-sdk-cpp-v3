

#include "huaweicloud/rds/v3/model/ResetSupabaseApplicationApiKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResetSupabaseApplicationApiKeyRequest::ResetSupabaseApplicationApiKeyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
}

ResetSupabaseApplicationApiKeyRequest::~ResetSupabaseApplicationApiKeyRequest() = default;

void ResetSupabaseApplicationApiKeyRequest::validate()
{
}

web::json::value ResetSupabaseApplicationApiKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool ResetSupabaseApplicationApiKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    return ok;
}


std::string ResetSupabaseApplicationApiKeyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetSupabaseApplicationApiKeyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetSupabaseApplicationApiKeyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetSupabaseApplicationApiKeyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetSupabaseApplicationApiKeyRequest::getApplicationId() const
{
    return applicationId_;
}

void ResetSupabaseApplicationApiKeyRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ResetSupabaseApplicationApiKeyRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ResetSupabaseApplicationApiKeyRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ResetSupabaseApplicationApiKeyRequest::getKeyId() const
{
    return keyId_;
}

void ResetSupabaseApplicationApiKeyRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ResetSupabaseApplicationApiKeyRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ResetSupabaseApplicationApiKeyRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}



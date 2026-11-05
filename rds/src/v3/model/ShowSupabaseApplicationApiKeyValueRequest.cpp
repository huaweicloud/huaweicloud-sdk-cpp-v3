

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationApiKeyValueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationApiKeyValueRequest::ShowSupabaseApplicationApiKeyValueRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
}

ShowSupabaseApplicationApiKeyValueRequest::~ShowSupabaseApplicationApiKeyValueRequest() = default;

void ShowSupabaseApplicationApiKeyValueRequest::validate()
{
}

web::json::value ShowSupabaseApplicationApiKeyValueRequest::toJson() const
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
bool ShowSupabaseApplicationApiKeyValueRequest::fromJson(const web::json::value& val)
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


std::string ShowSupabaseApplicationApiKeyValueRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSupabaseApplicationApiKeyValueRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSupabaseApplicationApiKeyValueRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSupabaseApplicationApiKeyValueRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSupabaseApplicationApiKeyValueRequest::getApplicationId() const
{
    return applicationId_;
}

void ShowSupabaseApplicationApiKeyValueRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ShowSupabaseApplicationApiKeyValueRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ShowSupabaseApplicationApiKeyValueRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ShowSupabaseApplicationApiKeyValueRequest::getKeyId() const
{
    return keyId_;
}

void ShowSupabaseApplicationApiKeyValueRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowSupabaseApplicationApiKeyValueRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowSupabaseApplicationApiKeyValueRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}



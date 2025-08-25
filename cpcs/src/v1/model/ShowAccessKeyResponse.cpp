

#include "huaweicloud/cpcs/v1/model/ShowAccessKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAccessKeyResponse::ShowAccessKeyResponse()
{
    accessKey_ = "";
    accessKeyIsSet_ = false;
    secretKey_ = "";
    secretKeyIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    isImported_ = false;
    isImportedIsSet_ = false;
}

ShowAccessKeyResponse::~ShowAccessKeyResponse() = default;

void ShowAccessKeyResponse::validate()
{
}

web::json::value ShowAccessKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(secretKeyIsSet_) {
        val[utility::conversions::to_string_t("secret_key")] = ModelBase::toJson(secretKey_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(isImportedIsSet_) {
        val[utility::conversions::to_string_t("is_imported")] = ModelBase::toJson(isImported_);
    }

    return val;
}
bool ShowAccessKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_imported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_imported"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsImported(refVal);
        }
    }
    return ok;
}


std::string ShowAccessKeyResponse::getAccessKey() const
{
    return accessKey_;
}

void ShowAccessKeyResponse::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool ShowAccessKeyResponse::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void ShowAccessKeyResponse::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string ShowAccessKeyResponse::getSecretKey() const
{
    return secretKey_;
}

void ShowAccessKeyResponse::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool ShowAccessKeyResponse::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void ShowAccessKeyResponse::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

std::string ShowAccessKeyResponse::getAppId() const
{
    return appId_;
}

void ShowAccessKeyResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowAccessKeyResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowAccessKeyResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowAccessKeyResponse::getKeyName() const
{
    return keyName_;
}

void ShowAccessKeyResponse::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool ShowAccessKeyResponse::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void ShowAccessKeyResponse::unsetkeyName()
{
    keyNameIsSet_ = false;
}

bool ShowAccessKeyResponse::isIsImported() const
{
    return isImported_;
}

void ShowAccessKeyResponse::setIsImported(bool value)
{
    isImported_ = value;
    isImportedIsSet_ = true;
}

bool ShowAccessKeyResponse::isImportedIsSet() const
{
    return isImportedIsSet_;
}

void ShowAccessKeyResponse::unsetisImported()
{
    isImportedIsSet_ = false;
}

}
}
}
}
}



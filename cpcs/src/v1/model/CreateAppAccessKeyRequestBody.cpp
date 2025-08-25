

#include "huaweicloud/cpcs/v1/model/CreateAppAccessKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateAppAccessKeyRequestBody::CreateAppAccessKeyRequestBody()
{
    keyName_ = "";
    keyNameIsSet_ = false;
    accessKey_ = "";
    accessKeyIsSet_ = false;
    secretKey_ = "";
    secretKeyIsSet_ = false;
}

CreateAppAccessKeyRequestBody::~CreateAppAccessKeyRequestBody() = default;

void CreateAppAccessKeyRequestBody::validate()
{
}

web::json::value CreateAppAccessKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(accessKeyIsSet_) {
        val[utility::conversions::to_string_t("access_key")] = ModelBase::toJson(accessKey_);
    }
    if(secretKeyIsSet_) {
        val[utility::conversions::to_string_t("secret_key")] = ModelBase::toJson(secretKey_);
    }

    return val;
}
bool CreateAppAccessKeyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
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
    return ok;
}


std::string CreateAppAccessKeyRequestBody::getKeyName() const
{
    return keyName_;
}

void CreateAppAccessKeyRequestBody::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool CreateAppAccessKeyRequestBody::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void CreateAppAccessKeyRequestBody::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string CreateAppAccessKeyRequestBody::getAccessKey() const
{
    return accessKey_;
}

void CreateAppAccessKeyRequestBody::setAccessKey(const std::string& value)
{
    accessKey_ = value;
    accessKeyIsSet_ = true;
}

bool CreateAppAccessKeyRequestBody::accessKeyIsSet() const
{
    return accessKeyIsSet_;
}

void CreateAppAccessKeyRequestBody::unsetaccessKey()
{
    accessKeyIsSet_ = false;
}

std::string CreateAppAccessKeyRequestBody::getSecretKey() const
{
    return secretKey_;
}

void CreateAppAccessKeyRequestBody::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool CreateAppAccessKeyRequestBody::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void CreateAppAccessKeyRequestBody::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

}
}
}
}
}



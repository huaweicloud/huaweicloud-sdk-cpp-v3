

#include "huaweicloud/modelarts/v1/model/SecretVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SecretVolumeResponse::SecretVolumeResponse()
{
    secretName_ = "";
    secretNameIsSet_ = false;
    secretKey_ = "";
    secretKeyIsSet_ = false;
    secretValue_ = "";
    secretValueIsSet_ = false;
    mountPath_ = "";
    mountPathIsSet_ = false;
}

SecretVolumeResponse::~SecretVolumeResponse() = default;

void SecretVolumeResponse::validate()
{
}

web::json::value SecretVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(secretKeyIsSet_) {
        val[utility::conversions::to_string_t("secret_key")] = ModelBase::toJson(secretKey_);
    }
    if(secretValueIsSet_) {
        val[utility::conversions::to_string_t("secret_value")] = ModelBase::toJson(secretValue_);
    }
    if(mountPathIsSet_) {
        val[utility::conversions::to_string_t("mount_path")] = ModelBase::toJson(mountPath_);
    }

    return val;
}
bool SecretVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("secret_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountPath(refVal);
        }
    }
    return ok;
}


std::string SecretVolumeResponse::getSecretName() const
{
    return secretName_;
}

void SecretVolumeResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool SecretVolumeResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void SecretVolumeResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string SecretVolumeResponse::getSecretKey() const
{
    return secretKey_;
}

void SecretVolumeResponse::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool SecretVolumeResponse::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void SecretVolumeResponse::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

std::string SecretVolumeResponse::getSecretValue() const
{
    return secretValue_;
}

void SecretVolumeResponse::setSecretValue(const std::string& value)
{
    secretValue_ = value;
    secretValueIsSet_ = true;
}

bool SecretVolumeResponse::secretValueIsSet() const
{
    return secretValueIsSet_;
}

void SecretVolumeResponse::unsetsecretValue()
{
    secretValueIsSet_ = false;
}

std::string SecretVolumeResponse::getMountPath() const
{
    return mountPath_;
}

void SecretVolumeResponse::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool SecretVolumeResponse::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void SecretVolumeResponse::unsetmountPath()
{
    mountPathIsSet_ = false;
}

}
}
}
}
}



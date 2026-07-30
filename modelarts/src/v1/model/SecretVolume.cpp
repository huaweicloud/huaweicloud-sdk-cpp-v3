

#include "huaweicloud/modelarts/v1/model/SecretVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SecretVolume::SecretVolume()
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

SecretVolume::~SecretVolume() = default;

void SecretVolume::validate()
{
}

web::json::value SecretVolume::toJson() const
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
bool SecretVolume::fromJson(const web::json::value& val)
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


std::string SecretVolume::getSecretName() const
{
    return secretName_;
}

void SecretVolume::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool SecretVolume::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void SecretVolume::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string SecretVolume::getSecretKey() const
{
    return secretKey_;
}

void SecretVolume::setSecretKey(const std::string& value)
{
    secretKey_ = value;
    secretKeyIsSet_ = true;
}

bool SecretVolume::secretKeyIsSet() const
{
    return secretKeyIsSet_;
}

void SecretVolume::unsetsecretKey()
{
    secretKeyIsSet_ = false;
}

std::string SecretVolume::getSecretValue() const
{
    return secretValue_;
}

void SecretVolume::setSecretValue(const std::string& value)
{
    secretValue_ = value;
    secretValueIsSet_ = true;
}

bool SecretVolume::secretValueIsSet() const
{
    return secretValueIsSet_;
}

void SecretVolume::unsetsecretValue()
{
    secretValueIsSet_ = false;
}

std::string SecretVolume::getMountPath() const
{
    return mountPath_;
}

void SecretVolume::setMountPath(const std::string& value)
{
    mountPath_ = value;
    mountPathIsSet_ = true;
}

bool SecretVolume::mountPathIsSet() const
{
    return mountPathIsSet_;
}

void SecretVolume::unsetmountPath()
{
    mountPathIsSet_ = false;
}

}
}
}
}
}



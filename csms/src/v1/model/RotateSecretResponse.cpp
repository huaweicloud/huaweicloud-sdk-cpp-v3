

#include "huaweicloud/csms/v1/model/RotateSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




RotateSecretResponse::RotateSecretResponse()
{
    versionId_ = "";
    versionIdIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    rotationTaskId_ = "";
    rotationTaskIdIsSet_ = false;
}

RotateSecretResponse::~RotateSecretResponse() = default;

void RotateSecretResponse::validate()
{
}

web::json::value RotateSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(rotationTaskIdIsSet_) {
        val[utility::conversions::to_string_t("rotation_task_id")] = ModelBase::toJson(rotationTaskId_);
    }

    return val;
}
bool RotateSecretResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationTaskId(refVal);
        }
    }
    return ok;
}


std::string RotateSecretResponse::getVersionId() const
{
    return versionId_;
}

void RotateSecretResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool RotateSecretResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void RotateSecretResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string RotateSecretResponse::getSecretName() const
{
    return secretName_;
}

void RotateSecretResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool RotateSecretResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void RotateSecretResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string RotateSecretResponse::getRotationTaskId() const
{
    return rotationTaskId_;
}

void RotateSecretResponse::setRotationTaskId(const std::string& value)
{
    rotationTaskId_ = value;
    rotationTaskIdIsSet_ = true;
}

bool RotateSecretResponse::rotationTaskIdIsSet() const
{
    return rotationTaskIdIsSet_;
}

void RotateSecretResponse::unsetrotationTaskId()
{
    rotationTaskIdIsSet_ = false;
}

}
}
}
}
}



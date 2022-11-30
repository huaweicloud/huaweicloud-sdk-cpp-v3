

#include "huaweicloud/csms/v1/model/CreateSecretRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretRequestBody::CreateSecretRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    secretBinary_ = "";
    secretBinaryIsSet_ = false;
    secretString_ = "";
    secretStringIsSet_ = false;
}

CreateSecretRequestBody::~CreateSecretRequestBody() = default;

void CreateSecretRequestBody::validate()
{
}

web::json::value CreateSecretRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(secretBinaryIsSet_) {
        val[utility::conversions::to_string_t("secret_binary")] = ModelBase::toJson(secretBinary_);
    }
    if(secretStringIsSet_) {
        val[utility::conversions::to_string_t("secret_string")] = ModelBase::toJson(secretString_);
    }

    return val;
}

bool CreateSecretRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_binary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_binary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretBinary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretString(refVal);
        }
    }
    return ok;
}


std::string CreateSecretRequestBody::getName() const
{
    return name_;
}

void CreateSecretRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSecretRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSecretRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSecretRequestBody::getKmsKeyId() const
{
    return kmsKeyId_;
}

void CreateSecretRequestBody::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool CreateSecretRequestBody::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void CreateSecretRequestBody::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string CreateSecretRequestBody::getDescription() const
{
    return description_;
}

void CreateSecretRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSecretRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSecretRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSecretRequestBody::getSecretBinary() const
{
    return secretBinary_;
}

void CreateSecretRequestBody::setSecretBinary(const std::string& value)
{
    secretBinary_ = value;
    secretBinaryIsSet_ = true;
}

bool CreateSecretRequestBody::secretBinaryIsSet() const
{
    return secretBinaryIsSet_;
}

void CreateSecretRequestBody::unsetsecretBinary()
{
    secretBinaryIsSet_ = false;
}

std::string CreateSecretRequestBody::getSecretString() const
{
    return secretString_;
}

void CreateSecretRequestBody::setSecretString(const std::string& value)
{
    secretString_ = value;
    secretStringIsSet_ = true;
}

bool CreateSecretRequestBody::secretStringIsSet() const
{
    return secretStringIsSet_;
}

void CreateSecretRequestBody::unsetsecretString()
{
    secretStringIsSet_ = false;
}

}
}
}
}
}



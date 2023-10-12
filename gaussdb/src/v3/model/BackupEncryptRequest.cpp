

#include "huaweicloud/gaussdb/v3/model/BackupEncryptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupEncryptRequest::BackupEncryptRequest()
{
    type_ = "";
    typeIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    encryptionStatus_ = "";
    encryptionStatusIsSet_ = false;
}

BackupEncryptRequest::~BackupEncryptRequest() = default;

void BackupEncryptRequest::validate()
{
}

web::json::value BackupEncryptRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(encryptionStatusIsSet_) {
        val[utility::conversions::to_string_t("encryption_status")] = ModelBase::toJson(encryptionStatus_);
    }

    return val;
}
bool BackupEncryptRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encryption_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionStatus(refVal);
        }
    }
    return ok;
}


std::string BackupEncryptRequest::getType() const
{
    return type_;
}

void BackupEncryptRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupEncryptRequest::typeIsSet() const
{
    return typeIsSet_;
}

void BackupEncryptRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string BackupEncryptRequest::getKmsKeyId() const
{
    return kmsKeyId_;
}

void BackupEncryptRequest::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool BackupEncryptRequest::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void BackupEncryptRequest::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string BackupEncryptRequest::getEncryptionStatus() const
{
    return encryptionStatus_;
}

void BackupEncryptRequest::setEncryptionStatus(const std::string& value)
{
    encryptionStatus_ = value;
    encryptionStatusIsSet_ = true;
}

bool BackupEncryptRequest::encryptionStatusIsSet() const
{
    return encryptionStatusIsSet_;
}

void BackupEncryptRequest::unsetencryptionStatus()
{
    encryptionStatusIsSet_ = false;
}

}
}
}
}
}



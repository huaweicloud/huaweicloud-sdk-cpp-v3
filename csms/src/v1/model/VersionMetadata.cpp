

#include "huaweicloud/csms/v1/model/VersionMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




VersionMetadata::VersionMetadata()
{
    id_ = "";
    idIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    versionStagesIsSet_ = false;
}

VersionMetadata::~VersionMetadata() = default;

void VersionMetadata::validate()
{
}

web::json::value VersionMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(versionStagesIsSet_) {
        val[utility::conversions::to_string_t("version_stages")] = ModelBase::toJson(versionStages_);
    }

    return val;
}

bool VersionMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_stages"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionStages(refVal);
        }
    }
    return ok;
}

std::string VersionMetadata::getId() const
{
    return id_;
}

void VersionMetadata::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VersionMetadata::idIsSet() const
{
    return idIsSet_;
}

void VersionMetadata::unsetid()
{
    idIsSet_ = false;
}

int64_t VersionMetadata::getCreateTime() const
{
    return createTime_;
}

void VersionMetadata::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool VersionMetadata::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void VersionMetadata::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t VersionMetadata::getExpireTime() const
{
    return expireTime_;
}

void VersionMetadata::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool VersionMetadata::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void VersionMetadata::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string VersionMetadata::getKmsKeyId() const
{
    return kmsKeyId_;
}

void VersionMetadata::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool VersionMetadata::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void VersionMetadata::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string VersionMetadata::getSecretName() const
{
    return secretName_;
}

void VersionMetadata::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool VersionMetadata::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void VersionMetadata::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::vector<std::string>& VersionMetadata::getVersionStages()
{
    return versionStages_;
}

void VersionMetadata::setVersionStages(const std::vector<std::string>& value)
{
    versionStages_ = value;
    versionStagesIsSet_ = true;
}

bool VersionMetadata::versionStagesIsSet() const
{
    return versionStagesIsSet_;
}

void VersionMetadata::unsetversionStages()
{
    versionStagesIsSet_ = false;
}

}
}
}
}
}



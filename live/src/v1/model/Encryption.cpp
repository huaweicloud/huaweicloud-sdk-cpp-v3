

#include "huaweicloud/live/v1/model/Encryption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




Encryption::Encryption()
{
    keyRotationIntervalSeconds_ = 0;
    keyRotationIntervalSecondsIsSet_ = false;
    encryptionMethod_ = "";
    encryptionMethodIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    drmContentId_ = "";
    drmContentIdIsSet_ = false;
    systemIdsIsSet_ = false;
    authInfo_ = "";
    authInfoIsSet_ = false;
    kmUrl_ = "";
    kmUrlIsSet_ = false;
}

Encryption::~Encryption() = default;

void Encryption::validate()
{
}

web::json::value Encryption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyRotationIntervalSecondsIsSet_) {
        val[utility::conversions::to_string_t("key_rotation_interval_seconds")] = ModelBase::toJson(keyRotationIntervalSeconds_);
    }
    if(encryptionMethodIsSet_) {
        val[utility::conversions::to_string_t("encryption_method")] = ModelBase::toJson(encryptionMethod_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(drmContentIdIsSet_) {
        val[utility::conversions::to_string_t("drm_content_id")] = ModelBase::toJson(drmContentId_);
    }
    if(systemIdsIsSet_) {
        val[utility::conversions::to_string_t("system_ids")] = ModelBase::toJson(systemIds_);
    }
    if(authInfoIsSet_) {
        val[utility::conversions::to_string_t("auth_info")] = ModelBase::toJson(authInfo_);
    }
    if(kmUrlIsSet_) {
        val[utility::conversions::to_string_t("km_url")] = ModelBase::toJson(kmUrl_);
    }

    return val;
}
bool Encryption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_rotation_interval_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_rotation_interval_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyRotationIntervalSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drm_content_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drm_content_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrmContentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("km_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("km_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmUrl(refVal);
        }
    }
    return ok;
}


int32_t Encryption::getKeyRotationIntervalSeconds() const
{
    return keyRotationIntervalSeconds_;
}

void Encryption::setKeyRotationIntervalSeconds(int32_t value)
{
    keyRotationIntervalSeconds_ = value;
    keyRotationIntervalSecondsIsSet_ = true;
}

bool Encryption::keyRotationIntervalSecondsIsSet() const
{
    return keyRotationIntervalSecondsIsSet_;
}

void Encryption::unsetkeyRotationIntervalSeconds()
{
    keyRotationIntervalSecondsIsSet_ = false;
}

std::string Encryption::getEncryptionMethod() const
{
    return encryptionMethod_;
}

void Encryption::setEncryptionMethod(const std::string& value)
{
    encryptionMethod_ = value;
    encryptionMethodIsSet_ = true;
}

bool Encryption::encryptionMethodIsSet() const
{
    return encryptionMethodIsSet_;
}

void Encryption::unsetencryptionMethod()
{
    encryptionMethodIsSet_ = false;
}

std::string Encryption::getLevel() const
{
    return level_;
}

void Encryption::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool Encryption::levelIsSet() const
{
    return levelIsSet_;
}

void Encryption::unsetlevel()
{
    levelIsSet_ = false;
}

std::string Encryption::getDrmContentId() const
{
    return drmContentId_;
}

void Encryption::setDrmContentId(const std::string& value)
{
    drmContentId_ = value;
    drmContentIdIsSet_ = true;
}

bool Encryption::drmContentIdIsSet() const
{
    return drmContentIdIsSet_;
}

void Encryption::unsetdrmContentId()
{
    drmContentIdIsSet_ = false;
}

std::vector<std::string>& Encryption::getSystemIds()
{
    return systemIds_;
}

void Encryption::setSystemIds(const std::vector<std::string>& value)
{
    systemIds_ = value;
    systemIdsIsSet_ = true;
}

bool Encryption::systemIdsIsSet() const
{
    return systemIdsIsSet_;
}

void Encryption::unsetsystemIds()
{
    systemIdsIsSet_ = false;
}

std::string Encryption::getAuthInfo() const
{
    return authInfo_;
}

void Encryption::setAuthInfo(const std::string& value)
{
    authInfo_ = value;
    authInfoIsSet_ = true;
}

bool Encryption::authInfoIsSet() const
{
    return authInfoIsSet_;
}

void Encryption::unsetauthInfo()
{
    authInfoIsSet_ = false;
}

std::string Encryption::getKmUrl() const
{
    return kmUrl_;
}

void Encryption::setKmUrl(const std::string& value)
{
    kmUrl_ = value;
    kmUrlIsSet_ = true;
}

bool Encryption::kmUrlIsSet() const
{
    return kmUrlIsSet_;
}

void Encryption::unsetkmUrl()
{
    kmUrlIsSet_ = false;
}

}
}
}
}
}



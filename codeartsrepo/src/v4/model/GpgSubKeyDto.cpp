

#include "huaweicloud/codeartsrepo/v4/model/GpgSubKeyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




GpgSubKeyDto::GpgSubKeyDto()
{
    id_ = 0;
    idIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    gpgKeyId_ = 0;
    gpgKeyIdIsSet_ = false;
    keyid_ = "";
    keyidIsSet_ = false;
}

GpgSubKeyDto::~GpgSubKeyDto() = default;

void GpgSubKeyDto::validate()
{
}

web::json::value GpgSubKeyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(gpgKeyIdIsSet_) {
        val[utility::conversions::to_string_t("gpg_key_id")] = ModelBase::toJson(gpgKeyId_);
    }
    if(keyidIsSet_) {
        val[utility::conversions::to_string_t("keyid")] = ModelBase::toJson(keyid_);
    }

    return val;
}
bool GpgSubKeyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpg_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpg_key_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyid(refVal);
        }
    }
    return ok;
}


int32_t GpgSubKeyDto::getId() const
{
    return id_;
}

void GpgSubKeyDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GpgSubKeyDto::idIsSet() const
{
    return idIsSet_;
}

void GpgSubKeyDto::unsetid()
{
    idIsSet_ = false;
}

std::string GpgSubKeyDto::getFingerprint() const
{
    return fingerprint_;
}

void GpgSubKeyDto::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool GpgSubKeyDto::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void GpgSubKeyDto::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

int32_t GpgSubKeyDto::getGpgKeyId() const
{
    return gpgKeyId_;
}

void GpgSubKeyDto::setGpgKeyId(int32_t value)
{
    gpgKeyId_ = value;
    gpgKeyIdIsSet_ = true;
}

bool GpgSubKeyDto::gpgKeyIdIsSet() const
{
    return gpgKeyIdIsSet_;
}

void GpgSubKeyDto::unsetgpgKeyId()
{
    gpgKeyIdIsSet_ = false;
}

std::string GpgSubKeyDto::getKeyid() const
{
    return keyid_;
}

void GpgSubKeyDto::setKeyid(const std::string& value)
{
    keyid_ = value;
    keyidIsSet_ = true;
}

bool GpgSubKeyDto::keyidIsSet() const
{
    return keyidIsSet_;
}

void GpgSubKeyDto::unsetkeyid()
{
    keyidIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/csms/v1/model/Version.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Version::Version()
{
    versionMetadataIsSet_ = false;
    secretBinary_ = "";
    secretBinaryIsSet_ = false;
    secretString_ = "";
    secretStringIsSet_ = false;
}

Version::~Version() = default;

void Version::validate()
{
}

web::json::value Version::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionMetadataIsSet_) {
        val[utility::conversions::to_string_t("version_metadata")] = ModelBase::toJson(versionMetadata_);
    }
    if(secretBinaryIsSet_) {
        val[utility::conversions::to_string_t("secret_binary")] = ModelBase::toJson(secretBinary_);
    }
    if(secretStringIsSet_) {
        val[utility::conversions::to_string_t("secret_string")] = ModelBase::toJson(secretString_);
    }

    return val;
}
bool Version::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_metadata"));
        if(!fieldValue.is_null())
        {
            VersionMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionMetadata(refVal);
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


VersionMetadata Version::getVersionMetadata() const
{
    return versionMetadata_;
}

void Version::setVersionMetadata(const VersionMetadata& value)
{
    versionMetadata_ = value;
    versionMetadataIsSet_ = true;
}

bool Version::versionMetadataIsSet() const
{
    return versionMetadataIsSet_;
}

void Version::unsetversionMetadata()
{
    versionMetadataIsSet_ = false;
}

std::string Version::getSecretBinary() const
{
    return secretBinary_;
}

void Version::setSecretBinary(const std::string& value)
{
    secretBinary_ = value;
    secretBinaryIsSet_ = true;
}

bool Version::secretBinaryIsSet() const
{
    return secretBinaryIsSet_;
}

void Version::unsetsecretBinary()
{
    secretBinaryIsSet_ = false;
}

std::string Version::getSecretString() const
{
    return secretString_;
}

void Version::setSecretString(const std::string& value)
{
    secretString_ = value;
    secretStringIsSet_ = true;
}

bool Version::secretStringIsSet() const
{
    return secretStringIsSet_;
}

void Version::unsetsecretString()
{
    secretStringIsSet_ = false;
}

}
}
}
}
}



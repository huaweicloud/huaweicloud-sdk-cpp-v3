

#include "huaweicloud/ims/v2/model/OsVersionInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




OsVersionInfo::OsVersionInfo()
{
    platform_ = "";
    platformIsSet_ = false;
    osVersionKey_ = "";
    osVersionKeyIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
    osBit_ = 0;
    osBitIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
}

OsVersionInfo::~OsVersionInfo() = default;

void OsVersionInfo::validate()
{
}

web::json::value OsVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(osVersionKeyIsSet_) {
        val[utility::conversions::to_string_t("os_version_key")] = ModelBase::toJson(osVersionKey_);
    }
    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("os_version")] = ModelBase::toJson(osVersion_);
    }
    if(osBitIsSet_) {
        val[utility::conversions::to_string_t("os_bit")] = ModelBase::toJson(osBit_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("os_type")] = ModelBase::toJson(osType_);
    }

    return val;
}

bool OsVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_version_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_version_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersionKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_bit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_bit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsBit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    return ok;
}

std::string OsVersionInfo::getPlatform() const
{
    return platform_;
}

void OsVersionInfo::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool OsVersionInfo::platformIsSet() const
{
    return platformIsSet_;
}

void OsVersionInfo::unsetplatform()
{
    platformIsSet_ = false;
}

std::string OsVersionInfo::getOsVersionKey() const
{
    return osVersionKey_;
}

void OsVersionInfo::setOsVersionKey(const std::string& value)
{
    osVersionKey_ = value;
    osVersionKeyIsSet_ = true;
}

bool OsVersionInfo::osVersionKeyIsSet() const
{
    return osVersionKeyIsSet_;
}

void OsVersionInfo::unsetosVersionKey()
{
    osVersionKeyIsSet_ = false;
}

std::string OsVersionInfo::getOsVersion() const
{
    return osVersion_;
}

void OsVersionInfo::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool OsVersionInfo::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void OsVersionInfo::unsetosVersion()
{
    osVersionIsSet_ = false;
}

int32_t OsVersionInfo::getOsBit() const
{
    return osBit_;
}

void OsVersionInfo::setOsBit(int32_t value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool OsVersionInfo::osBitIsSet() const
{
    return osBitIsSet_;
}

void OsVersionInfo::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string OsVersionInfo::getOsType() const
{
    return osType_;
}

void OsVersionInfo::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool OsVersionInfo::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void OsVersionInfo::unsetosType()
{
    osTypeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cce/v3/model/UpgradePath.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradePath::UpgradePath()
{
    version_ = "";
    versionIsSet_ = false;
    platformVersion_ = "";
    platformVersionIsSet_ = false;
    targetVersionsIsSet_ = false;
}

UpgradePath::~UpgradePath() = default;

void UpgradePath::validate()
{
}

web::json::value UpgradePath::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(platformVersionIsSet_) {
        val[utility::conversions::to_string_t("platformVersion")] = ModelBase::toJson(platformVersion_);
    }
    if(targetVersionsIsSet_) {
        val[utility::conversions::to_string_t("targetVersions")] = ModelBase::toJson(targetVersions_);
    }

    return val;
}
bool UpgradePath::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platformVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platformVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersions(refVal);
        }
    }
    return ok;
}


std::string UpgradePath::getVersion() const
{
    return version_;
}

void UpgradePath::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpgradePath::versionIsSet() const
{
    return versionIsSet_;
}

void UpgradePath::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpgradePath::getPlatformVersion() const
{
    return platformVersion_;
}

void UpgradePath::setPlatformVersion(const std::string& value)
{
    platformVersion_ = value;
    platformVersionIsSet_ = true;
}

bool UpgradePath::platformVersionIsSet() const
{
    return platformVersionIsSet_;
}

void UpgradePath::unsetplatformVersion()
{
    platformVersionIsSet_ = false;
}

std::vector<std::string>& UpgradePath::getTargetVersions()
{
    return targetVersions_;
}

void UpgradePath::setTargetVersions(const std::vector<std::string>& value)
{
    targetVersions_ = value;
    targetVersionsIsSet_ = true;
}

bool UpgradePath::targetVersionsIsSet() const
{
    return targetVersionsIsSet_;
}

void UpgradePath::unsettargetVersions()
{
    targetVersionsIsSet_ = false;
}

}
}
}
}
}



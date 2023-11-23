

#include "huaweicloud/rds/v3/model/UpgradePgMajorVersion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradePgMajorVersion::UpgradePgMajorVersion()
{
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    isChangePrivateIp_ = false;
    isChangePrivateIpIsSet_ = false;
    statisticsCollectionMode_ = "";
    statisticsCollectionModeIsSet_ = false;
}

UpgradePgMajorVersion::~UpgradePgMajorVersion() = default;

void UpgradePgMajorVersion::validate()
{
}

web::json::value UpgradePgMajorVersion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(isChangePrivateIpIsSet_) {
        val[utility::conversions::to_string_t("is_change_private_ip")] = ModelBase::toJson(isChangePrivateIp_);
    }
    if(statisticsCollectionModeIsSet_) {
        val[utility::conversions::to_string_t("statistics_collection_mode")] = ModelBase::toJson(statisticsCollectionMode_);
    }

    return val;
}
bool UpgradePgMajorVersion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_change_private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_change_private_ip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsChangePrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics_collection_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics_collection_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticsCollectionMode(refVal);
        }
    }
    return ok;
}


std::string UpgradePgMajorVersion::getTargetVersion() const
{
    return targetVersion_;
}

void UpgradePgMajorVersion::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool UpgradePgMajorVersion::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void UpgradePgMajorVersion::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

bool UpgradePgMajorVersion::isIsChangePrivateIp() const
{
    return isChangePrivateIp_;
}

void UpgradePgMajorVersion::setIsChangePrivateIp(bool value)
{
    isChangePrivateIp_ = value;
    isChangePrivateIpIsSet_ = true;
}

bool UpgradePgMajorVersion::isChangePrivateIpIsSet() const
{
    return isChangePrivateIpIsSet_;
}

void UpgradePgMajorVersion::unsetisChangePrivateIp()
{
    isChangePrivateIpIsSet_ = false;
}

std::string UpgradePgMajorVersion::getStatisticsCollectionMode() const
{
    return statisticsCollectionMode_;
}

void UpgradePgMajorVersion::setStatisticsCollectionMode(const std::string& value)
{
    statisticsCollectionMode_ = value;
    statisticsCollectionModeIsSet_ = true;
}

bool UpgradePgMajorVersion::statisticsCollectionModeIsSet() const
{
    return statisticsCollectionModeIsSet_;
}

void UpgradePgMajorVersion::unsetstatisticsCollectionMode()
{
    statisticsCollectionModeIsSet_ = false;
}

}
}
}
}
}



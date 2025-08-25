

#include "huaweicloud/cce/v3/model/UpgradeInfoSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeInfoSpec::UpgradeInfoSpec()
{
    lastUpgradeInfoIsSet_ = false;
    versionInfoIsSet_ = false;
    upgradeFeatureGatesIsSet_ = false;
}

UpgradeInfoSpec::~UpgradeInfoSpec() = default;

void UpgradeInfoSpec::validate()
{
}

web::json::value UpgradeInfoSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastUpgradeInfoIsSet_) {
        val[utility::conversions::to_string_t("lastUpgradeInfo")] = ModelBase::toJson(lastUpgradeInfo_);
    }
    if(versionInfoIsSet_) {
        val[utility::conversions::to_string_t("versionInfo")] = ModelBase::toJson(versionInfo_);
    }
    if(upgradeFeatureGatesIsSet_) {
        val[utility::conversions::to_string_t("upgradeFeatureGates")] = ModelBase::toJson(upgradeFeatureGates_);
    }

    return val;
}
bool UpgradeInfoSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lastUpgradeInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpgradeInfo"));
        if(!fieldValue.is_null())
        {
            UpgradeInfoStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpgradeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versionInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versionInfo"));
        if(!fieldValue.is_null())
        {
            UpgradeVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgradeFeatureGates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgradeFeatureGates"));
        if(!fieldValue.is_null())
        {
            UpgradeFeatureGates refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeFeatureGates(refVal);
        }
    }
    return ok;
}


UpgradeInfoStatus UpgradeInfoSpec::getLastUpgradeInfo() const
{
    return lastUpgradeInfo_;
}

void UpgradeInfoSpec::setLastUpgradeInfo(const UpgradeInfoStatus& value)
{
    lastUpgradeInfo_ = value;
    lastUpgradeInfoIsSet_ = true;
}

bool UpgradeInfoSpec::lastUpgradeInfoIsSet() const
{
    return lastUpgradeInfoIsSet_;
}

void UpgradeInfoSpec::unsetlastUpgradeInfo()
{
    lastUpgradeInfoIsSet_ = false;
}

UpgradeVersionInfo UpgradeInfoSpec::getVersionInfo() const
{
    return versionInfo_;
}

void UpgradeInfoSpec::setVersionInfo(const UpgradeVersionInfo& value)
{
    versionInfo_ = value;
    versionInfoIsSet_ = true;
}

bool UpgradeInfoSpec::versionInfoIsSet() const
{
    return versionInfoIsSet_;
}

void UpgradeInfoSpec::unsetversionInfo()
{
    versionInfoIsSet_ = false;
}

UpgradeFeatureGates UpgradeInfoSpec::getUpgradeFeatureGates() const
{
    return upgradeFeatureGates_;
}

void UpgradeInfoSpec::setUpgradeFeatureGates(const UpgradeFeatureGates& value)
{
    upgradeFeatureGates_ = value;
    upgradeFeatureGatesIsSet_ = true;
}

bool UpgradeInfoSpec::upgradeFeatureGatesIsSet() const
{
    return upgradeFeatureGatesIsSet_;
}

void UpgradeInfoSpec::unsetupgradeFeatureGates()
{
    upgradeFeatureGatesIsSet_ = false;
}

}
}
}
}
}



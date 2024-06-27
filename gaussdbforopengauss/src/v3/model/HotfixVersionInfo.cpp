

#include "huaweicloud/gaussdbforopengauss/v3/model/HotfixVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




HotfixVersionInfo::HotfixVersionInfo()
{
    version_ = "";
    versionIsSet_ = false;
    upgradeFinishedTime_ = "";
    upgradeFinishedTimeIsSet_ = false;
}

HotfixVersionInfo::~HotfixVersionInfo() = default;

void HotfixVersionInfo::validate()
{
}

web::json::value HotfixVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(upgradeFinishedTimeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_finished_time")] = ModelBase::toJson(upgradeFinishedTime_);
    }

    return val;
}
bool HotfixVersionInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("upgrade_finished_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_finished_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeFinishedTime(refVal);
        }
    }
    return ok;
}


std::string HotfixVersionInfo::getVersion() const
{
    return version_;
}

void HotfixVersionInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool HotfixVersionInfo::versionIsSet() const
{
    return versionIsSet_;
}

void HotfixVersionInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::string HotfixVersionInfo::getUpgradeFinishedTime() const
{
    return upgradeFinishedTime_;
}

void HotfixVersionInfo::setUpgradeFinishedTime(const std::string& value)
{
    upgradeFinishedTime_ = value;
    upgradeFinishedTimeIsSet_ = true;
}

bool HotfixVersionInfo::upgradeFinishedTimeIsSet() const
{
    return upgradeFinishedTimeIsSet_;
}

void HotfixVersionInfo::unsetupgradeFinishedTime()
{
    upgradeFinishedTimeIsSet_ = false;
}

}
}
}
}
}



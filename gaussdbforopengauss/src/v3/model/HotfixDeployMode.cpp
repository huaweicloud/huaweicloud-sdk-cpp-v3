

#include "huaweicloud/gaussdbforopengauss/v3/model/HotfixDeployMode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




HotfixDeployMode::HotfixDeployMode()
{
    defaultUpgrade_ = false;
    defaultUpgradeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

HotfixDeployMode::~HotfixDeployMode() = default;

void HotfixDeployMode::validate()
{
}

web::json::value HotfixDeployMode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultUpgradeIsSet_) {
        val[utility::conversions::to_string_t("default_upgrade")] = ModelBase::toJson(defaultUpgrade_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool HotfixDeployMode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default_upgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_upgrade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultUpgrade(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


bool HotfixDeployMode::isDefaultUpgrade() const
{
    return defaultUpgrade_;
}

void HotfixDeployMode::setDefaultUpgrade(bool value)
{
    defaultUpgrade_ = value;
    defaultUpgradeIsSet_ = true;
}

bool HotfixDeployMode::defaultUpgradeIsSet() const
{
    return defaultUpgradeIsSet_;
}

void HotfixDeployMode::unsetdefaultUpgrade()
{
    defaultUpgradeIsSet_ = false;
}

int64_t HotfixDeployMode::getUpdateTime() const
{
    return updateTime_;
}

void HotfixDeployMode::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool HotfixDeployMode::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void HotfixDeployMode::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string HotfixDeployMode::getMode() const
{
    return mode_;
}

void HotfixDeployMode::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool HotfixDeployMode::modeIsSet() const
{
    return modeIsSet_;
}

void HotfixDeployMode::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}



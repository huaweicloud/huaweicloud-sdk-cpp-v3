

#include "huaweicloud/dds/v3/model/UpgradeDatabaseVersionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpgradeDatabaseVersionRequestBody::UpgradeDatabaseVersionRequestBody()
{
    upgradeMode_ = "";
    upgradeModeIsSet_ = false;
    isDelayed_ = false;
    isDelayedIsSet_ = false;
}

UpgradeDatabaseVersionRequestBody::~UpgradeDatabaseVersionRequestBody() = default;

void UpgradeDatabaseVersionRequestBody::validate()
{
}

web::json::value UpgradeDatabaseVersionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeModeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_mode")] = ModelBase::toJson(upgradeMode_);
    }
    if(isDelayedIsSet_) {
        val[utility::conversions::to_string_t("is_delayed")] = ModelBase::toJson(isDelayed_);
    }

    return val;
}
bool UpgradeDatabaseVersionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delayed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delayed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelayed(refVal);
        }
    }
    return ok;
}


std::string UpgradeDatabaseVersionRequestBody::getUpgradeMode() const
{
    return upgradeMode_;
}

void UpgradeDatabaseVersionRequestBody::setUpgradeMode(const std::string& value)
{
    upgradeMode_ = value;
    upgradeModeIsSet_ = true;
}

bool UpgradeDatabaseVersionRequestBody::upgradeModeIsSet() const
{
    return upgradeModeIsSet_;
}

void UpgradeDatabaseVersionRequestBody::unsetupgradeMode()
{
    upgradeModeIsSet_ = false;
}

bool UpgradeDatabaseVersionRequestBody::isIsDelayed() const
{
    return isDelayed_;
}

void UpgradeDatabaseVersionRequestBody::setIsDelayed(bool value)
{
    isDelayed_ = value;
    isDelayedIsSet_ = true;
}

bool UpgradeDatabaseVersionRequestBody::isDelayedIsSet() const
{
    return isDelayedIsSet_;
}

void UpgradeDatabaseVersionRequestBody::unsetisDelayed()
{
    isDelayedIsSet_ = false;
}

}
}
}
}
}



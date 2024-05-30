

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeTypeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeTypeInfo::UpgradeTypeInfo()
{
    upgradeType_ = "";
    upgradeTypeIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    upgradeActionListIsSet_ = false;
    isParallelUpgrade_ = false;
    isParallelUpgradeIsSet_ = false;
}

UpgradeTypeInfo::~UpgradeTypeInfo() = default;

void UpgradeTypeInfo::validate()
{
}

web::json::value UpgradeTypeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeTypeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_type")] = ModelBase::toJson(upgradeType_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(upgradeActionListIsSet_) {
        val[utility::conversions::to_string_t("upgrade_action_list")] = ModelBase::toJson(upgradeActionList_);
    }
    if(isParallelUpgradeIsSet_) {
        val[utility::conversions::to_string_t("is_parallel_upgrade")] = ModelBase::toJson(isParallelUpgrade_);
    }

    return val;
}
bool UpgradeTypeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_action_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_action_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeActionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeActionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_parallel_upgrade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_parallel_upgrade"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsParallelUpgrade(refVal);
        }
    }
    return ok;
}


std::string UpgradeTypeInfo::getUpgradeType() const
{
    return upgradeType_;
}

void UpgradeTypeInfo::setUpgradeType(const std::string& value)
{
    upgradeType_ = value;
    upgradeTypeIsSet_ = true;
}

bool UpgradeTypeInfo::upgradeTypeIsSet() const
{
    return upgradeTypeIsSet_;
}

void UpgradeTypeInfo::unsetupgradeType()
{
    upgradeTypeIsSet_ = false;
}

bool UpgradeTypeInfo::isEnable() const
{
    return enable_;
}

void UpgradeTypeInfo::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool UpgradeTypeInfo::enableIsSet() const
{
    return enableIsSet_;
}

void UpgradeTypeInfo::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<UpgradeActionInfo>& UpgradeTypeInfo::getUpgradeActionList()
{
    return upgradeActionList_;
}

void UpgradeTypeInfo::setUpgradeActionList(const std::vector<UpgradeActionInfo>& value)
{
    upgradeActionList_ = value;
    upgradeActionListIsSet_ = true;
}

bool UpgradeTypeInfo::upgradeActionListIsSet() const
{
    return upgradeActionListIsSet_;
}

void UpgradeTypeInfo::unsetupgradeActionList()
{
    upgradeActionListIsSet_ = false;
}

bool UpgradeTypeInfo::isIsParallelUpgrade() const
{
    return isParallelUpgrade_;
}

void UpgradeTypeInfo::setIsParallelUpgrade(bool value)
{
    isParallelUpgrade_ = value;
    isParallelUpgradeIsSet_ = true;
}

bool UpgradeTypeInfo::isParallelUpgradeIsSet() const
{
    return isParallelUpgradeIsSet_;
}

void UpgradeTypeInfo::unsetisParallelUpgrade()
{
    isParallelUpgradeIsSet_ = false;
}

}
}
}
}
}



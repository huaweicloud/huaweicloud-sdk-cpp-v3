

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeActionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeActionInfo::UpgradeActionInfo()
{
    upgradeAction_ = "";
    upgradeActionIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

UpgradeActionInfo::~UpgradeActionInfo() = default;

void UpgradeActionInfo::validate()
{
}

web::json::value UpgradeActionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeActionIsSet_) {
        val[utility::conversions::to_string_t("upgrade_action")] = ModelBase::toJson(upgradeAction_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool UpgradeActionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeAction(refVal);
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
    return ok;
}


std::string UpgradeActionInfo::getUpgradeAction() const
{
    return upgradeAction_;
}

void UpgradeActionInfo::setUpgradeAction(const std::string& value)
{
    upgradeAction_ = value;
    upgradeActionIsSet_ = true;
}

bool UpgradeActionInfo::upgradeActionIsSet() const
{
    return upgradeActionIsSet_;
}

void UpgradeActionInfo::unsetupgradeAction()
{
    upgradeActionIsSet_ = false;
}

bool UpgradeActionInfo::isEnable() const
{
    return enable_;
}

void UpgradeActionInfo::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool UpgradeActionInfo::enableIsSet() const
{
    return enableIsSet_;
}

void UpgradeActionInfo::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}



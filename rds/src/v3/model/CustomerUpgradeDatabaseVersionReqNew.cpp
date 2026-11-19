

#include "huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReqNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerUpgradeDatabaseVersionReqNew::CustomerUpgradeDatabaseVersionReqNew()
{
    isDelayed_ = false;
    isDelayedIsSet_ = false;
    secondSwitch_ = false;
    secondSwitchIsSet_ = false;
    supportRollback_ = false;
    supportRollbackIsSet_ = false;
}

CustomerUpgradeDatabaseVersionReqNew::~CustomerUpgradeDatabaseVersionReqNew() = default;

void CustomerUpgradeDatabaseVersionReqNew::validate()
{
}

web::json::value CustomerUpgradeDatabaseVersionReqNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDelayedIsSet_) {
        val[utility::conversions::to_string_t("is_delayed")] = ModelBase::toJson(isDelayed_);
    }
    if(secondSwitchIsSet_) {
        val[utility::conversions::to_string_t("second_switch")] = ModelBase::toJson(secondSwitch_);
    }
    if(supportRollbackIsSet_) {
        val[utility::conversions::to_string_t("support_rollback")] = ModelBase::toJson(supportRollback_);
    }

    return val;
}
bool CustomerUpgradeDatabaseVersionReqNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_delayed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delayed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelayed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("second_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("second_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_rollback"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_rollback"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportRollback(refVal);
        }
    }
    return ok;
}


bool CustomerUpgradeDatabaseVersionReqNew::isIsDelayed() const
{
    return isDelayed_;
}

void CustomerUpgradeDatabaseVersionReqNew::setIsDelayed(bool value)
{
    isDelayed_ = value;
    isDelayedIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReqNew::isDelayedIsSet() const
{
    return isDelayedIsSet_;
}

void CustomerUpgradeDatabaseVersionReqNew::unsetisDelayed()
{
    isDelayedIsSet_ = false;
}

bool CustomerUpgradeDatabaseVersionReqNew::isSecondSwitch() const
{
    return secondSwitch_;
}

void CustomerUpgradeDatabaseVersionReqNew::setSecondSwitch(bool value)
{
    secondSwitch_ = value;
    secondSwitchIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReqNew::secondSwitchIsSet() const
{
    return secondSwitchIsSet_;
}

void CustomerUpgradeDatabaseVersionReqNew::unsetsecondSwitch()
{
    secondSwitchIsSet_ = false;
}

bool CustomerUpgradeDatabaseVersionReqNew::isSupportRollback() const
{
    return supportRollback_;
}

void CustomerUpgradeDatabaseVersionReqNew::setSupportRollback(bool value)
{
    supportRollback_ = value;
    supportRollbackIsSet_ = true;
}

bool CustomerUpgradeDatabaseVersionReqNew::supportRollbackIsSet() const
{
    return supportRollbackIsSet_;
}

void CustomerUpgradeDatabaseVersionReqNew::unsetsupportRollback()
{
    supportRollbackIsSet_ = false;
}

}
}
}
}
}



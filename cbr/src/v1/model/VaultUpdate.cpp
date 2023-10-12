

#include "huaweicloud/cbr/v1/model/VaultUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultUpdate::VaultUpdate()
{
    billingIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    autoBind_ = false;
    autoBindIsSet_ = false;
    bindRulesIsSet_ = false;
    autoExpand_ = false;
    autoExpandIsSet_ = false;
    smnNotify_ = false;
    smnNotifyIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
}

VaultUpdate::~VaultUpdate() = default;

void VaultUpdate::validate()
{
}

web::json::value VaultUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(autoBindIsSet_) {
        val[utility::conversions::to_string_t("auto_bind")] = ModelBase::toJson(autoBind_);
    }
    if(bindRulesIsSet_) {
        val[utility::conversions::to_string_t("bind_rules")] = ModelBase::toJson(bindRules_);
    }
    if(autoExpandIsSet_) {
        val[utility::conversions::to_string_t("auto_expand")] = ModelBase::toJson(autoExpand_);
    }
    if(smnNotifyIsSet_) {
        val[utility::conversions::to_string_t("smn_notify")] = ModelBase::toJson(smnNotify_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }

    return val;
}
bool VaultUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_bind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_bind"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoBind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bind_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_rules"));
        if(!fieldValue.is_null())
        {
            VaultBindRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_expand"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoExpand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_notify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    return ok;
}


BillingUpdate VaultUpdate::getBilling() const
{
    return billing_;
}

void VaultUpdate::setBilling(const BillingUpdate& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool VaultUpdate::billingIsSet() const
{
    return billingIsSet_;
}

void VaultUpdate::unsetbilling()
{
    billingIsSet_ = false;
}

std::string VaultUpdate::getName() const
{
    return name_;
}

void VaultUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VaultUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void VaultUpdate::unsetname()
{
    nameIsSet_ = false;
}

bool VaultUpdate::isAutoBind() const
{
    return autoBind_;
}

void VaultUpdate::setAutoBind(bool value)
{
    autoBind_ = value;
    autoBindIsSet_ = true;
}

bool VaultUpdate::autoBindIsSet() const
{
    return autoBindIsSet_;
}

void VaultUpdate::unsetautoBind()
{
    autoBindIsSet_ = false;
}

VaultBindRules VaultUpdate::getBindRules() const
{
    return bindRules_;
}

void VaultUpdate::setBindRules(const VaultBindRules& value)
{
    bindRules_ = value;
    bindRulesIsSet_ = true;
}

bool VaultUpdate::bindRulesIsSet() const
{
    return bindRulesIsSet_;
}

void VaultUpdate::unsetbindRules()
{
    bindRulesIsSet_ = false;
}

bool VaultUpdate::isAutoExpand() const
{
    return autoExpand_;
}

void VaultUpdate::setAutoExpand(bool value)
{
    autoExpand_ = value;
    autoExpandIsSet_ = true;
}

bool VaultUpdate::autoExpandIsSet() const
{
    return autoExpandIsSet_;
}

void VaultUpdate::unsetautoExpand()
{
    autoExpandIsSet_ = false;
}

bool VaultUpdate::isSmnNotify() const
{
    return smnNotify_;
}

void VaultUpdate::setSmnNotify(bool value)
{
    smnNotify_ = value;
    smnNotifyIsSet_ = true;
}

bool VaultUpdate::smnNotifyIsSet() const
{
    return smnNotifyIsSet_;
}

void VaultUpdate::unsetsmnNotify()
{
    smnNotifyIsSet_ = false;
}

int32_t VaultUpdate::getThreshold() const
{
    return threshold_;
}

void VaultUpdate::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool VaultUpdate::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void VaultUpdate::unsetthreshold()
{
    thresholdIsSet_ = false;
}

}
}
}
}
}



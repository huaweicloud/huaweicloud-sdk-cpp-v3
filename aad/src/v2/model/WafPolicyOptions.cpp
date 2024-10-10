

#include "huaweicloud/aad/v2/model/WafPolicyOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




WafPolicyOptions::WafPolicyOptions()
{
    cc_ = false;
    ccIsSet_ = false;
    custom_ = false;
    customIsSet_ = false;
    geoip_ = false;
    geoipIsSet_ = false;
    whiteblackip_ = false;
    whiteblackipIsSet_ = false;
    modulexEnabled_ = false;
    modulexEnabledIsSet_ = false;
}

WafPolicyOptions::~WafPolicyOptions() = default;

void WafPolicyOptions::validate()
{
}

web::json::value WafPolicyOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }
    if(customIsSet_) {
        val[utility::conversions::to_string_t("custom")] = ModelBase::toJson(custom_);
    }
    if(geoipIsSet_) {
        val[utility::conversions::to_string_t("geoip")] = ModelBase::toJson(geoip_);
    }
    if(whiteblackipIsSet_) {
        val[utility::conversions::to_string_t("whiteblackip")] = ModelBase::toJson(whiteblackip_);
    }
    if(modulexEnabledIsSet_) {
        val[utility::conversions::to_string_t("modulex_enabled")] = ModelBase::toJson(modulexEnabled_);
    }

    return val;
}
bool WafPolicyOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geoip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geoip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeoip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whiteblackip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whiteblackip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhiteblackip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modulex_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modulex_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulexEnabled(refVal);
        }
    }
    return ok;
}


bool WafPolicyOptions::isCc() const
{
    return cc_;
}

void WafPolicyOptions::setCc(bool value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool WafPolicyOptions::ccIsSet() const
{
    return ccIsSet_;
}

void WafPolicyOptions::unsetcc()
{
    ccIsSet_ = false;
}

bool WafPolicyOptions::isCustom() const
{
    return custom_;
}

void WafPolicyOptions::setCustom(bool value)
{
    custom_ = value;
    customIsSet_ = true;
}

bool WafPolicyOptions::customIsSet() const
{
    return customIsSet_;
}

void WafPolicyOptions::unsetcustom()
{
    customIsSet_ = false;
}

bool WafPolicyOptions::isGeoip() const
{
    return geoip_;
}

void WafPolicyOptions::setGeoip(bool value)
{
    geoip_ = value;
    geoipIsSet_ = true;
}

bool WafPolicyOptions::geoipIsSet() const
{
    return geoipIsSet_;
}

void WafPolicyOptions::unsetgeoip()
{
    geoipIsSet_ = false;
}

bool WafPolicyOptions::isWhiteblackip() const
{
    return whiteblackip_;
}

void WafPolicyOptions::setWhiteblackip(bool value)
{
    whiteblackip_ = value;
    whiteblackipIsSet_ = true;
}

bool WafPolicyOptions::whiteblackipIsSet() const
{
    return whiteblackipIsSet_;
}

void WafPolicyOptions::unsetwhiteblackip()
{
    whiteblackipIsSet_ = false;
}

bool WafPolicyOptions::isModulexEnabled() const
{
    return modulexEnabled_;
}

void WafPolicyOptions::setModulexEnabled(bool value)
{
    modulexEnabled_ = value;
    modulexEnabledIsSet_ = true;
}

bool WafPolicyOptions::modulexEnabledIsSet() const
{
    return modulexEnabledIsSet_;
}

void WafPolicyOptions::unsetmodulexEnabled()
{
    modulexEnabledIsSet_ = false;
}

}
}
}
}
}



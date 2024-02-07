

#include "huaweicloud/geip/v3/model/ListInternetBandwidthLimits.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthLimits::ListInternetBandwidthLimits()
{
    id_ = "";
    idIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    minSize_ = 0;
    minSizeIsSet_ = false;
    extLimitIsSet_ = false;
    maxSize_ = 0;
    maxSizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListInternetBandwidthLimits::~ListInternetBandwidthLimits() = default;

void ListInternetBandwidthLimits::validate()
{
}

web::json::value ListInternetBandwidthLimits::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(minSizeIsSet_) {
        val[utility::conversions::to_string_t("min_size")] = ModelBase::toJson(minSize_);
    }
    if(extLimitIsSet_) {
        val[utility::conversions::to_string_t("ext_limit")] = ModelBase::toJson(extLimit_);
    }
    if(maxSizeIsSet_) {
        val[utility::conversions::to_string_t("max_size")] = ModelBase::toJson(maxSize_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListInternetBandwidthLimits::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_limit"));
        if(!fieldValue.is_null())
        {
            ExtLimitPojo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListInternetBandwidthLimits::getId() const
{
    return id_;
}

void ListInternetBandwidthLimits::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInternetBandwidthLimits::idIsSet() const
{
    return idIsSet_;
}

void ListInternetBandwidthLimits::unsetid()
{
    idIsSet_ = false;
}

std::string ListInternetBandwidthLimits::getChargeMode() const
{
    return chargeMode_;
}

void ListInternetBandwidthLimits::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListInternetBandwidthLimits::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListInternetBandwidthLimits::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t ListInternetBandwidthLimits::getMinSize() const
{
    return minSize_;
}

void ListInternetBandwidthLimits::setMinSize(int32_t value)
{
    minSize_ = value;
    minSizeIsSet_ = true;
}

bool ListInternetBandwidthLimits::minSizeIsSet() const
{
    return minSizeIsSet_;
}

void ListInternetBandwidthLimits::unsetminSize()
{
    minSizeIsSet_ = false;
}

ExtLimitPojo ListInternetBandwidthLimits::getExtLimit() const
{
    return extLimit_;
}

void ListInternetBandwidthLimits::setExtLimit(const ExtLimitPojo& value)
{
    extLimit_ = value;
    extLimitIsSet_ = true;
}

bool ListInternetBandwidthLimits::extLimitIsSet() const
{
    return extLimitIsSet_;
}

void ListInternetBandwidthLimits::unsetextLimit()
{
    extLimitIsSet_ = false;
}

int32_t ListInternetBandwidthLimits::getMaxSize() const
{
    return maxSize_;
}

void ListInternetBandwidthLimits::setMaxSize(int32_t value)
{
    maxSize_ = value;
    maxSizeIsSet_ = true;
}

bool ListInternetBandwidthLimits::maxSizeIsSet() const
{
    return maxSizeIsSet_;
}

void ListInternetBandwidthLimits::unsetmaxSize()
{
    maxSizeIsSet_ = false;
}

std::string ListInternetBandwidthLimits::getType() const
{
    return type_;
}

void ListInternetBandwidthLimits::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInternetBandwidthLimits::typeIsSet() const
{
    return typeIsSet_;
}

void ListInternetBandwidthLimits::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



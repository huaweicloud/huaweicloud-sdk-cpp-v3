

#include "huaweicloud/geip/v3/model/UpdateInternetBandwidthRequestBody_internet_bandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateInternetBandwidthRequestBody_internet_bandwidth::UpdateInternetBandwidthRequestBody_internet_bandwidth()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
}

UpdateInternetBandwidthRequestBody_internet_bandwidth::~UpdateInternetBandwidthRequestBody_internet_bandwidth() = default;

void UpdateInternetBandwidthRequestBody_internet_bandwidth::validate()
{
}

web::json::value UpdateInternetBandwidthRequestBody_internet_bandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }

    return val;
}
bool UpdateInternetBandwidthRequestBody_internet_bandwidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
        }
    }
    return ok;
}


std::string UpdateInternetBandwidthRequestBody_internet_bandwidth::getName() const
{
    return name_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody_internet_bandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInternetBandwidthRequestBody_internet_bandwidth::getDescription() const
{
    return description_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody_internet_bandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateInternetBandwidthRequestBody_internet_bandwidth::getSize() const
{
    return size_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody_internet_bandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string UpdateInternetBandwidthRequestBody_internet_bandwidth::getChargeMode() const
{
    return chargeMode_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody_internet_bandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t UpdateInternetBandwidthRequestBody_internet_bandwidth::getIngressSize() const
{
    return ingressSize_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool UpdateInternetBandwidthRequestBody_internet_bandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void UpdateInternetBandwidthRequestBody_internet_bandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

}
}
}
}
}



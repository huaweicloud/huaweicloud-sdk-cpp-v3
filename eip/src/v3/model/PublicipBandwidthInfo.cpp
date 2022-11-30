

#include "huaweicloud/eip/v3/model/PublicipBandwidthInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipBandwidthInfo::PublicipBandwidthInfo()
{
    id_ = "";
    idIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
}

PublicipBandwidthInfo::~PublicipBandwidthInfo() = default;

void PublicipBandwidthInfo::validate()
{
}

web::json::value PublicipBandwidthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }

    return val;
}

bool PublicipBandwidthInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    return ok;
}


std::string PublicipBandwidthInfo::getId() const
{
    return id_;
}

void PublicipBandwidthInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipBandwidthInfo::idIsSet() const
{
    return idIsSet_;
}

void PublicipBandwidthInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t PublicipBandwidthInfo::getSize() const
{
    return size_;
}

void PublicipBandwidthInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PublicipBandwidthInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void PublicipBandwidthInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PublicipBandwidthInfo::getShareType() const
{
    return shareType_;
}

void PublicipBandwidthInfo::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool PublicipBandwidthInfo::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void PublicipBandwidthInfo::unsetshareType()
{
    shareTypeIsSet_ = false;
}

std::string PublicipBandwidthInfo::getChargeMode() const
{
    return chargeMode_;
}

void PublicipBandwidthInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool PublicipBandwidthInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void PublicipBandwidthInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string PublicipBandwidthInfo::getName() const
{
    return name_;
}

void PublicipBandwidthInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PublicipBandwidthInfo::nameIsSet() const
{
    return nameIsSet_;
}

void PublicipBandwidthInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string PublicipBandwidthInfo::getBillingInfo() const
{
    return billingInfo_;
}

void PublicipBandwidthInfo::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool PublicipBandwidthInfo::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void PublicipBandwidthInfo::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

}
}
}
}
}



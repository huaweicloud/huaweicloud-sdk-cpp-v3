

#include "huaweicloud/eip/v2/model/RemoveFromSharedBandwidthOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




RemoveFromSharedBandwidthOption::RemoveFromSharedBandwidthOption()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    publicipInfoIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

RemoveFromSharedBandwidthOption::~RemoveFromSharedBandwidthOption() = default;

void RemoveFromSharedBandwidthOption::validate()
{
}

web::json::value RemoveFromSharedBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(publicipInfoIsSet_) {
        val[utility::conversions::to_string_t("publicip_info")] = ModelBase::toJson(publicipInfo_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool RemoveFromSharedBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_info"));
        if(!fieldValue.is_null())
        {
            std::vector<RemovePublicipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipInfo(refVal);
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
    return ok;
}


std::string RemoveFromSharedBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void RemoveFromSharedBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool RemoveFromSharedBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void RemoveFromSharedBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::vector<RemovePublicipInfo>& RemoveFromSharedBandwidthOption::getPublicipInfo()
{
    return publicipInfo_;
}

void RemoveFromSharedBandwidthOption::setPublicipInfo(const std::vector<RemovePublicipInfo>& value)
{
    publicipInfo_ = value;
    publicipInfoIsSet_ = true;
}

bool RemoveFromSharedBandwidthOption::publicipInfoIsSet() const
{
    return publicipInfoIsSet_;
}

void RemoveFromSharedBandwidthOption::unsetpublicipInfo()
{
    publicipInfoIsSet_ = false;
}

int32_t RemoveFromSharedBandwidthOption::getSize() const
{
    return size_;
}

void RemoveFromSharedBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RemoveFromSharedBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void RemoveFromSharedBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}



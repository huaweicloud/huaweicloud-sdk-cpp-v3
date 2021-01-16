

#include "huaweicloud/eip/v2/model/UpdateBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdateBandwidthOption::UpdateBandwidthOption()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

UpdateBandwidthOption::~UpdateBandwidthOption() = default;

void UpdateBandwidthOption::validate()
{
}

web::json::value UpdateBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}

bool UpdateBandwidthOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateBandwidthOption::getName() const
{
    return name_;
}

void UpdateBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateBandwidthOption::getSize() const
{
    return size_;
}

void UpdateBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdateBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdateBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string UpdateBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void UpdateBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool UpdateBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void UpdateBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}



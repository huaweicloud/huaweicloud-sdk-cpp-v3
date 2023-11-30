

#include "huaweicloud/eip/v2/model/ModifyBandwidthOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ModifyBandwidthOption::ModifyBandwidthOption()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

ModifyBandwidthOption::~ModifyBandwidthOption() = default;

void ModifyBandwidthOption::validate()
{
}

web::json::value ModifyBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
bool ModifyBandwidthOption::fromJson(const web::json::value& val)
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


std::string ModifyBandwidthOption::getId() const
{
    return id_;
}

void ModifyBandwidthOption::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyBandwidthOption::idIsSet() const
{
    return idIsSet_;
}

void ModifyBandwidthOption::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyBandwidthOption::getName() const
{
    return name_;
}

void ModifyBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t ModifyBandwidthOption::getSize() const
{
    return size_;
}

void ModifyBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ModifyBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void ModifyBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ModifyBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void ModifyBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ModifyBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ModifyBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}



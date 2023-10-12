

#include "huaweicloud/eip/v3/model/DetachSharedbwDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachSharedbwDict::DetachSharedbwDict()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

DetachSharedbwDict::~DetachSharedbwDict() = default;

void DetachSharedbwDict::validate()
{
}

web::json::value DetachSharedbwDict::toJson() const
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
bool DetachSharedbwDict::fromJson(const web::json::value& val)
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


std::string DetachSharedbwDict::getName() const
{
    return name_;
}

void DetachSharedbwDict::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DetachSharedbwDict::nameIsSet() const
{
    return nameIsSet_;
}

void DetachSharedbwDict::unsetname()
{
    nameIsSet_ = false;
}

int32_t DetachSharedbwDict::getSize() const
{
    return size_;
}

void DetachSharedbwDict::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DetachSharedbwDict::sizeIsSet() const
{
    return sizeIsSet_;
}

void DetachSharedbwDict::unsetsize()
{
    sizeIsSet_ = false;
}

std::string DetachSharedbwDict::getChargeMode() const
{
    return chargeMode_;
}

void DetachSharedbwDict::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool DetachSharedbwDict::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void DetachSharedbwDict::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}



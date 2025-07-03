

#include "huaweicloud/ecs/v2/model/TemplateBandwidthOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateBandwidthOption::TemplateBandwidthOption()
{
    shareType_ = "";
    shareTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

TemplateBandwidthOption::~TemplateBandwidthOption() = default;

void TemplateBandwidthOption::validate()
{
}

web::json::value TemplateBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool TemplateBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string TemplateBandwidthOption::getShareType() const
{
    return shareType_;
}

void TemplateBandwidthOption::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool TemplateBandwidthOption::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void TemplateBandwidthOption::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t TemplateBandwidthOption::getSize() const
{
    return size_;
}

void TemplateBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool TemplateBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void TemplateBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string TemplateBandwidthOption::getChargeMode() const
{
    return chargeMode_;
}

void TemplateBandwidthOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool TemplateBandwidthOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void TemplateBandwidthOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string TemplateBandwidthOption::getId() const
{
    return id_;
}

void TemplateBandwidthOption::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TemplateBandwidthOption::idIsSet() const
{
    return idIsSet_;
}

void TemplateBandwidthOption::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



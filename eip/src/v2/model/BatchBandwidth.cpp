

#include "huaweicloud/eip/v2/model/BatchBandwidth.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchBandwidth::BatchBandwidth()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    shareType_ = "";
    shareTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

BatchBandwidth::~BatchBandwidth() = default;

void BatchBandwidth::validate()
{
}

web::json::value BatchBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(shareTypeIsSet_) {
        val[utility::conversions::to_string_t("share_type")] = ModelBase::toJson(shareType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool BatchBandwidth::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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

std::string BatchBandwidth::getChargeMode() const
{
    return chargeMode_;
}

void BatchBandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BatchBandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BatchBandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BatchBandwidth::getName() const
{
    return name_;
}

void BatchBandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchBandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void BatchBandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchBandwidth::getShareType() const
{
    return shareType_;
}

void BatchBandwidth::setShareType(const std::string& value)
{
    shareType_ = value;
    shareTypeIsSet_ = true;
}

bool BatchBandwidth::shareTypeIsSet() const
{
    return shareTypeIsSet_;
}

void BatchBandwidth::unsetshareType()
{
    shareTypeIsSet_ = false;
}

int32_t BatchBandwidth::getSize() const
{
    return size_;
}

void BatchBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchBandwidth::getId() const
{
    return id_;
}

void BatchBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchBandwidth::idIsSet() const
{
    return idIsSet_;
}

void BatchBandwidth::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



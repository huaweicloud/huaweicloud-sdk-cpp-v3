

#include "huaweicloud/ecs/v2/model/PrePaidServerEipBandwidth.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerEipBandwidth::PrePaidServerEipBandwidth()
{
    size_ = 0;
    sizeIsSet_ = false;
    sharetype_ = "";
    sharetypeIsSet_ = false;
    chargemode_ = "";
    chargemodeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

PrePaidServerEipBandwidth::~PrePaidServerEipBandwidth() = default;

void PrePaidServerEipBandwidth::validate()
{
}

web::json::value PrePaidServerEipBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sharetypeIsSet_) {
        val[utility::conversions::to_string_t("sharetype")] = ModelBase::toJson(sharetype_);
    }
    if(chargemodeIsSet_) {
        val[utility::conversions::to_string_t("chargemode")] = ModelBase::toJson(chargemode_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool PrePaidServerEipBandwidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sharetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sharetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chargemode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargemode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargemode(refVal);
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


int32_t PrePaidServerEipBandwidth::getSize() const
{
    return size_;
}

void PrePaidServerEipBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PrePaidServerEipBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void PrePaidServerEipBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PrePaidServerEipBandwidth::getSharetype() const
{
    return sharetype_;
}

void PrePaidServerEipBandwidth::setSharetype(const std::string& value)
{
    sharetype_ = value;
    sharetypeIsSet_ = true;
}

bool PrePaidServerEipBandwidth::sharetypeIsSet() const
{
    return sharetypeIsSet_;
}

void PrePaidServerEipBandwidth::unsetsharetype()
{
    sharetypeIsSet_ = false;
}

std::string PrePaidServerEipBandwidth::getChargemode() const
{
    return chargemode_;
}

void PrePaidServerEipBandwidth::setChargemode(const std::string& value)
{
    chargemode_ = value;
    chargemodeIsSet_ = true;
}

bool PrePaidServerEipBandwidth::chargemodeIsSet() const
{
    return chargemodeIsSet_;
}

void PrePaidServerEipBandwidth::unsetchargemode()
{
    chargemodeIsSet_ = false;
}

std::string PrePaidServerEipBandwidth::getId() const
{
    return id_;
}

void PrePaidServerEipBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrePaidServerEipBandwidth::idIsSet() const
{
    return idIsSet_;
}

void PrePaidServerEipBandwidth::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



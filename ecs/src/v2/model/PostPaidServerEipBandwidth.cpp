

#include "huaweicloud/ecs/v2/model/PostPaidServerEipBandwidth.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerEipBandwidth::PostPaidServerEipBandwidth()
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

PostPaidServerEipBandwidth::~PostPaidServerEipBandwidth() = default;

void PostPaidServerEipBandwidth::validate()
{
}

web::json::value PostPaidServerEipBandwidth::toJson() const
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

bool PostPaidServerEipBandwidth::fromJson(const web::json::value& val)
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


int32_t PostPaidServerEipBandwidth::getSize() const
{
    return size_;
}

void PostPaidServerEipBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PostPaidServerEipBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void PostPaidServerEipBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PostPaidServerEipBandwidth::getSharetype() const
{
    return sharetype_;
}

void PostPaidServerEipBandwidth::setSharetype(const std::string& value)
{
    sharetype_ = value;
    sharetypeIsSet_ = true;
}

bool PostPaidServerEipBandwidth::sharetypeIsSet() const
{
    return sharetypeIsSet_;
}

void PostPaidServerEipBandwidth::unsetsharetype()
{
    sharetypeIsSet_ = false;
}

std::string PostPaidServerEipBandwidth::getChargemode() const
{
    return chargemode_;
}

void PostPaidServerEipBandwidth::setChargemode(const std::string& value)
{
    chargemode_ = value;
    chargemodeIsSet_ = true;
}

bool PostPaidServerEipBandwidth::chargemodeIsSet() const
{
    return chargemodeIsSet_;
}

void PostPaidServerEipBandwidth::unsetchargemode()
{
    chargemodeIsSet_ = false;
}

std::string PostPaidServerEipBandwidth::getId() const
{
    return id_;
}

void PostPaidServerEipBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostPaidServerEipBandwidth::idIsSet() const
{
    return idIsSet_;
}

void PostPaidServerEipBandwidth::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}



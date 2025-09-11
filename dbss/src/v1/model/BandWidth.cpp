

#include "huaweicloud/dbss/v1/model/BandWidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BandWidth::BandWidth()
{
    chargemode_ = "";
    chargemodeIsSet_ = false;
    productid_ = "";
    productidIsSet_ = false;
    sharetype_ = "";
    sharetypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

BandWidth::~BandWidth() = default;

void BandWidth::validate()
{
}

web::json::value BandWidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargemodeIsSet_) {
        val[utility::conversions::to_string_t("chargemode")] = ModelBase::toJson(chargemode_);
    }
    if(productidIsSet_) {
        val[utility::conversions::to_string_t("productid")] = ModelBase::toJson(productid_);
    }
    if(sharetypeIsSet_) {
        val[utility::conversions::to_string_t("sharetype")] = ModelBase::toJson(sharetype_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool BandWidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chargemode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargemode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargemode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("productid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("productid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductid(refVal);
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


std::string BandWidth::getChargemode() const
{
    return chargemode_;
}

void BandWidth::setChargemode(const std::string& value)
{
    chargemode_ = value;
    chargemodeIsSet_ = true;
}

bool BandWidth::chargemodeIsSet() const
{
    return chargemodeIsSet_;
}

void BandWidth::unsetchargemode()
{
    chargemodeIsSet_ = false;
}

std::string BandWidth::getProductid() const
{
    return productid_;
}

void BandWidth::setProductid(const std::string& value)
{
    productid_ = value;
    productidIsSet_ = true;
}

bool BandWidth::productidIsSet() const
{
    return productidIsSet_;
}

void BandWidth::unsetproductid()
{
    productidIsSet_ = false;
}

std::string BandWidth::getSharetype() const
{
    return sharetype_;
}

void BandWidth::setSharetype(const std::string& value)
{
    sharetype_ = value;
    sharetypeIsSet_ = true;
}

bool BandWidth::sharetypeIsSet() const
{
    return sharetypeIsSet_;
}

void BandWidth::unsetsharetype()
{
    sharetypeIsSet_ = false;
}

int32_t BandWidth::getSize() const
{
    return size_;
}

void BandWidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BandWidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void BandWidth::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}



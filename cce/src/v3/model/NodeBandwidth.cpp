

#include "huaweicloud/cce/v3/model/NodeBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeBandwidth::NodeBandwidth()
{
    chargemode_ = "";
    chargemodeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    sharetype_ = "";
    sharetypeIsSet_ = false;
}

NodeBandwidth::~NodeBandwidth() = default;

void NodeBandwidth::validate()
{
}

web::json::value NodeBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargemodeIsSet_) {
        val[utility::conversions::to_string_t("chargemode")] = ModelBase::toJson(chargemode_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sharetypeIsSet_) {
        val[utility::conversions::to_string_t("sharetype")] = ModelBase::toJson(sharetype_);
    }

    return val;
}
bool NodeBandwidth::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NodeBandwidth::getChargemode() const
{
    return chargemode_;
}

void NodeBandwidth::setChargemode(const std::string& value)
{
    chargemode_ = value;
    chargemodeIsSet_ = true;
}

bool NodeBandwidth::chargemodeIsSet() const
{
    return chargemodeIsSet_;
}

void NodeBandwidth::unsetchargemode()
{
    chargemodeIsSet_ = false;
}

int32_t NodeBandwidth::getSize() const
{
    return size_;
}

void NodeBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool NodeBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void NodeBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string NodeBandwidth::getSharetype() const
{
    return sharetype_;
}

void NodeBandwidth::setSharetype(const std::string& value)
{
    sharetype_ = value;
    sharetypeIsSet_ = true;
}

bool NodeBandwidth::sharetypeIsSet() const
{
    return sharetypeIsSet_;
}

void NodeBandwidth::unsetsharetype()
{
    sharetypeIsSet_ = false;
}

}
}
}
}
}



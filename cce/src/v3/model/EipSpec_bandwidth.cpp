

#include "huaweicloud/cce/v3/model/EipSpec_bandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




EipSpec_bandwidth::EipSpec_bandwidth()
{
    size_ = 0;
    sizeIsSet_ = false;
    sharetype_ = "";
    sharetypeIsSet_ = false;
}

EipSpec_bandwidth::~EipSpec_bandwidth() = default;

void EipSpec_bandwidth::validate()
{
}

web::json::value EipSpec_bandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sharetypeIsSet_) {
        val[utility::conversions::to_string_t("sharetype")] = ModelBase::toJson(sharetype_);
    }

    return val;
}
bool EipSpec_bandwidth::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t EipSpec_bandwidth::getSize() const
{
    return size_;
}

void EipSpec_bandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool EipSpec_bandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void EipSpec_bandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string EipSpec_bandwidth::getSharetype() const
{
    return sharetype_;
}

void EipSpec_bandwidth::setSharetype(const std::string& value)
{
    sharetype_ = value;
    sharetypeIsSet_ = true;
}

bool EipSpec_bandwidth::sharetypeIsSet() const
{
    return sharetypeIsSet_;
}

void EipSpec_bandwidth::unsetsharetype()
{
    sharetypeIsSet_ = false;
}

}
}
}
}
}



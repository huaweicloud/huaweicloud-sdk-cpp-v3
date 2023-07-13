

#include "huaweicloud/ecs/v2/model/PostPaidServerEip.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerEip::PostPaidServerEip()
{
    iptype_ = "";
    iptypeIsSet_ = false;
    bandwidthIsSet_ = false;
    extendparamIsSet_ = false;
}

PostPaidServerEip::~PostPaidServerEip() = default;

void PostPaidServerEip::validate()
{
}

web::json::value PostPaidServerEip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iptypeIsSet_) {
        val[utility::conversions::to_string_t("iptype")] = ModelBase::toJson(iptype_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }

    return val;
}

bool PostPaidServerEip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iptype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iptype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIptype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            PostPaidServerEipBandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PostPaidServerEipExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    return ok;
}

std::string PostPaidServerEip::getIptype() const
{
    return iptype_;
}

void PostPaidServerEip::setIptype(const std::string& value)
{
    iptype_ = value;
    iptypeIsSet_ = true;
}

bool PostPaidServerEip::iptypeIsSet() const
{
    return iptypeIsSet_;
}

void PostPaidServerEip::unsetiptype()
{
    iptypeIsSet_ = false;
}

PostPaidServerEipBandwidth PostPaidServerEip::getBandwidth() const
{
    return bandwidth_;
}

void PostPaidServerEip::setBandwidth(const PostPaidServerEipBandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PostPaidServerEip::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PostPaidServerEip::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

PostPaidServerEipExtendParam PostPaidServerEip::getExtendparam() const
{
    return extendparam_;
}

void PostPaidServerEip::setExtendparam(const PostPaidServerEipExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PostPaidServerEip::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PostPaidServerEip::unsetextendparam()
{
    extendparamIsSet_ = false;
}

}
}
}
}
}



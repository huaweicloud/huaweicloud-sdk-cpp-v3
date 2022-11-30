

#include "huaweicloud/ecs/v2/model/PrePaidServerEip.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerEip::PrePaidServerEip()
{
    iptype_ = "";
    iptypeIsSet_ = false;
    bandwidthIsSet_ = false;
    extendparamIsSet_ = false;
}

PrePaidServerEip::~PrePaidServerEip() = default;

void PrePaidServerEip::validate()
{
}

web::json::value PrePaidServerEip::toJson() const
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

bool PrePaidServerEip::fromJson(const web::json::value& val)
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
            PrePaidServerEipBandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PrePaidServerEipExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerEip::getIptype() const
{
    return iptype_;
}

void PrePaidServerEip::setIptype(const std::string& value)
{
    iptype_ = value;
    iptypeIsSet_ = true;
}

bool PrePaidServerEip::iptypeIsSet() const
{
    return iptypeIsSet_;
}

void PrePaidServerEip::unsetiptype()
{
    iptypeIsSet_ = false;
}

PrePaidServerEipBandwidth PrePaidServerEip::getBandwidth() const
{
    return bandwidth_;
}

void PrePaidServerEip::setBandwidth(const PrePaidServerEipBandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PrePaidServerEip::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PrePaidServerEip::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

PrePaidServerEipExtendParam PrePaidServerEip::getExtendparam() const
{
    return extendparam_;
}

void PrePaidServerEip::setExtendparam(const PrePaidServerEipExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PrePaidServerEip::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PrePaidServerEip::unsetextendparam()
{
    extendparamIsSet_ = false;
}

}
}
}
}
}



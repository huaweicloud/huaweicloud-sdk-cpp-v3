

#include "huaweicloud/dbss/v1/model/EIP.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




EIP::EIP()
{
    bandwidthIsSet_ = false;
    ipproductid_ = "";
    ipproductidIsSet_ = false;
    iptype_ = "";
    iptypeIsSet_ = false;
}

EIP::~EIP() = default;

void EIP::validate()
{
}

web::json::value EIP::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(ipproductidIsSet_) {
        val[utility::conversions::to_string_t("ipproductid")] = ModelBase::toJson(ipproductid_);
    }
    if(iptypeIsSet_) {
        val[utility::conversions::to_string_t("iptype")] = ModelBase::toJson(iptype_);
    }

    return val;
}
bool EIP::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BandWidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipproductid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipproductid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpproductid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iptype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iptype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIptype(refVal);
        }
    }
    return ok;
}


BandWidth EIP::getBandwidth() const
{
    return bandwidth_;
}

void EIP::setBandwidth(const BandWidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool EIP::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void EIP::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string EIP::getIpproductid() const
{
    return ipproductid_;
}

void EIP::setIpproductid(const std::string& value)
{
    ipproductid_ = value;
    ipproductidIsSet_ = true;
}

bool EIP::ipproductidIsSet() const
{
    return ipproductidIsSet_;
}

void EIP::unsetipproductid()
{
    ipproductidIsSet_ = false;
}

std::string EIP::getIptype() const
{
    return iptype_;
}

void EIP::setIptype(const std::string& value)
{
    iptype_ = value;
    iptypeIsSet_ = true;
}

bool EIP::iptypeIsSet() const
{
    return iptypeIsSet_;
}

void EIP::unsetiptype()
{
    iptypeIsSet_ = false;
}

}
}
}
}
}



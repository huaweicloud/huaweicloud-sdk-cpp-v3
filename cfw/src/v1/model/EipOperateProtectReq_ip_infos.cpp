

#include "huaweicloud/cfw/v1/model/EipOperateProtectReq_ip_infos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipOperateProtectReq_ip_infos::EipOperateProtectReq_ip_infos()
{
    id_ = "";
    idIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpv6_ = "";
    publicIpv6IsSet_ = false;
}

EipOperateProtectReq_ip_infos::~EipOperateProtectReq_ip_infos() = default;

void EipOperateProtectReq_ip_infos::validate()
{
}

web::json::value EipOperateProtectReq_ip_infos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpv6IsSet_) {
        val[utility::conversions::to_string_t("public_ipv6")] = ModelBase::toJson(publicIpv6_);
    }

    return val;
}
bool EipOperateProtectReq_ip_infos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6(refVal);
        }
    }
    return ok;
}


std::string EipOperateProtectReq_ip_infos::getId() const
{
    return id_;
}

void EipOperateProtectReq_ip_infos::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EipOperateProtectReq_ip_infos::idIsSet() const
{
    return idIsSet_;
}

void EipOperateProtectReq_ip_infos::unsetid()
{
    idIsSet_ = false;
}

std::string EipOperateProtectReq_ip_infos::getPublicIp() const
{
    return publicIp_;
}

void EipOperateProtectReq_ip_infos::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool EipOperateProtectReq_ip_infos::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void EipOperateProtectReq_ip_infos::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string EipOperateProtectReq_ip_infos::getPublicIpv6() const
{
    return publicIpv6_;
}

void EipOperateProtectReq_ip_infos::setPublicIpv6(const std::string& value)
{
    publicIpv6_ = value;
    publicIpv6IsSet_ = true;
}

bool EipOperateProtectReq_ip_infos::publicIpv6IsSet() const
{
    return publicIpv6IsSet_;
}

void EipOperateProtectReq_ip_infos::unsetpublicIpv6()
{
    publicIpv6IsSet_ = false;
}

}
}
}
}
}



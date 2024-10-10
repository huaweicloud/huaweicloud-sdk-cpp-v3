

#include "huaweicloud/aad/v2/model/Ips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




Ips::Ips()
{
    ipId_ = "";
    ipIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    dataCenter_ = "";
    dataCenterIsSet_ = false;
    foreignSwitchStatus_ = 0;
    foreignSwitchStatusIsSet_ = false;
    udpSwitchStatus_ = 0;
    udpSwitchStatusIsSet_ = false;
}

Ips::~Ips() = default;

void Ips::validate()
{
}

web::json::value Ips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(dataCenterIsSet_) {
        val[utility::conversions::to_string_t("data_center")] = ModelBase::toJson(dataCenter_);
    }
    if(foreignSwitchStatusIsSet_) {
        val[utility::conversions::to_string_t("foreign_switch_status")] = ModelBase::toJson(foreignSwitchStatus_);
    }
    if(udpSwitchStatusIsSet_) {
        val[utility::conversions::to_string_t("udp_switch_status")] = ModelBase::toJson(udpSwitchStatus_);
    }

    return val;
}
bool Ips::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_center"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_center"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCenter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("foreign_switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("foreign_switch_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForeignSwitchStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("udp_switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("udp_switch_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUdpSwitchStatus(refVal);
        }
    }
    return ok;
}


std::string Ips::getIpId() const
{
    return ipId_;
}

void Ips::setIpId(const std::string& value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool Ips::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void Ips::unsetipId()
{
    ipIdIsSet_ = false;
}

std::string Ips::getIp() const
{
    return ip_;
}

void Ips::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool Ips::ipIsSet() const
{
    return ipIsSet_;
}

void Ips::unsetip()
{
    ipIsSet_ = false;
}

std::string Ips::getIsp() const
{
    return isp_;
}

void Ips::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool Ips::ispIsSet() const
{
    return ispIsSet_;
}

void Ips::unsetisp()
{
    ispIsSet_ = false;
}

std::string Ips::getDataCenter() const
{
    return dataCenter_;
}

void Ips::setDataCenter(const std::string& value)
{
    dataCenter_ = value;
    dataCenterIsSet_ = true;
}

bool Ips::dataCenterIsSet() const
{
    return dataCenterIsSet_;
}

void Ips::unsetdataCenter()
{
    dataCenterIsSet_ = false;
}

int32_t Ips::getForeignSwitchStatus() const
{
    return foreignSwitchStatus_;
}

void Ips::setForeignSwitchStatus(int32_t value)
{
    foreignSwitchStatus_ = value;
    foreignSwitchStatusIsSet_ = true;
}

bool Ips::foreignSwitchStatusIsSet() const
{
    return foreignSwitchStatusIsSet_;
}

void Ips::unsetforeignSwitchStatus()
{
    foreignSwitchStatusIsSet_ = false;
}

int32_t Ips::getUdpSwitchStatus() const
{
    return udpSwitchStatus_;
}

void Ips::setUdpSwitchStatus(int32_t value)
{
    udpSwitchStatus_ = value;
    udpSwitchStatusIsSet_ = true;
}

bool Ips::udpSwitchStatusIsSet() const
{
    return udpSwitchStatusIsSet_;
}

void Ips::unsetudpSwitchStatus()
{
    udpSwitchStatusIsSet_ = false;
}

}
}
}
}
}



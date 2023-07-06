

#include "huaweicloud/cfw/v1/model/DnsServersResponseDTO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DnsServersResponseDTO::DnsServersResponseDTO()
{
    id_ = 0;
    idIsSet_ = false;
    isApplied_ = 0;
    isAppliedIsSet_ = false;
    isCustomized_ = 0;
    isCustomizedIsSet_ = false;
    serverIp_ = "";
    serverIpIsSet_ = false;
}

DnsServersResponseDTO::~DnsServersResponseDTO() = default;

void DnsServersResponseDTO::validate()
{
}

web::json::value DnsServersResponseDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isAppliedIsSet_) {
        val[utility::conversions::to_string_t("is_applied")] = ModelBase::toJson(isApplied_);
    }
    if(isCustomizedIsSet_) {
        val[utility::conversions::to_string_t("is_customized")] = ModelBase::toJson(isCustomized_);
    }
    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }

    return val;
}

bool DnsServersResponseDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_applied"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_applied"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsApplied(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_customized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_customized"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCustomized(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIp(refVal);
        }
    }
    return ok;
}

int32_t DnsServersResponseDTO::getId() const
{
    return id_;
}

void DnsServersResponseDTO::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DnsServersResponseDTO::idIsSet() const
{
    return idIsSet_;
}

void DnsServersResponseDTO::unsetid()
{
    idIsSet_ = false;
}

int32_t DnsServersResponseDTO::getIsApplied() const
{
    return isApplied_;
}

void DnsServersResponseDTO::setIsApplied(int32_t value)
{
    isApplied_ = value;
    isAppliedIsSet_ = true;
}

bool DnsServersResponseDTO::isAppliedIsSet() const
{
    return isAppliedIsSet_;
}

void DnsServersResponseDTO::unsetisApplied()
{
    isAppliedIsSet_ = false;
}

int32_t DnsServersResponseDTO::getIsCustomized() const
{
    return isCustomized_;
}

void DnsServersResponseDTO::setIsCustomized(int32_t value)
{
    isCustomized_ = value;
    isCustomizedIsSet_ = true;
}

bool DnsServersResponseDTO::isCustomizedIsSet() const
{
    return isCustomizedIsSet_;
}

void DnsServersResponseDTO::unsetisCustomized()
{
    isCustomizedIsSet_ = false;
}

std::string DnsServersResponseDTO::getServerIp() const
{
    return serverIp_;
}

void DnsServersResponseDTO::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool DnsServersResponseDTO::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void DnsServersResponseDTO::unsetserverIp()
{
    serverIpIsSet_ = false;
}

}
}
}
}
}



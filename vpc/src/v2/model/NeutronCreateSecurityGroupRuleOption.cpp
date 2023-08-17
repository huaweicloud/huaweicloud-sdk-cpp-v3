

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRuleOption::NeutronCreateSecurityGroupRuleOption()
{
    description_ = "";
    descriptionIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    ethertype_ = "";
    ethertypeIsSet_ = false;
    portRangeMax_ = 0;
    portRangeMaxIsSet_ = false;
    portRangeMin_ = 0;
    portRangeMinIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    remoteGroupId_ = "";
    remoteGroupIdIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
    remoteAddressGroupId_ = "";
    remoteAddressGroupIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

NeutronCreateSecurityGroupRuleOption::~NeutronCreateSecurityGroupRuleOption() = default;

void NeutronCreateSecurityGroupRuleOption::validate()
{
}

web::json::value NeutronCreateSecurityGroupRuleOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(ethertypeIsSet_) {
        val[utility::conversions::to_string_t("ethertype")] = ModelBase::toJson(ethertype_);
    }
    if(portRangeMaxIsSet_) {
        val[utility::conversions::to_string_t("port_range_max")] = ModelBase::toJson(portRangeMax_);
    }
    if(portRangeMinIsSet_) {
        val[utility::conversions::to_string_t("port_range_min")] = ModelBase::toJson(portRangeMin_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(remoteGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_group_id")] = ModelBase::toJson(remoteGroupId_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }
    if(remoteAddressGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_address_group_id")] = ModelBase::toJson(remoteAddressGroupId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool NeutronCreateSecurityGroupRuleOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethertype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthertype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_ip_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_ip_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteIpPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_address_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_address_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAddressGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}

std::string NeutronCreateSecurityGroupRuleOption::getDescription() const
{
    return description_;
}

void NeutronCreateSecurityGroupRuleOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getDirection() const
{
    return direction_;
}

void NeutronCreateSecurityGroupRuleOption::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::directionIsSet() const
{
    return directionIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetdirection()
{
    directionIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getEthertype() const
{
    return ethertype_;
}

void NeutronCreateSecurityGroupRuleOption::setEthertype(const std::string& value)
{
    ethertype_ = value;
    ethertypeIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::ethertypeIsSet() const
{
    return ethertypeIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetethertype()
{
    ethertypeIsSet_ = false;
}

int32_t NeutronCreateSecurityGroupRuleOption::getPortRangeMax() const
{
    return portRangeMax_;
}

void NeutronCreateSecurityGroupRuleOption::setPortRangeMax(int32_t value)
{
    portRangeMax_ = value;
    portRangeMaxIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::portRangeMaxIsSet() const
{
    return portRangeMaxIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetportRangeMax()
{
    portRangeMaxIsSet_ = false;
}

int32_t NeutronCreateSecurityGroupRuleOption::getPortRangeMin() const
{
    return portRangeMin_;
}

void NeutronCreateSecurityGroupRuleOption::setPortRangeMin(int32_t value)
{
    portRangeMin_ = value;
    portRangeMinIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::portRangeMinIsSet() const
{
    return portRangeMinIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetportRangeMin()
{
    portRangeMinIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getProtocol() const
{
    return protocol_;
}

void NeutronCreateSecurityGroupRuleOption::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getRemoteGroupId() const
{
    return remoteGroupId_;
}

void NeutronCreateSecurityGroupRuleOption::setRemoteGroupId(const std::string& value)
{
    remoteGroupId_ = value;
    remoteGroupIdIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::remoteGroupIdIsSet() const
{
    return remoteGroupIdIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetremoteGroupId()
{
    remoteGroupIdIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void NeutronCreateSecurityGroupRuleOption::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getRemoteAddressGroupId() const
{
    return remoteAddressGroupId_;
}

void NeutronCreateSecurityGroupRuleOption::setRemoteAddressGroupId(const std::string& value)
{
    remoteAddressGroupId_ = value;
    remoteAddressGroupIdIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::remoteAddressGroupIdIsSet() const
{
    return remoteAddressGroupIdIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetremoteAddressGroupId()
{
    remoteAddressGroupIdIsSet_ = false;
}

std::string NeutronCreateSecurityGroupRuleOption::getSecurityGroupId() const
{
    return securityGroupId_;
}

void NeutronCreateSecurityGroupRuleOption::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleOption::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void NeutronCreateSecurityGroupRuleOption::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}



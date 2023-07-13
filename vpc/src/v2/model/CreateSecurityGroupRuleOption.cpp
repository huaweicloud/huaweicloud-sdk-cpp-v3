

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupRuleOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRuleOption::CreateSecurityGroupRuleOption()
{
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    ethertype_ = "";
    ethertypeIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    portRangeMin_ = 0;
    portRangeMinIsSet_ = false;
    portRangeMax_ = 0;
    portRangeMaxIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
    remoteGroupId_ = "";
    remoteGroupIdIsSet_ = false;
}

CreateSecurityGroupRuleOption::~CreateSecurityGroupRuleOption() = default;

void CreateSecurityGroupRuleOption::validate()
{
}

web::json::value CreateSecurityGroupRuleOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(ethertypeIsSet_) {
        val[utility::conversions::to_string_t("ethertype")] = ModelBase::toJson(ethertype_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(portRangeMinIsSet_) {
        val[utility::conversions::to_string_t("port_range_min")] = ModelBase::toJson(portRangeMin_);
    }
    if(portRangeMaxIsSet_) {
        val[utility::conversions::to_string_t("port_range_max")] = ModelBase::toJson(portRangeMax_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }
    if(remoteGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_group_id")] = ModelBase::toJson(remoteGroupId_);
    }

    return val;
}

bool CreateSecurityGroupRuleOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_range_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMax(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remote_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteGroupId(refVal);
        }
    }
    return ok;
}

std::string CreateSecurityGroupRuleOption::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateSecurityGroupRuleOption::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateSecurityGroupRuleOption::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getDescription() const
{
    return description_;
}

void CreateSecurityGroupRuleOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSecurityGroupRuleOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getDirection() const
{
    return direction_;
}

void CreateSecurityGroupRuleOption::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::directionIsSet() const
{
    return directionIsSet_;
}

void CreateSecurityGroupRuleOption::unsetdirection()
{
    directionIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getEthertype() const
{
    return ethertype_;
}

void CreateSecurityGroupRuleOption::setEthertype(const std::string& value)
{
    ethertype_ = value;
    ethertypeIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::ethertypeIsSet() const
{
    return ethertypeIsSet_;
}

void CreateSecurityGroupRuleOption::unsetethertype()
{
    ethertypeIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getProtocol() const
{
    return protocol_;
}

void CreateSecurityGroupRuleOption::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::protocolIsSet() const
{
    return protocolIsSet_;
}

void CreateSecurityGroupRuleOption::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CreateSecurityGroupRuleOption::getPortRangeMin() const
{
    return portRangeMin_;
}

void CreateSecurityGroupRuleOption::setPortRangeMin(int32_t value)
{
    portRangeMin_ = value;
    portRangeMinIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::portRangeMinIsSet() const
{
    return portRangeMinIsSet_;
}

void CreateSecurityGroupRuleOption::unsetportRangeMin()
{
    portRangeMinIsSet_ = false;
}

int32_t CreateSecurityGroupRuleOption::getPortRangeMax() const
{
    return portRangeMax_;
}

void CreateSecurityGroupRuleOption::setPortRangeMax(int32_t value)
{
    portRangeMax_ = value;
    portRangeMaxIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::portRangeMaxIsSet() const
{
    return portRangeMaxIsSet_;
}

void CreateSecurityGroupRuleOption::unsetportRangeMax()
{
    portRangeMaxIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void CreateSecurityGroupRuleOption::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void CreateSecurityGroupRuleOption::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

std::string CreateSecurityGroupRuleOption::getRemoteGroupId() const
{
    return remoteGroupId_;
}

void CreateSecurityGroupRuleOption::setRemoteGroupId(const std::string& value)
{
    remoteGroupId_ = value;
    remoteGroupIdIsSet_ = true;
}

bool CreateSecurityGroupRuleOption::remoteGroupIdIsSet() const
{
    return remoteGroupIdIsSet_;
}

void CreateSecurityGroupRuleOption::unsetremoteGroupId()
{
    remoteGroupIdIsSet_ = false;
}

}
}
}
}
}



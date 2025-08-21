

#include "huaweicloud/cfw/v1/model/CustomerIpsListVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CustomerIpsListVO::CustomerIpsListVO()
{
    action_ = 0;
    actionIsSet_ = false;
    affectedOs_ = 0;
    affectedOsIsSet_ = false;
    attackType_ = 0;
    attackTypeIsSet_ = false;
    configStatus_ = 0;
    configStatusIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    dstPortType_ = 0;
    dstPortTypeIsSet_ = false;
    dstPorts_ = "";
    dstPortsIsSet_ = false;
    ipsCfwId_ = "";
    ipsCfwIdIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    ipsName_ = "";
    ipsNameIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    severity_ = 0;
    severityIsSet_ = false;
    software_ = 0;
    softwareIsSet_ = false;
    srcPortType_ = 0;
    srcPortTypeIsSet_ = false;
    srcPorts_ = "";
    srcPortsIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

CustomerIpsListVO::~CustomerIpsListVO() = default;

void CustomerIpsListVO::validate()
{
}

web::json::value CustomerIpsListVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(affectedOsIsSet_) {
        val[utility::conversions::to_string_t("affected_os")] = ModelBase::toJson(affectedOs_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
    }
    if(configStatusIsSet_) {
        val[utility::conversions::to_string_t("config_status")] = ModelBase::toJson(configStatus_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(dstPortTypeIsSet_) {
        val[utility::conversions::to_string_t("dst_port_type")] = ModelBase::toJson(dstPortType_);
    }
    if(dstPortsIsSet_) {
        val[utility::conversions::to_string_t("dst_ports")] = ModelBase::toJson(dstPorts_);
    }
    if(ipsCfwIdIsSet_) {
        val[utility::conversions::to_string_t("ips_cfw_id")] = ModelBase::toJson(ipsCfwId_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(ipsNameIsSet_) {
        val[utility::conversions::to_string_t("ips_name")] = ModelBase::toJson(ipsName_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(softwareIsSet_) {
        val[utility::conversions::to_string_t("software")] = ModelBase::toJson(software_);
    }
    if(srcPortTypeIsSet_) {
        val[utility::conversions::to_string_t("src_port_type")] = ModelBase::toJson(srcPortType_);
    }
    if(srcPortsIsSet_) {
        val[utility::conversions::to_string_t("src_ports")] = ModelBase::toJson(srcPorts_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool CustomerIpsListVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affected_os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_os"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_ports"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_cfw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_cfw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsCfwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("software"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("software"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSoftware(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_port_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_ports"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


int32_t CustomerIpsListVO::getAction() const
{
    return action_;
}

void CustomerIpsListVO::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CustomerIpsListVO::actionIsSet() const
{
    return actionIsSet_;
}

void CustomerIpsListVO::unsetaction()
{
    actionIsSet_ = false;
}

int32_t CustomerIpsListVO::getAffectedOs() const
{
    return affectedOs_;
}

void CustomerIpsListVO::setAffectedOs(int32_t value)
{
    affectedOs_ = value;
    affectedOsIsSet_ = true;
}

bool CustomerIpsListVO::affectedOsIsSet() const
{
    return affectedOsIsSet_;
}

void CustomerIpsListVO::unsetaffectedOs()
{
    affectedOsIsSet_ = false;
}

int32_t CustomerIpsListVO::getAttackType() const
{
    return attackType_;
}

void CustomerIpsListVO::setAttackType(int32_t value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool CustomerIpsListVO::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void CustomerIpsListVO::unsetattackType()
{
    attackTypeIsSet_ = false;
}

int32_t CustomerIpsListVO::getConfigStatus() const
{
    return configStatus_;
}

void CustomerIpsListVO::setConfigStatus(int32_t value)
{
    configStatus_ = value;
    configStatusIsSet_ = true;
}

bool CustomerIpsListVO::configStatusIsSet() const
{
    return configStatusIsSet_;
}

void CustomerIpsListVO::unsetconfigStatus()
{
    configStatusIsSet_ = false;
}

std::string CustomerIpsListVO::getContent() const
{
    return content_;
}

void CustomerIpsListVO::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CustomerIpsListVO::contentIsSet() const
{
    return contentIsSet_;
}

void CustomerIpsListVO::unsetcontent()
{
    contentIsSet_ = false;
}

int32_t CustomerIpsListVO::getDstPortType() const
{
    return dstPortType_;
}

void CustomerIpsListVO::setDstPortType(int32_t value)
{
    dstPortType_ = value;
    dstPortTypeIsSet_ = true;
}

bool CustomerIpsListVO::dstPortTypeIsSet() const
{
    return dstPortTypeIsSet_;
}

void CustomerIpsListVO::unsetdstPortType()
{
    dstPortTypeIsSet_ = false;
}

std::string CustomerIpsListVO::getDstPorts() const
{
    return dstPorts_;
}

void CustomerIpsListVO::setDstPorts(const std::string& value)
{
    dstPorts_ = value;
    dstPortsIsSet_ = true;
}

bool CustomerIpsListVO::dstPortsIsSet() const
{
    return dstPortsIsSet_;
}

void CustomerIpsListVO::unsetdstPorts()
{
    dstPortsIsSet_ = false;
}

std::string CustomerIpsListVO::getIpsCfwId() const
{
    return ipsCfwId_;
}

void CustomerIpsListVO::setIpsCfwId(const std::string& value)
{
    ipsCfwId_ = value;
    ipsCfwIdIsSet_ = true;
}

bool CustomerIpsListVO::ipsCfwIdIsSet() const
{
    return ipsCfwIdIsSet_;
}

void CustomerIpsListVO::unsetipsCfwId()
{
    ipsCfwIdIsSet_ = false;
}

std::string CustomerIpsListVO::getIpsId() const
{
    return ipsId_;
}

void CustomerIpsListVO::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool CustomerIpsListVO::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void CustomerIpsListVO::unsetipsId()
{
    ipsIdIsSet_ = false;
}

std::string CustomerIpsListVO::getIpsName() const
{
    return ipsName_;
}

void CustomerIpsListVO::setIpsName(const std::string& value)
{
    ipsName_ = value;
    ipsNameIsSet_ = true;
}

bool CustomerIpsListVO::ipsNameIsSet() const
{
    return ipsNameIsSet_;
}

void CustomerIpsListVO::unsetipsName()
{
    ipsNameIsSet_ = false;
}

int32_t CustomerIpsListVO::getProtocol() const
{
    return protocol_;
}

void CustomerIpsListVO::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CustomerIpsListVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void CustomerIpsListVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CustomerIpsListVO::getSeverity() const
{
    return severity_;
}

void CustomerIpsListVO::setSeverity(int32_t value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CustomerIpsListVO::severityIsSet() const
{
    return severityIsSet_;
}

void CustomerIpsListVO::unsetseverity()
{
    severityIsSet_ = false;
}

int32_t CustomerIpsListVO::getSoftware() const
{
    return software_;
}

void CustomerIpsListVO::setSoftware(int32_t value)
{
    software_ = value;
    softwareIsSet_ = true;
}

bool CustomerIpsListVO::softwareIsSet() const
{
    return softwareIsSet_;
}

void CustomerIpsListVO::unsetsoftware()
{
    softwareIsSet_ = false;
}

int32_t CustomerIpsListVO::getSrcPortType() const
{
    return srcPortType_;
}

void CustomerIpsListVO::setSrcPortType(int32_t value)
{
    srcPortType_ = value;
    srcPortTypeIsSet_ = true;
}

bool CustomerIpsListVO::srcPortTypeIsSet() const
{
    return srcPortTypeIsSet_;
}

void CustomerIpsListVO::unsetsrcPortType()
{
    srcPortTypeIsSet_ = false;
}

std::string CustomerIpsListVO::getSrcPorts() const
{
    return srcPorts_;
}

void CustomerIpsListVO::setSrcPorts(const std::string& value)
{
    srcPorts_ = value;
    srcPortsIsSet_ = true;
}

bool CustomerIpsListVO::srcPortsIsSet() const
{
    return srcPortsIsSet_;
}

void CustomerIpsListVO::unsetsrcPorts()
{
    srcPortsIsSet_ = false;
}

std::string CustomerIpsListVO::getGroupId() const
{
    return groupId_;
}

void CustomerIpsListVO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CustomerIpsListVO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CustomerIpsListVO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}



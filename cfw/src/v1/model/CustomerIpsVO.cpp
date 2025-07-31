

#include "huaweicloud/cfw/v1/model/CustomerIpsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CustomerIpsVO::CustomerIpsVO()
{
    action_ = 0;
    actionIsSet_ = false;
    affectedOs_ = 0;
    affectedOsIsSet_ = false;
    attackType_ = 0;
    attackTypeIsSet_ = false;
    configStatus_ = 0;
    configStatusIsSet_ = false;
    contentsIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    dstPortIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
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
    srcPortIsSet_ = false;
}

CustomerIpsVO::~CustomerIpsVO() = default;

void CustomerIpsVO::validate()
{
}

web::json::value CustomerIpsVO::toJson() const
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
    if(contentsIsSet_) {
        val[utility::conversions::to_string_t("contents")] = ModelBase::toJson(contents_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(dstPortIsSet_) {
        val[utility::conversions::to_string_t("dst_port")] = ModelBase::toJson(dstPort_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
    if(srcPortIsSet_) {
        val[utility::conversions::to_string_t("src_port")] = ModelBase::toJson(srcPort_);
    }

    return val;
}
bool CustomerIpsVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("contents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contents"));
        if(!fieldValue.is_null())
        {
            std::vector<IpsContent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_port"));
        if(!fieldValue.is_null())
        {
            Port refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_port"));
        if(!fieldValue.is_null())
        {
            Port refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcPort(refVal);
        }
    }
    return ok;
}


int32_t CustomerIpsVO::getAction() const
{
    return action_;
}

void CustomerIpsVO::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CustomerIpsVO::actionIsSet() const
{
    return actionIsSet_;
}

void CustomerIpsVO::unsetaction()
{
    actionIsSet_ = false;
}

int32_t CustomerIpsVO::getAffectedOs() const
{
    return affectedOs_;
}

void CustomerIpsVO::setAffectedOs(int32_t value)
{
    affectedOs_ = value;
    affectedOsIsSet_ = true;
}

bool CustomerIpsVO::affectedOsIsSet() const
{
    return affectedOsIsSet_;
}

void CustomerIpsVO::unsetaffectedOs()
{
    affectedOsIsSet_ = false;
}

int32_t CustomerIpsVO::getAttackType() const
{
    return attackType_;
}

void CustomerIpsVO::setAttackType(int32_t value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool CustomerIpsVO::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void CustomerIpsVO::unsetattackType()
{
    attackTypeIsSet_ = false;
}

int32_t CustomerIpsVO::getConfigStatus() const
{
    return configStatus_;
}

void CustomerIpsVO::setConfigStatus(int32_t value)
{
    configStatus_ = value;
    configStatusIsSet_ = true;
}

bool CustomerIpsVO::configStatusIsSet() const
{
    return configStatusIsSet_;
}

void CustomerIpsVO::unsetconfigStatus()
{
    configStatusIsSet_ = false;
}

std::vector<IpsContent>& CustomerIpsVO::getContents()
{
    return contents_;
}

void CustomerIpsVO::setContents(const std::vector<IpsContent>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool CustomerIpsVO::contentsIsSet() const
{
    return contentsIsSet_;
}

void CustomerIpsVO::unsetcontents()
{
    contentsIsSet_ = false;
}

int32_t CustomerIpsVO::getDirection() const
{
    return direction_;
}

void CustomerIpsVO::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool CustomerIpsVO::directionIsSet() const
{
    return directionIsSet_;
}

void CustomerIpsVO::unsetdirection()
{
    directionIsSet_ = false;
}

Port CustomerIpsVO::getDstPort() const
{
    return dstPort_;
}

void CustomerIpsVO::setDstPort(const Port& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool CustomerIpsVO::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void CustomerIpsVO::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string CustomerIpsVO::getGroupId() const
{
    return groupId_;
}

void CustomerIpsVO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CustomerIpsVO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CustomerIpsVO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CustomerIpsVO::getIpsCfwId() const
{
    return ipsCfwId_;
}

void CustomerIpsVO::setIpsCfwId(const std::string& value)
{
    ipsCfwId_ = value;
    ipsCfwIdIsSet_ = true;
}

bool CustomerIpsVO::ipsCfwIdIsSet() const
{
    return ipsCfwIdIsSet_;
}

void CustomerIpsVO::unsetipsCfwId()
{
    ipsCfwIdIsSet_ = false;
}

std::string CustomerIpsVO::getIpsId() const
{
    return ipsId_;
}

void CustomerIpsVO::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool CustomerIpsVO::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void CustomerIpsVO::unsetipsId()
{
    ipsIdIsSet_ = false;
}

std::string CustomerIpsVO::getIpsName() const
{
    return ipsName_;
}

void CustomerIpsVO::setIpsName(const std::string& value)
{
    ipsName_ = value;
    ipsNameIsSet_ = true;
}

bool CustomerIpsVO::ipsNameIsSet() const
{
    return ipsNameIsSet_;
}

void CustomerIpsVO::unsetipsName()
{
    ipsNameIsSet_ = false;
}

int32_t CustomerIpsVO::getProtocol() const
{
    return protocol_;
}

void CustomerIpsVO::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CustomerIpsVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void CustomerIpsVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CustomerIpsVO::getSeverity() const
{
    return severity_;
}

void CustomerIpsVO::setSeverity(int32_t value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CustomerIpsVO::severityIsSet() const
{
    return severityIsSet_;
}

void CustomerIpsVO::unsetseverity()
{
    severityIsSet_ = false;
}

int32_t CustomerIpsVO::getSoftware() const
{
    return software_;
}

void CustomerIpsVO::setSoftware(int32_t value)
{
    software_ = value;
    softwareIsSet_ = true;
}

bool CustomerIpsVO::softwareIsSet() const
{
    return softwareIsSet_;
}

void CustomerIpsVO::unsetsoftware()
{
    softwareIsSet_ = false;
}

Port CustomerIpsVO::getSrcPort() const
{
    return srcPort_;
}

void CustomerIpsVO::setSrcPort(const Port& value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool CustomerIpsVO::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void CustomerIpsVO::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/CustomerIpsSaveDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CustomerIpsSaveDto::CustomerIpsSaveDto()
{
    actionType_ = 0;
    actionTypeIsSet_ = false;
    affectedOs_ = 0;
    affectedOsIsSet_ = false;
    attackType_ = 0;
    attackTypeIsSet_ = false;
    contentsIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    dstPortIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
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

CustomerIpsSaveDto::~CustomerIpsSaveDto() = default;

void CustomerIpsSaveDto::validate()
{
}

web::json::value CustomerIpsSaveDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(affectedOsIsSet_) {
        val[utility::conversions::to_string_t("affected_os")] = ModelBase::toJson(affectedOs_);
    }
    if(attackTypeIsSet_) {
        val[utility::conversions::to_string_t("attack_type")] = ModelBase::toJson(attackType_);
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
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
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
bool CustomerIpsSaveDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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


int32_t CustomerIpsSaveDto::getActionType() const
{
    return actionType_;
}

void CustomerIpsSaveDto::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool CustomerIpsSaveDto::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void CustomerIpsSaveDto::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getAffectedOs() const
{
    return affectedOs_;
}

void CustomerIpsSaveDto::setAffectedOs(int32_t value)
{
    affectedOs_ = value;
    affectedOsIsSet_ = true;
}

bool CustomerIpsSaveDto::affectedOsIsSet() const
{
    return affectedOsIsSet_;
}

void CustomerIpsSaveDto::unsetaffectedOs()
{
    affectedOsIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getAttackType() const
{
    return attackType_;
}

void CustomerIpsSaveDto::setAttackType(int32_t value)
{
    attackType_ = value;
    attackTypeIsSet_ = true;
}

bool CustomerIpsSaveDto::attackTypeIsSet() const
{
    return attackTypeIsSet_;
}

void CustomerIpsSaveDto::unsetattackType()
{
    attackTypeIsSet_ = false;
}

std::vector<IpsContent>& CustomerIpsSaveDto::getContents()
{
    return contents_;
}

void CustomerIpsSaveDto::setContents(const std::vector<IpsContent>& value)
{
    contents_ = value;
    contentsIsSet_ = true;
}

bool CustomerIpsSaveDto::contentsIsSet() const
{
    return contentsIsSet_;
}

void CustomerIpsSaveDto::unsetcontents()
{
    contentsIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getDirection() const
{
    return direction_;
}

void CustomerIpsSaveDto::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool CustomerIpsSaveDto::directionIsSet() const
{
    return directionIsSet_;
}

void CustomerIpsSaveDto::unsetdirection()
{
    directionIsSet_ = false;
}

Port CustomerIpsSaveDto::getDstPort() const
{
    return dstPort_;
}

void CustomerIpsSaveDto::setDstPort(const Port& value)
{
    dstPort_ = value;
    dstPortIsSet_ = true;
}

bool CustomerIpsSaveDto::dstPortIsSet() const
{
    return dstPortIsSet_;
}

void CustomerIpsSaveDto::unsetdstPort()
{
    dstPortIsSet_ = false;
}

std::string CustomerIpsSaveDto::getFwInstanceId() const
{
    return fwInstanceId_;
}

void CustomerIpsSaveDto::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool CustomerIpsSaveDto::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void CustomerIpsSaveDto::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string CustomerIpsSaveDto::getObjectId() const
{
    return objectId_;
}

void CustomerIpsSaveDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool CustomerIpsSaveDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void CustomerIpsSaveDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string CustomerIpsSaveDto::getIpsName() const
{
    return ipsName_;
}

void CustomerIpsSaveDto::setIpsName(const std::string& value)
{
    ipsName_ = value;
    ipsNameIsSet_ = true;
}

bool CustomerIpsSaveDto::ipsNameIsSet() const
{
    return ipsNameIsSet_;
}

void CustomerIpsSaveDto::unsetipsName()
{
    ipsNameIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getProtocol() const
{
    return protocol_;
}

void CustomerIpsSaveDto::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CustomerIpsSaveDto::protocolIsSet() const
{
    return protocolIsSet_;
}

void CustomerIpsSaveDto::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getSeverity() const
{
    return severity_;
}

void CustomerIpsSaveDto::setSeverity(int32_t value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool CustomerIpsSaveDto::severityIsSet() const
{
    return severityIsSet_;
}

void CustomerIpsSaveDto::unsetseverity()
{
    severityIsSet_ = false;
}

int32_t CustomerIpsSaveDto::getSoftware() const
{
    return software_;
}

void CustomerIpsSaveDto::setSoftware(int32_t value)
{
    software_ = value;
    softwareIsSet_ = true;
}

bool CustomerIpsSaveDto::softwareIsSet() const
{
    return softwareIsSet_;
}

void CustomerIpsSaveDto::unsetsoftware()
{
    softwareIsSet_ = false;
}

Port CustomerIpsSaveDto::getSrcPort() const
{
    return srcPort_;
}

void CustomerIpsSaveDto::setSrcPort(const Port& value)
{
    srcPort_ = value;
    srcPortIsSet_ = true;
}

bool CustomerIpsSaveDto::srcPortIsSet() const
{
    return srcPortIsSet_;
}

void CustomerIpsSaveDto::unsetsrcPort()
{
    srcPortIsSet_ = false;
}

}
}
}
}
}



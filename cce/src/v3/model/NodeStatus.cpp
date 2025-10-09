

#include "huaweicloud/cce/v3/model/NodeStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeStatus::NodeStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    lastProbeTime_ = "";
    lastProbeTimeIsSet_ = false;
    jobID_ = "";
    jobIDIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    privateIP_ = "";
    privateIPIsSet_ = false;
    privateIPv6IP_ = "";
    privateIPv6IPIsSet_ = false;
    publicIP_ = "";
    publicIPIsSet_ = false;
    deleteStatusIsSet_ = false;
    configurationUpToDate_ = false;
    configurationUpToDateIsSet_ = false;
}

NodeStatus::~NodeStatus() = default;

void NodeStatus::validate()
{
}

web::json::value NodeStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(lastProbeTimeIsSet_) {
        val[utility::conversions::to_string_t("lastProbeTime")] = ModelBase::toJson(lastProbeTime_);
    }
    if(jobIDIsSet_) {
        val[utility::conversions::to_string_t("jobID")] = ModelBase::toJson(jobID_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("serverId")] = ModelBase::toJson(serverId_);
    }
    if(privateIPIsSet_) {
        val[utility::conversions::to_string_t("privateIP")] = ModelBase::toJson(privateIP_);
    }
    if(privateIPv6IPIsSet_) {
        val[utility::conversions::to_string_t("privateIPv6IP")] = ModelBase::toJson(privateIPv6IP_);
    }
    if(publicIPIsSet_) {
        val[utility::conversions::to_string_t("publicIP")] = ModelBase::toJson(publicIP_);
    }
    if(deleteStatusIsSet_) {
        val[utility::conversions::to_string_t("deleteStatus")] = ModelBase::toJson(deleteStatus_);
    }
    if(configurationUpToDateIsSet_) {
        val[utility::conversions::to_string_t("configurationUpToDate")] = ModelBase::toJson(configurationUpToDate_);
    }

    return val;
}
bool NodeStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastProbeTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastProbeTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastProbeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serverId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privateIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privateIPv6IP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateIPv6IP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIPv6IP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleteStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleteStatus"));
        if(!fieldValue.is_null())
        {
            DeleteStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurationUpToDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationUpToDate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationUpToDate(refVal);
        }
    }
    return ok;
}


std::string NodeStatus::getPhase() const
{
    return phase_;
}

void NodeStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NodeStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NodeStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string NodeStatus::getLastProbeTime() const
{
    return lastProbeTime_;
}

void NodeStatus::setLastProbeTime(const std::string& value)
{
    lastProbeTime_ = value;
    lastProbeTimeIsSet_ = true;
}

bool NodeStatus::lastProbeTimeIsSet() const
{
    return lastProbeTimeIsSet_;
}

void NodeStatus::unsetlastProbeTime()
{
    lastProbeTimeIsSet_ = false;
}

std::string NodeStatus::getJobID() const
{
    return jobID_;
}

void NodeStatus::setJobID(const std::string& value)
{
    jobID_ = value;
    jobIDIsSet_ = true;
}

bool NodeStatus::jobIDIsSet() const
{
    return jobIDIsSet_;
}

void NodeStatus::unsetjobID()
{
    jobIDIsSet_ = false;
}

std::string NodeStatus::getServerId() const
{
    return serverId_;
}

void NodeStatus::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NodeStatus::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NodeStatus::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string NodeStatus::getPrivateIP() const
{
    return privateIP_;
}

void NodeStatus::setPrivateIP(const std::string& value)
{
    privateIP_ = value;
    privateIPIsSet_ = true;
}

bool NodeStatus::privateIPIsSet() const
{
    return privateIPIsSet_;
}

void NodeStatus::unsetprivateIP()
{
    privateIPIsSet_ = false;
}

std::string NodeStatus::getPrivateIPv6IP() const
{
    return privateIPv6IP_;
}

void NodeStatus::setPrivateIPv6IP(const std::string& value)
{
    privateIPv6IP_ = value;
    privateIPv6IPIsSet_ = true;
}

bool NodeStatus::privateIPv6IPIsSet() const
{
    return privateIPv6IPIsSet_;
}

void NodeStatus::unsetprivateIPv6IP()
{
    privateIPv6IPIsSet_ = false;
}

std::string NodeStatus::getPublicIP() const
{
    return publicIP_;
}

void NodeStatus::setPublicIP(const std::string& value)
{
    publicIP_ = value;
    publicIPIsSet_ = true;
}

bool NodeStatus::publicIPIsSet() const
{
    return publicIPIsSet_;
}

void NodeStatus::unsetpublicIP()
{
    publicIPIsSet_ = false;
}

DeleteStatus NodeStatus::getDeleteStatus() const
{
    return deleteStatus_;
}

void NodeStatus::setDeleteStatus(const DeleteStatus& value)
{
    deleteStatus_ = value;
    deleteStatusIsSet_ = true;
}

bool NodeStatus::deleteStatusIsSet() const
{
    return deleteStatusIsSet_;
}

void NodeStatus::unsetdeleteStatus()
{
    deleteStatusIsSet_ = false;
}

bool NodeStatus::isConfigurationUpToDate() const
{
    return configurationUpToDate_;
}

void NodeStatus::setConfigurationUpToDate(bool value)
{
    configurationUpToDate_ = value;
    configurationUpToDateIsSet_ = true;
}

bool NodeStatus::configurationUpToDateIsSet() const
{
    return configurationUpToDateIsSet_;
}

void NodeStatus::unsetconfigurationUpToDate()
{
    configurationUpToDateIsSet_ = false;
}

}
}
}
}
}



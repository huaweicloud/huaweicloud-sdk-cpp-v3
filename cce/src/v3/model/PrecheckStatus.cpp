

#include "huaweicloud/cce/v3/model/PrecheckStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckStatus::PrecheckStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    expireTimeStamp_ = "";
    expireTimeStampIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    clusterCheckStatusIsSet_ = false;
    addonCheckStatusIsSet_ = false;
    nodeCheckStatusIsSet_ = false;
}

PrecheckStatus::~PrecheckStatus() = default;

void PrecheckStatus::validate()
{
}

web::json::value PrecheckStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(expireTimeStampIsSet_) {
        val[utility::conversions::to_string_t("expireTimeStamp")] = ModelBase::toJson(expireTimeStamp_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(clusterCheckStatusIsSet_) {
        val[utility::conversions::to_string_t("clusterCheckStatus")] = ModelBase::toJson(clusterCheckStatus_);
    }
    if(addonCheckStatusIsSet_) {
        val[utility::conversions::to_string_t("addonCheckStatus")] = ModelBase::toJson(addonCheckStatus_);
    }
    if(nodeCheckStatusIsSet_) {
        val[utility::conversions::to_string_t("nodeCheckStatus")] = ModelBase::toJson(nodeCheckStatus_);
    }

    return val;
}
bool PrecheckStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("expireTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterCheckStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterCheckStatus"));
        if(!fieldValue.is_null())
        {
            ClusterCheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterCheckStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonCheckStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonCheckStatus"));
        if(!fieldValue.is_null())
        {
            AddonCheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonCheckStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeCheckStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeCheckStatus"));
        if(!fieldValue.is_null())
        {
            NodeCheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCheckStatus(refVal);
        }
    }
    return ok;
}


std::string PrecheckStatus::getPhase() const
{
    return phase_;
}

void PrecheckStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PrecheckStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void PrecheckStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::string PrecheckStatus::getExpireTimeStamp() const
{
    return expireTimeStamp_;
}

void PrecheckStatus::setExpireTimeStamp(const std::string& value)
{
    expireTimeStamp_ = value;
    expireTimeStampIsSet_ = true;
}

bool PrecheckStatus::expireTimeStampIsSet() const
{
    return expireTimeStampIsSet_;
}

void PrecheckStatus::unsetexpireTimeStamp()
{
    expireTimeStampIsSet_ = false;
}

std::string PrecheckStatus::getMessage() const
{
    return message_;
}

void PrecheckStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PrecheckStatus::messageIsSet() const
{
    return messageIsSet_;
}

void PrecheckStatus::unsetmessage()
{
    messageIsSet_ = false;
}

ClusterCheckStatus PrecheckStatus::getClusterCheckStatus() const
{
    return clusterCheckStatus_;
}

void PrecheckStatus::setClusterCheckStatus(const ClusterCheckStatus& value)
{
    clusterCheckStatus_ = value;
    clusterCheckStatusIsSet_ = true;
}

bool PrecheckStatus::clusterCheckStatusIsSet() const
{
    return clusterCheckStatusIsSet_;
}

void PrecheckStatus::unsetclusterCheckStatus()
{
    clusterCheckStatusIsSet_ = false;
}

AddonCheckStatus PrecheckStatus::getAddonCheckStatus() const
{
    return addonCheckStatus_;
}

void PrecheckStatus::setAddonCheckStatus(const AddonCheckStatus& value)
{
    addonCheckStatus_ = value;
    addonCheckStatusIsSet_ = true;
}

bool PrecheckStatus::addonCheckStatusIsSet() const
{
    return addonCheckStatusIsSet_;
}

void PrecheckStatus::unsetaddonCheckStatus()
{
    addonCheckStatusIsSet_ = false;
}

NodeCheckStatus PrecheckStatus::getNodeCheckStatus() const
{
    return nodeCheckStatus_;
}

void PrecheckStatus::setNodeCheckStatus(const NodeCheckStatus& value)
{
    nodeCheckStatus_ = value;
    nodeCheckStatusIsSet_ = true;
}

bool PrecheckStatus::nodeCheckStatusIsSet() const
{
    return nodeCheckStatusIsSet_;
}

void PrecheckStatus::unsetnodeCheckStatus()
{
    nodeCheckStatusIsSet_ = false;
}

}
}
}
}
}



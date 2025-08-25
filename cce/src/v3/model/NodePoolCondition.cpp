

#include "huaweicloud/cce/v3/model/NodePoolCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolCondition::NodePoolCondition()
{
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    lastProbeTime_ = "";
    lastProbeTimeIsSet_ = false;
    lastTransitTime_ = "";
    lastTransitTimeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

NodePoolCondition::~NodePoolCondition() = default;

void NodePoolCondition::validate()
{
}

web::json::value NodePoolCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastProbeTimeIsSet_) {
        val[utility::conversions::to_string_t("lastProbeTime")] = ModelBase::toJson(lastProbeTime_);
    }
    if(lastTransitTimeIsSet_) {
        val[utility::conversions::to_string_t("lastTransitTime")] = ModelBase::toJson(lastTransitTime_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool NodePoolCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lastTransitTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastTransitTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTransitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
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
    return ok;
}


std::string NodePoolCondition::getType() const
{
    return type_;
}

void NodePoolCondition::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NodePoolCondition::typeIsSet() const
{
    return typeIsSet_;
}

void NodePoolCondition::unsettype()
{
    typeIsSet_ = false;
}

std::string NodePoolCondition::getStatus() const
{
    return status_;
}

void NodePoolCondition::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodePoolCondition::statusIsSet() const
{
    return statusIsSet_;
}

void NodePoolCondition::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NodePoolCondition::getLastProbeTime() const
{
    return lastProbeTime_;
}

void NodePoolCondition::setLastProbeTime(const std::string& value)
{
    lastProbeTime_ = value;
    lastProbeTimeIsSet_ = true;
}

bool NodePoolCondition::lastProbeTimeIsSet() const
{
    return lastProbeTimeIsSet_;
}

void NodePoolCondition::unsetlastProbeTime()
{
    lastProbeTimeIsSet_ = false;
}

std::string NodePoolCondition::getLastTransitTime() const
{
    return lastTransitTime_;
}

void NodePoolCondition::setLastTransitTime(const std::string& value)
{
    lastTransitTime_ = value;
    lastTransitTimeIsSet_ = true;
}

bool NodePoolCondition::lastTransitTimeIsSet() const
{
    return lastTransitTimeIsSet_;
}

void NodePoolCondition::unsetlastTransitTime()
{
    lastTransitTimeIsSet_ = false;
}

std::string NodePoolCondition::getReason() const
{
    return reason_;
}

void NodePoolCondition::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool NodePoolCondition::reasonIsSet() const
{
    return reasonIsSet_;
}

void NodePoolCondition::unsetreason()
{
    reasonIsSet_ = false;
}

std::string NodePoolCondition::getMessage() const
{
    return message_;
}

void NodePoolCondition::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool NodePoolCondition::messageIsSet() const
{
    return messageIsSet_;
}

void NodePoolCondition::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}



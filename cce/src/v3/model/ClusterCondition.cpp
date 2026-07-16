

#include "huaweicloud/cce/v3/model/ClusterCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterCondition::ClusterCondition()
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

ClusterCondition::~ClusterCondition() = default;

void ClusterCondition::validate()
{
}

web::json::value ClusterCondition::toJson() const
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
bool ClusterCondition::fromJson(const web::json::value& val)
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


std::string ClusterCondition::getType() const
{
    return type_;
}

void ClusterCondition::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterCondition::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterCondition::unsettype()
{
    typeIsSet_ = false;
}

std::string ClusterCondition::getStatus() const
{
    return status_;
}

void ClusterCondition::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClusterCondition::statusIsSet() const
{
    return statusIsSet_;
}

void ClusterCondition::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ClusterCondition::getLastProbeTime() const
{
    return lastProbeTime_;
}

void ClusterCondition::setLastProbeTime(const std::string& value)
{
    lastProbeTime_ = value;
    lastProbeTimeIsSet_ = true;
}

bool ClusterCondition::lastProbeTimeIsSet() const
{
    return lastProbeTimeIsSet_;
}

void ClusterCondition::unsetlastProbeTime()
{
    lastProbeTimeIsSet_ = false;
}

std::string ClusterCondition::getLastTransitTime() const
{
    return lastTransitTime_;
}

void ClusterCondition::setLastTransitTime(const std::string& value)
{
    lastTransitTime_ = value;
    lastTransitTimeIsSet_ = true;
}

bool ClusterCondition::lastTransitTimeIsSet() const
{
    return lastTransitTimeIsSet_;
}

void ClusterCondition::unsetlastTransitTime()
{
    lastTransitTimeIsSet_ = false;
}

std::string ClusterCondition::getReason() const
{
    return reason_;
}

void ClusterCondition::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ClusterCondition::reasonIsSet() const
{
    return reasonIsSet_;
}

void ClusterCondition::unsetreason()
{
    reasonIsSet_ = false;
}

std::string ClusterCondition::getMessage() const
{
    return message_;
}

void ClusterCondition::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ClusterCondition::messageIsSet() const
{
    return messageIsSet_;
}

void ClusterCondition::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}



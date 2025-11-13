

#include "huaweicloud/rds/v3/model/Subscription4PublicationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Subscription4PublicationInfo::Subscription4PublicationInfo()
{
    subscriptionInstanceName_ = "";
    subscriptionInstanceNameIsSet_ = false;
    subscriptionInstanceIp_ = "";
    subscriptionInstanceIpIsSet_ = false;
    subscriptionInstanceId_ = "";
    subscriptionInstanceIdIsSet_ = false;
}

Subscription4PublicationInfo::~Subscription4PublicationInfo() = default;

void Subscription4PublicationInfo::validate()
{
}

web::json::value Subscription4PublicationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("subscription_instance_name")] = ModelBase::toJson(subscriptionInstanceName_);
    }
    if(subscriptionInstanceIpIsSet_) {
        val[utility::conversions::to_string_t("subscription_instance_ip")] = ModelBase::toJson(subscriptionInstanceIp_);
    }
    if(subscriptionInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_instance_id")] = ModelBase::toJson(subscriptionInstanceId_);
    }

    return val;
}
bool Subscription4PublicationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_instance_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_instance_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionInstanceIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionInstanceId(refVal);
        }
    }
    return ok;
}


std::string Subscription4PublicationInfo::getSubscriptionInstanceName() const
{
    return subscriptionInstanceName_;
}

void Subscription4PublicationInfo::setSubscriptionInstanceName(const std::string& value)
{
    subscriptionInstanceName_ = value;
    subscriptionInstanceNameIsSet_ = true;
}

bool Subscription4PublicationInfo::subscriptionInstanceNameIsSet() const
{
    return subscriptionInstanceNameIsSet_;
}

void Subscription4PublicationInfo::unsetsubscriptionInstanceName()
{
    subscriptionInstanceNameIsSet_ = false;
}

std::string Subscription4PublicationInfo::getSubscriptionInstanceIp() const
{
    return subscriptionInstanceIp_;
}

void Subscription4PublicationInfo::setSubscriptionInstanceIp(const std::string& value)
{
    subscriptionInstanceIp_ = value;
    subscriptionInstanceIpIsSet_ = true;
}

bool Subscription4PublicationInfo::subscriptionInstanceIpIsSet() const
{
    return subscriptionInstanceIpIsSet_;
}

void Subscription4PublicationInfo::unsetsubscriptionInstanceIp()
{
    subscriptionInstanceIpIsSet_ = false;
}

std::string Subscription4PublicationInfo::getSubscriptionInstanceId() const
{
    return subscriptionInstanceId_;
}

void Subscription4PublicationInfo::setSubscriptionInstanceId(const std::string& value)
{
    subscriptionInstanceId_ = value;
    subscriptionInstanceIdIsSet_ = true;
}

bool Subscription4PublicationInfo::subscriptionInstanceIdIsSet() const
{
    return subscriptionInstanceIdIsSet_;
}

void Subscription4PublicationInfo::unsetsubscriptionInstanceId()
{
    subscriptionInstanceIdIsSet_ = false;
}

}
}
}
}
}



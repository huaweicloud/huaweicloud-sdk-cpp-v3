

#include "huaweicloud/iotda/v5/model/DmsRocketMQForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DmsRocketMQForwarding::DmsRocketMQForwarding()
{
    addressesIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
}

DmsRocketMQForwarding::~DmsRocketMQForwarding() = default;

void DmsRocketMQForwarding::validate()
{
}

web::json::value DmsRocketMQForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }

    return val;
}
bool DmsRocketMQForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<NetAddress> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    return ok;
}


std::vector<NetAddress>& DmsRocketMQForwarding::getAddresses()
{
    return addresses_;
}

void DmsRocketMQForwarding::setAddresses(const std::vector<NetAddress>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool DmsRocketMQForwarding::addressesIsSet() const
{
    return addressesIsSet_;
}

void DmsRocketMQForwarding::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string DmsRocketMQForwarding::getTopic() const
{
    return topic_;
}

void DmsRocketMQForwarding::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool DmsRocketMQForwarding::topicIsSet() const
{
    return topicIsSet_;
}

void DmsRocketMQForwarding::unsettopic()
{
    topicIsSet_ = false;
}

std::string DmsRocketMQForwarding::getUsername() const
{
    return username_;
}

void DmsRocketMQForwarding::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool DmsRocketMQForwarding::usernameIsSet() const
{
    return usernameIsSet_;
}

void DmsRocketMQForwarding::unsetusername()
{
    usernameIsSet_ = false;
}

std::string DmsRocketMQForwarding::getPassword() const
{
    return password_;
}

void DmsRocketMQForwarding::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool DmsRocketMQForwarding::passwordIsSet() const
{
    return passwordIsSet_;
}

void DmsRocketMQForwarding::unsetpassword()
{
    passwordIsSet_ = false;
}

bool DmsRocketMQForwarding::isEnableSsl() const
{
    return enableSsl_;
}

void DmsRocketMQForwarding::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool DmsRocketMQForwarding::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void DmsRocketMQForwarding::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/iotda/v5/model/RomaForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RomaForwarding::RomaForwarding()
{
    addressesIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

RomaForwarding::~RomaForwarding() = default;

void RomaForwarding::validate()
{
}

web::json::value RomaForwarding::toJson() const
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

    return val;
}
bool RomaForwarding::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<NetAddress>& RomaForwarding::getAddresses()
{
    return addresses_;
}

void RomaForwarding::setAddresses(const std::vector<NetAddress>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool RomaForwarding::addressesIsSet() const
{
    return addressesIsSet_;
}

void RomaForwarding::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string RomaForwarding::getTopic() const
{
    return topic_;
}

void RomaForwarding::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool RomaForwarding::topicIsSet() const
{
    return topicIsSet_;
}

void RomaForwarding::unsettopic()
{
    topicIsSet_ = false;
}

std::string RomaForwarding::getUsername() const
{
    return username_;
}

void RomaForwarding::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RomaForwarding::usernameIsSet() const
{
    return usernameIsSet_;
}

void RomaForwarding::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RomaForwarding::getPassword() const
{
    return password_;
}

void RomaForwarding::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RomaForwarding::passwordIsSet() const
{
    return passwordIsSet_;
}

void RomaForwarding::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}



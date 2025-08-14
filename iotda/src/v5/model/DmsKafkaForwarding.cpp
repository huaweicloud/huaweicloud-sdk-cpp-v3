

#include "huaweicloud/iotda/v5/model/DmsKafkaForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DmsKafkaForwarding::DmsKafkaForwarding()
{
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    addressesIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    mechanism_ = "";
    mechanismIsSet_ = false;
    securityProtocol_ = "";
    securityProtocolIsSet_ = false;
}

DmsKafkaForwarding::~DmsKafkaForwarding() = default;

void DmsKafkaForwarding::validate()
{
}

web::json::value DmsKafkaForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
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
    if(mechanismIsSet_) {
        val[utility::conversions::to_string_t("mechanism")] = ModelBase::toJson(mechanism_);
    }
    if(securityProtocolIsSet_) {
        val[utility::conversions::to_string_t("security_protocol")] = ModelBase::toJson(securityProtocol_);
    }

    return val;
}
bool DmsKafkaForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("mechanism"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mechanism"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMechanism(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityProtocol(refVal);
        }
    }
    return ok;
}


std::string DmsKafkaForwarding::getRegionName() const
{
    return regionName_;
}

void DmsKafkaForwarding::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool DmsKafkaForwarding::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void DmsKafkaForwarding::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string DmsKafkaForwarding::getProjectId() const
{
    return projectId_;
}

void DmsKafkaForwarding::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DmsKafkaForwarding::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DmsKafkaForwarding::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<NetAddress>& DmsKafkaForwarding::getAddresses()
{
    return addresses_;
}

void DmsKafkaForwarding::setAddresses(const std::vector<NetAddress>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool DmsKafkaForwarding::addressesIsSet() const
{
    return addressesIsSet_;
}

void DmsKafkaForwarding::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string DmsKafkaForwarding::getTopic() const
{
    return topic_;
}

void DmsKafkaForwarding::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool DmsKafkaForwarding::topicIsSet() const
{
    return topicIsSet_;
}

void DmsKafkaForwarding::unsettopic()
{
    topicIsSet_ = false;
}

std::string DmsKafkaForwarding::getUsername() const
{
    return username_;
}

void DmsKafkaForwarding::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool DmsKafkaForwarding::usernameIsSet() const
{
    return usernameIsSet_;
}

void DmsKafkaForwarding::unsetusername()
{
    usernameIsSet_ = false;
}

std::string DmsKafkaForwarding::getPassword() const
{
    return password_;
}

void DmsKafkaForwarding::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool DmsKafkaForwarding::passwordIsSet() const
{
    return passwordIsSet_;
}

void DmsKafkaForwarding::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string DmsKafkaForwarding::getMechanism() const
{
    return mechanism_;
}

void DmsKafkaForwarding::setMechanism(const std::string& value)
{
    mechanism_ = value;
    mechanismIsSet_ = true;
}

bool DmsKafkaForwarding::mechanismIsSet() const
{
    return mechanismIsSet_;
}

void DmsKafkaForwarding::unsetmechanism()
{
    mechanismIsSet_ = false;
}

std::string DmsKafkaForwarding::getSecurityProtocol() const
{
    return securityProtocol_;
}

void DmsKafkaForwarding::setSecurityProtocol(const std::string& value)
{
    securityProtocol_ = value;
    securityProtocolIsSet_ = true;
}

bool DmsKafkaForwarding::securityProtocolIsSet() const
{
    return securityProtocolIsSet_;
}

void DmsKafkaForwarding::unsetsecurityProtocol()
{
    securityProtocolIsSet_ = false;
}

}
}
}
}
}



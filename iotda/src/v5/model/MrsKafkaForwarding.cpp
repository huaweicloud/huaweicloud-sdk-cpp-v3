

#include "huaweicloud/iotda/v5/model/MrsKafkaForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




MrsKafkaForwarding::MrsKafkaForwarding()
{
    addressesIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    kerberosAuthentication_ = false;
    kerberosAuthenticationIsSet_ = false;
}

MrsKafkaForwarding::~MrsKafkaForwarding() = default;

void MrsKafkaForwarding::validate()
{
}

web::json::value MrsKafkaForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(kerberosAuthenticationIsSet_) {
        val[utility::conversions::to_string_t("kerberos_authentication")] = ModelBase::toJson(kerberosAuthentication_);
    }

    return val;
}
bool MrsKafkaForwarding::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("kerberos_authentication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kerberos_authentication"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKerberosAuthentication(refVal);
        }
    }
    return ok;
}


std::vector<NetAddress>& MrsKafkaForwarding::getAddresses()
{
    return addresses_;
}

void MrsKafkaForwarding::setAddresses(const std::vector<NetAddress>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool MrsKafkaForwarding::addressesIsSet() const
{
    return addressesIsSet_;
}

void MrsKafkaForwarding::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string MrsKafkaForwarding::getTopic() const
{
    return topic_;
}

void MrsKafkaForwarding::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool MrsKafkaForwarding::topicIsSet() const
{
    return topicIsSet_;
}

void MrsKafkaForwarding::unsettopic()
{
    topicIsSet_ = false;
}

bool MrsKafkaForwarding::isKerberosAuthentication() const
{
    return kerberosAuthentication_;
}

void MrsKafkaForwarding::setKerberosAuthentication(bool value)
{
    kerberosAuthentication_ = value;
    kerberosAuthenticationIsSet_ = true;
}

bool MrsKafkaForwarding::kerberosAuthenticationIsSet() const
{
    return kerberosAuthenticationIsSet_;
}

void MrsKafkaForwarding::unsetkerberosAuthentication()
{
    kerberosAuthenticationIsSet_ = false;
}

}
}
}
}
}



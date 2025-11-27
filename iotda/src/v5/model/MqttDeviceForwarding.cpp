

#include "huaweicloud/iotda/v5/model/MqttDeviceForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




MqttDeviceForwarding::MqttDeviceForwarding()
{
    topic_ = "";
    topicIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
}

MqttDeviceForwarding::~MqttDeviceForwarding() = default;

void MqttDeviceForwarding::validate()
{
}

web::json::value MqttDeviceForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }

    return val;
}
bool MqttDeviceForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    return ok;
}


std::string MqttDeviceForwarding::getTopic() const
{
    return topic_;
}

void MqttDeviceForwarding::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool MqttDeviceForwarding::topicIsSet() const
{
    return topicIsSet_;
}

void MqttDeviceForwarding::unsettopic()
{
    topicIsSet_ = false;
}

int32_t MqttDeviceForwarding::getTtl() const
{
    return ttl_;
}

void MqttDeviceForwarding::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool MqttDeviceForwarding::ttlIsSet() const
{
    return ttlIsSet_;
}

void MqttDeviceForwarding::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}



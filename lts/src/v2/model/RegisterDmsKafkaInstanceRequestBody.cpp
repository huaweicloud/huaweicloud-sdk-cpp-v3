

#include "huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




RegisterDmsKafkaInstanceRequestBody::RegisterDmsKafkaInstanceRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    kafkaName_ = "";
    kafkaNameIsSet_ = false;
    connectInfoIsSet_ = false;
}

RegisterDmsKafkaInstanceRequestBody::~RegisterDmsKafkaInstanceRequestBody() = default;

void RegisterDmsKafkaInstanceRequestBody::validate()
{
}

web::json::value RegisterDmsKafkaInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(kafkaNameIsSet_) {
        val[utility::conversions::to_string_t("kafka_name")] = ModelBase::toJson(kafkaName_);
    }
    if(connectInfoIsSet_) {
        val[utility::conversions::to_string_t("connect_info")] = ModelBase::toJson(connectInfo_);
    }

    return val;
}

bool RegisterDmsKafkaInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_info"));
        if(!fieldValue.is_null())
        {
            RegisterDmsKafkaInstanceRequestBody_connect_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectInfo(refVal);
        }
    }
    return ok;
}

std::string RegisterDmsKafkaInstanceRequestBody::getInstanceId() const
{
    return instanceId_;
}

void RegisterDmsKafkaInstanceRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RegisterDmsKafkaInstanceRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RegisterDmsKafkaInstanceRequestBody::getKafkaName() const
{
    return kafkaName_;
}

void RegisterDmsKafkaInstanceRequestBody::setKafkaName(const std::string& value)
{
    kafkaName_ = value;
    kafkaNameIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequestBody::kafkaNameIsSet() const
{
    return kafkaNameIsSet_;
}

void RegisterDmsKafkaInstanceRequestBody::unsetkafkaName()
{
    kafkaNameIsSet_ = false;
}

RegisterDmsKafkaInstanceRequestBody_connect_info RegisterDmsKafkaInstanceRequestBody::getConnectInfo() const
{
    return connectInfo_;
}

void RegisterDmsKafkaInstanceRequestBody::setConnectInfo(const RegisterDmsKafkaInstanceRequestBody_connect_info& value)
{
    connectInfo_ = value;
    connectInfoIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequestBody::connectInfoIsSet() const
{
    return connectInfoIsSet_;
}

void RegisterDmsKafkaInstanceRequestBody::unsetconnectInfo()
{
    connectInfoIsSet_ = false;
}

}
}
}
}
}



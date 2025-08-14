

#include "huaweicloud/iotda/v5/model/ChannelDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ChannelDetail::ChannelDetail()
{
    httpForwardingIsSet_ = false;
    disForwardingIsSet_ = false;
    obsForwardingIsSet_ = false;
    amqpForwardingIsSet_ = false;
    dmsKafkaForwardingIsSet_ = false;
    romaForwardingIsSet_ = false;
    mysqlForwardingIsSet_ = false;
    influxdbForwardingIsSet_ = false;
    functiongraphForwardingIsSet_ = false;
    mrsKafkaForwardingIsSet_ = false;
    dmsRocketmqForwardingIsSet_ = false;
}

ChannelDetail::~ChannelDetail() = default;

void ChannelDetail::validate()
{
}

web::json::value ChannelDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpForwardingIsSet_) {
        val[utility::conversions::to_string_t("http_forwarding")] = ModelBase::toJson(httpForwarding_);
    }
    if(disForwardingIsSet_) {
        val[utility::conversions::to_string_t("dis_forwarding")] = ModelBase::toJson(disForwarding_);
    }
    if(obsForwardingIsSet_) {
        val[utility::conversions::to_string_t("obs_forwarding")] = ModelBase::toJson(obsForwarding_);
    }
    if(amqpForwardingIsSet_) {
        val[utility::conversions::to_string_t("amqp_forwarding")] = ModelBase::toJson(amqpForwarding_);
    }
    if(dmsKafkaForwardingIsSet_) {
        val[utility::conversions::to_string_t("dms_kafka_forwarding")] = ModelBase::toJson(dmsKafkaForwarding_);
    }
    if(romaForwardingIsSet_) {
        val[utility::conversions::to_string_t("roma_forwarding")] = ModelBase::toJson(romaForwarding_);
    }
    if(mysqlForwardingIsSet_) {
        val[utility::conversions::to_string_t("mysql_forwarding")] = ModelBase::toJson(mysqlForwarding_);
    }
    if(influxdbForwardingIsSet_) {
        val[utility::conversions::to_string_t("influxdb_forwarding")] = ModelBase::toJson(influxdbForwarding_);
    }
    if(functiongraphForwardingIsSet_) {
        val[utility::conversions::to_string_t("functiongraph_forwarding")] = ModelBase::toJson(functiongraphForwarding_);
    }
    if(mrsKafkaForwardingIsSet_) {
        val[utility::conversions::to_string_t("mrs_kafka_forwarding")] = ModelBase::toJson(mrsKafkaForwarding_);
    }
    if(dmsRocketmqForwardingIsSet_) {
        val[utility::conversions::to_string_t("dms_rocketmq_forwarding")] = ModelBase::toJson(dmsRocketmqForwarding_);
    }

    return val;
}
bool ChannelDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_forwarding"));
        if(!fieldValue.is_null())
        {
            HttpForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dis_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dis_forwarding"));
        if(!fieldValue.is_null())
        {
            DisForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_forwarding"));
        if(!fieldValue.is_null())
        {
            ObsForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amqp_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amqp_forwarding"));
        if(!fieldValue.is_null())
        {
            AmqpForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmqpForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dms_kafka_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dms_kafka_forwarding"));
        if(!fieldValue.is_null())
        {
            DmsKafkaForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDmsKafkaForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roma_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roma_forwarding"));
        if(!fieldValue.is_null())
        {
            RomaForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRomaForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mysql_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mysql_forwarding"));
        if(!fieldValue.is_null())
        {
            MysqlForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMysqlForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("influxdb_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("influxdb_forwarding"));
        if(!fieldValue.is_null())
        {
            InfluxDBForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfluxdbForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("functiongraph_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("functiongraph_forwarding"));
        if(!fieldValue.is_null())
        {
            FunctionGraphForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctiongraphForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mrs_kafka_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mrs_kafka_forwarding"));
        if(!fieldValue.is_null())
        {
            MrsKafkaForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMrsKafkaForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dms_rocketmq_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dms_rocketmq_forwarding"));
        if(!fieldValue.is_null())
        {
            DmsRocketMQForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDmsRocketmqForwarding(refVal);
        }
    }
    return ok;
}


HttpForwarding ChannelDetail::getHttpForwarding() const
{
    return httpForwarding_;
}

void ChannelDetail::setHttpForwarding(const HttpForwarding& value)
{
    httpForwarding_ = value;
    httpForwardingIsSet_ = true;
}

bool ChannelDetail::httpForwardingIsSet() const
{
    return httpForwardingIsSet_;
}

void ChannelDetail::unsethttpForwarding()
{
    httpForwardingIsSet_ = false;
}

DisForwarding ChannelDetail::getDisForwarding() const
{
    return disForwarding_;
}

void ChannelDetail::setDisForwarding(const DisForwarding& value)
{
    disForwarding_ = value;
    disForwardingIsSet_ = true;
}

bool ChannelDetail::disForwardingIsSet() const
{
    return disForwardingIsSet_;
}

void ChannelDetail::unsetdisForwarding()
{
    disForwardingIsSet_ = false;
}

ObsForwarding ChannelDetail::getObsForwarding() const
{
    return obsForwarding_;
}

void ChannelDetail::setObsForwarding(const ObsForwarding& value)
{
    obsForwarding_ = value;
    obsForwardingIsSet_ = true;
}

bool ChannelDetail::obsForwardingIsSet() const
{
    return obsForwardingIsSet_;
}

void ChannelDetail::unsetobsForwarding()
{
    obsForwardingIsSet_ = false;
}

AmqpForwarding ChannelDetail::getAmqpForwarding() const
{
    return amqpForwarding_;
}

void ChannelDetail::setAmqpForwarding(const AmqpForwarding& value)
{
    amqpForwarding_ = value;
    amqpForwardingIsSet_ = true;
}

bool ChannelDetail::amqpForwardingIsSet() const
{
    return amqpForwardingIsSet_;
}

void ChannelDetail::unsetamqpForwarding()
{
    amqpForwardingIsSet_ = false;
}

DmsKafkaForwarding ChannelDetail::getDmsKafkaForwarding() const
{
    return dmsKafkaForwarding_;
}

void ChannelDetail::setDmsKafkaForwarding(const DmsKafkaForwarding& value)
{
    dmsKafkaForwarding_ = value;
    dmsKafkaForwardingIsSet_ = true;
}

bool ChannelDetail::dmsKafkaForwardingIsSet() const
{
    return dmsKafkaForwardingIsSet_;
}

void ChannelDetail::unsetdmsKafkaForwarding()
{
    dmsKafkaForwardingIsSet_ = false;
}

RomaForwarding ChannelDetail::getRomaForwarding() const
{
    return romaForwarding_;
}

void ChannelDetail::setRomaForwarding(const RomaForwarding& value)
{
    romaForwarding_ = value;
    romaForwardingIsSet_ = true;
}

bool ChannelDetail::romaForwardingIsSet() const
{
    return romaForwardingIsSet_;
}

void ChannelDetail::unsetromaForwarding()
{
    romaForwardingIsSet_ = false;
}

MysqlForwarding ChannelDetail::getMysqlForwarding() const
{
    return mysqlForwarding_;
}

void ChannelDetail::setMysqlForwarding(const MysqlForwarding& value)
{
    mysqlForwarding_ = value;
    mysqlForwardingIsSet_ = true;
}

bool ChannelDetail::mysqlForwardingIsSet() const
{
    return mysqlForwardingIsSet_;
}

void ChannelDetail::unsetmysqlForwarding()
{
    mysqlForwardingIsSet_ = false;
}

InfluxDBForwarding ChannelDetail::getInfluxdbForwarding() const
{
    return influxdbForwarding_;
}

void ChannelDetail::setInfluxdbForwarding(const InfluxDBForwarding& value)
{
    influxdbForwarding_ = value;
    influxdbForwardingIsSet_ = true;
}

bool ChannelDetail::influxdbForwardingIsSet() const
{
    return influxdbForwardingIsSet_;
}

void ChannelDetail::unsetinfluxdbForwarding()
{
    influxdbForwardingIsSet_ = false;
}

FunctionGraphForwarding ChannelDetail::getFunctiongraphForwarding() const
{
    return functiongraphForwarding_;
}

void ChannelDetail::setFunctiongraphForwarding(const FunctionGraphForwarding& value)
{
    functiongraphForwarding_ = value;
    functiongraphForwardingIsSet_ = true;
}

bool ChannelDetail::functiongraphForwardingIsSet() const
{
    return functiongraphForwardingIsSet_;
}

void ChannelDetail::unsetfunctiongraphForwarding()
{
    functiongraphForwardingIsSet_ = false;
}

MrsKafkaForwarding ChannelDetail::getMrsKafkaForwarding() const
{
    return mrsKafkaForwarding_;
}

void ChannelDetail::setMrsKafkaForwarding(const MrsKafkaForwarding& value)
{
    mrsKafkaForwarding_ = value;
    mrsKafkaForwardingIsSet_ = true;
}

bool ChannelDetail::mrsKafkaForwardingIsSet() const
{
    return mrsKafkaForwardingIsSet_;
}

void ChannelDetail::unsetmrsKafkaForwarding()
{
    mrsKafkaForwardingIsSet_ = false;
}

DmsRocketMQForwarding ChannelDetail::getDmsRocketmqForwarding() const
{
    return dmsRocketmqForwarding_;
}

void ChannelDetail::setDmsRocketmqForwarding(const DmsRocketMQForwarding& value)
{
    dmsRocketmqForwarding_ = value;
    dmsRocketmqForwardingIsSet_ = true;
}

bool ChannelDetail::dmsRocketmqForwardingIsSet() const
{
    return dmsRocketmqForwardingIsSet_;
}

void ChannelDetail::unsetdmsRocketmqForwarding()
{
    dmsRocketmqForwardingIsSet_ = false;
}

}
}
}
}
}



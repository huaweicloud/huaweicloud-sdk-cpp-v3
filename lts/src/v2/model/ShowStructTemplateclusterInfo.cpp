

#include "huaweicloud/lts/v2/model/ShowStructTemplateclusterInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowStructTemplateclusterInfo::ShowStructTemplateclusterInfo()
{
    clusterName_ = "";
    clusterNameIsSet_ = false;
    kafkaBootstrapServers_ = "";
    kafkaBootstrapServersIsSet_ = false;
    kafkaSslEnable_ = false;
    kafkaSslEnableIsSet_ = false;
}

ShowStructTemplateclusterInfo::~ShowStructTemplateclusterInfo() = default;

void ShowStructTemplateclusterInfo::validate()
{
}

web::json::value ShowStructTemplateclusterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(kafkaBootstrapServersIsSet_) {
        val[utility::conversions::to_string_t("kafka_bootstrap_servers")] = ModelBase::toJson(kafkaBootstrapServers_);
    }
    if(kafkaSslEnableIsSet_) {
        val[utility::conversions::to_string_t("kafka_ssl_enable")] = ModelBase::toJson(kafkaSslEnable_);
    }

    return val;
}

bool ShowStructTemplateclusterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_bootstrap_servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_bootstrap_servers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaBootstrapServers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kafka_ssl_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_ssl_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaSslEnable(refVal);
        }
    }
    return ok;
}


std::string ShowStructTemplateclusterInfo::getClusterName() const
{
    return clusterName_;
}

void ShowStructTemplateclusterInfo::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool ShowStructTemplateclusterInfo::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void ShowStructTemplateclusterInfo::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string ShowStructTemplateclusterInfo::getKafkaBootstrapServers() const
{
    return kafkaBootstrapServers_;
}

void ShowStructTemplateclusterInfo::setKafkaBootstrapServers(const std::string& value)
{
    kafkaBootstrapServers_ = value;
    kafkaBootstrapServersIsSet_ = true;
}

bool ShowStructTemplateclusterInfo::kafkaBootstrapServersIsSet() const
{
    return kafkaBootstrapServersIsSet_;
}

void ShowStructTemplateclusterInfo::unsetkafkaBootstrapServers()
{
    kafkaBootstrapServersIsSet_ = false;
}

bool ShowStructTemplateclusterInfo::isKafkaSslEnable() const
{
    return kafkaSslEnable_;
}

void ShowStructTemplateclusterInfo::setKafkaSslEnable(bool value)
{
    kafkaSslEnable_ = value;
    kafkaSslEnableIsSet_ = true;
}

bool ShowStructTemplateclusterInfo::kafkaSslEnableIsSet() const
{
    return kafkaSslEnableIsSet_;
}

void ShowStructTemplateclusterInfo::unsetkafkaSslEnable()
{
    kafkaSslEnableIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/aad/v2/model/UpgradeInstanceData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpgradeInstanceData::UpgradeInstanceData()
{
    basicBandwidth_ = "";
    basicBandwidthIsSet_ = false;
    elasticBandwidth_ = "";
    elasticBandwidthIsSet_ = false;
    serviceBandwidth_ = 0;
    serviceBandwidthIsSet_ = false;
    portNum_ = 0;
    portNumIsSet_ = false;
    bindDomainNum_ = 0;
    bindDomainNumIsSet_ = false;
    elasticServiceBandwidthType_ = 0;
    elasticServiceBandwidthTypeIsSet_ = false;
    elasticServiceBandwidth_ = 0;
    elasticServiceBandwidthIsSet_ = false;
    basicQps_ = 0;
    basicQpsIsSet_ = false;
}

UpgradeInstanceData::~UpgradeInstanceData() = default;

void UpgradeInstanceData::validate()
{
}

web::json::value UpgradeInstanceData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(basicBandwidthIsSet_) {
        val[utility::conversions::to_string_t("basic_bandwidth")] = ModelBase::toJson(basicBandwidth_);
    }
    if(elasticBandwidthIsSet_) {
        val[utility::conversions::to_string_t("elastic_bandwidth")] = ModelBase::toJson(elasticBandwidth_);
    }
    if(serviceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("service_bandwidth")] = ModelBase::toJson(serviceBandwidth_);
    }
    if(portNumIsSet_) {
        val[utility::conversions::to_string_t("port_num")] = ModelBase::toJson(portNum_);
    }
    if(bindDomainNumIsSet_) {
        val[utility::conversions::to_string_t("bind_domain_num")] = ModelBase::toJson(bindDomainNum_);
    }
    if(elasticServiceBandwidthTypeIsSet_) {
        val[utility::conversions::to_string_t("elastic_service_bandwidth_type")] = ModelBase::toJson(elasticServiceBandwidthType_);
    }
    if(elasticServiceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("elastic_service_bandwidth")] = ModelBase::toJson(elasticServiceBandwidth_);
    }
    if(basicQpsIsSet_) {
        val[utility::conversions::to_string_t("basic_qps")] = ModelBase::toJson(basicQps_);
    }

    return val;
}
bool UpgradeInstanceData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("basic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bind_domain_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_domain_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindDomainNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_service_bandwidth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_service_bandwidth_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticServiceBandwidthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_service_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_service_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticServiceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_qps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicQps(refVal);
        }
    }
    return ok;
}


std::string UpgradeInstanceData::getBasicBandwidth() const
{
    return basicBandwidth_;
}

void UpgradeInstanceData::setBasicBandwidth(const std::string& value)
{
    basicBandwidth_ = value;
    basicBandwidthIsSet_ = true;
}

bool UpgradeInstanceData::basicBandwidthIsSet() const
{
    return basicBandwidthIsSet_;
}

void UpgradeInstanceData::unsetbasicBandwidth()
{
    basicBandwidthIsSet_ = false;
}

std::string UpgradeInstanceData::getElasticBandwidth() const
{
    return elasticBandwidth_;
}

void UpgradeInstanceData::setElasticBandwidth(const std::string& value)
{
    elasticBandwidth_ = value;
    elasticBandwidthIsSet_ = true;
}

bool UpgradeInstanceData::elasticBandwidthIsSet() const
{
    return elasticBandwidthIsSet_;
}

void UpgradeInstanceData::unsetelasticBandwidth()
{
    elasticBandwidthIsSet_ = false;
}

int32_t UpgradeInstanceData::getServiceBandwidth() const
{
    return serviceBandwidth_;
}

void UpgradeInstanceData::setServiceBandwidth(int32_t value)
{
    serviceBandwidth_ = value;
    serviceBandwidthIsSet_ = true;
}

bool UpgradeInstanceData::serviceBandwidthIsSet() const
{
    return serviceBandwidthIsSet_;
}

void UpgradeInstanceData::unsetserviceBandwidth()
{
    serviceBandwidthIsSet_ = false;
}

int32_t UpgradeInstanceData::getPortNum() const
{
    return portNum_;
}

void UpgradeInstanceData::setPortNum(int32_t value)
{
    portNum_ = value;
    portNumIsSet_ = true;
}

bool UpgradeInstanceData::portNumIsSet() const
{
    return portNumIsSet_;
}

void UpgradeInstanceData::unsetportNum()
{
    portNumIsSet_ = false;
}

int32_t UpgradeInstanceData::getBindDomainNum() const
{
    return bindDomainNum_;
}

void UpgradeInstanceData::setBindDomainNum(int32_t value)
{
    bindDomainNum_ = value;
    bindDomainNumIsSet_ = true;
}

bool UpgradeInstanceData::bindDomainNumIsSet() const
{
    return bindDomainNumIsSet_;
}

void UpgradeInstanceData::unsetbindDomainNum()
{
    bindDomainNumIsSet_ = false;
}

int32_t UpgradeInstanceData::getElasticServiceBandwidthType() const
{
    return elasticServiceBandwidthType_;
}

void UpgradeInstanceData::setElasticServiceBandwidthType(int32_t value)
{
    elasticServiceBandwidthType_ = value;
    elasticServiceBandwidthTypeIsSet_ = true;
}

bool UpgradeInstanceData::elasticServiceBandwidthTypeIsSet() const
{
    return elasticServiceBandwidthTypeIsSet_;
}

void UpgradeInstanceData::unsetelasticServiceBandwidthType()
{
    elasticServiceBandwidthTypeIsSet_ = false;
}

int32_t UpgradeInstanceData::getElasticServiceBandwidth() const
{
    return elasticServiceBandwidth_;
}

void UpgradeInstanceData::setElasticServiceBandwidth(int32_t value)
{
    elasticServiceBandwidth_ = value;
    elasticServiceBandwidthIsSet_ = true;
}

bool UpgradeInstanceData::elasticServiceBandwidthIsSet() const
{
    return elasticServiceBandwidthIsSet_;
}

void UpgradeInstanceData::unsetelasticServiceBandwidth()
{
    elasticServiceBandwidthIsSet_ = false;
}

int32_t UpgradeInstanceData::getBasicQps() const
{
    return basicQps_;
}

void UpgradeInstanceData::setBasicQps(int32_t value)
{
    basicQps_ = value;
    basicQpsIsSet_ = true;
}

bool UpgradeInstanceData::basicQpsIsSet() const
{
    return basicQpsIsSet_;
}

void UpgradeInstanceData::unsetbasicQps()
{
    basicQpsIsSet_ = false;
}

}
}
}
}
}



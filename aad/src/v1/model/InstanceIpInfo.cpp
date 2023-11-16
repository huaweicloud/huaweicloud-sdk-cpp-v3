

#include "huaweicloud/aad/v1/model/InstanceIpInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




InstanceIpInfo::InstanceIpInfo()
{
    ipId_ = "";
    ipIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    basicBandwidth_ = 0;
    basicBandwidthIsSet_ = false;
    elasticBandwidth_ = 0;
    elasticBandwidthIsSet_ = false;
    ipStatus_ = 0;
    ipStatusIsSet_ = false;
}

InstanceIpInfo::~InstanceIpInfo() = default;

void InstanceIpInfo::validate()
{
}

web::json::value InstanceIpInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIdIsSet_) {
        val[utility::conversions::to_string_t("ip_id")] = ModelBase::toJson(ipId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(basicBandwidthIsSet_) {
        val[utility::conversions::to_string_t("basic_bandwidth")] = ModelBase::toJson(basicBandwidth_);
    }
    if(elasticBandwidthIsSet_) {
        val[utility::conversions::to_string_t("elastic_bandwidth")] = ModelBase::toJson(elasticBandwidth_);
    }
    if(ipStatusIsSet_) {
        val[utility::conversions::to_string_t("ip_status")] = ModelBase::toJson(ipStatus_);
    }

    return val;
}
bool InstanceIpInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elastic_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elastic_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpStatus(refVal);
        }
    }
    return ok;
}


std::string InstanceIpInfo::getIpId() const
{
    return ipId_;
}

void InstanceIpInfo::setIpId(const std::string& value)
{
    ipId_ = value;
    ipIdIsSet_ = true;
}

bool InstanceIpInfo::ipIdIsSet() const
{
    return ipIdIsSet_;
}

void InstanceIpInfo::unsetipId()
{
    ipIdIsSet_ = false;
}

std::string InstanceIpInfo::getIp() const
{
    return ip_;
}

void InstanceIpInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool InstanceIpInfo::ipIsSet() const
{
    return ipIsSet_;
}

void InstanceIpInfo::unsetip()
{
    ipIsSet_ = false;
}

int32_t InstanceIpInfo::getBasicBandwidth() const
{
    return basicBandwidth_;
}

void InstanceIpInfo::setBasicBandwidth(int32_t value)
{
    basicBandwidth_ = value;
    basicBandwidthIsSet_ = true;
}

bool InstanceIpInfo::basicBandwidthIsSet() const
{
    return basicBandwidthIsSet_;
}

void InstanceIpInfo::unsetbasicBandwidth()
{
    basicBandwidthIsSet_ = false;
}

int32_t InstanceIpInfo::getElasticBandwidth() const
{
    return elasticBandwidth_;
}

void InstanceIpInfo::setElasticBandwidth(int32_t value)
{
    elasticBandwidth_ = value;
    elasticBandwidthIsSet_ = true;
}

bool InstanceIpInfo::elasticBandwidthIsSet() const
{
    return elasticBandwidthIsSet_;
}

void InstanceIpInfo::unsetelasticBandwidth()
{
    elasticBandwidthIsSet_ = false;
}

int32_t InstanceIpInfo::getIpStatus() const
{
    return ipStatus_;
}

void InstanceIpInfo::setIpStatus(int32_t value)
{
    ipStatus_ = value;
    ipStatusIsSet_ = true;
}

bool InstanceIpInfo::ipStatusIsSet() const
{
    return ipStatusIsSet_;
}

void InstanceIpInfo::unsetipStatus()
{
    ipStatusIsSet_ = false;
}

}
}
}
}
}



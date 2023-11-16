

#include "huaweicloud/aad/v1/model/InstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




InstanceInfo::InstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    ipsIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    serviceBandwidth_ = 0;
    serviceBandwidthIsSet_ = false;
    instanceStatus_ = 0;
    instanceStatusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

InstanceInfo::~InstanceInfo() = default;

void InstanceInfo::validate()
{
}

web::json::value InstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(serviceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("service_bandwidth")] = ModelBase::toJson(serviceBandwidth_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool InstanceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceIpInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string InstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void InstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceInfo::getInstanceName() const
{
    return instanceName_;
}

void InstanceInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstanceInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstanceInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<InstanceIpInfo>& InstanceInfo::getIps()
{
    return ips_;
}

void InstanceInfo::setIps(const std::vector<InstanceIpInfo>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool InstanceInfo::ipsIsSet() const
{
    return ipsIsSet_;
}

void InstanceInfo::unsetips()
{
    ipsIsSet_ = false;
}

int64_t InstanceInfo::getExpireTime() const
{
    return expireTime_;
}

void InstanceInfo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool InstanceInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void InstanceInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

int32_t InstanceInfo::getServiceBandwidth() const
{
    return serviceBandwidth_;
}

void InstanceInfo::setServiceBandwidth(int32_t value)
{
    serviceBandwidth_ = value;
    serviceBandwidthIsSet_ = true;
}

bool InstanceInfo::serviceBandwidthIsSet() const
{
    return serviceBandwidthIsSet_;
}

void InstanceInfo::unsetserviceBandwidth()
{
    serviceBandwidthIsSet_ = false;
}

int32_t InstanceInfo::getInstanceStatus() const
{
    return instanceStatus_;
}

void InstanceInfo::setInstanceStatus(int32_t value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool InstanceInfo::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void InstanceInfo::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string InstanceInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void InstanceInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool InstanceInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void InstanceInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}



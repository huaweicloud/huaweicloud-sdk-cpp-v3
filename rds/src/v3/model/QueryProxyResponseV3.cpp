

#include "huaweicloud/rds/v3/model/QueryProxyResponseV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryProxyResponseV3::QueryProxyResponseV3()
{
    proxyIsSet_ = false;
    masterInstanceIsSet_ = false;
    readonlyInstancesIsSet_ = false;
    proxySecurityGroupCheckResult_ = false;
    proxySecurityGroupCheckResultIsSet_ = false;
}

QueryProxyResponseV3::~QueryProxyResponseV3() = default;

void QueryProxyResponseV3::validate()
{
}

web::json::value QueryProxyResponseV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyIsSet_) {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(proxy_);
    }
    if(masterInstanceIsSet_) {
        val[utility::conversions::to_string_t("master_instance")] = ModelBase::toJson(masterInstance_);
    }
    if(readonlyInstancesIsSet_) {
        val[utility::conversions::to_string_t("readonly_instances")] = ModelBase::toJson(readonlyInstances_);
    }
    if(proxySecurityGroupCheckResultIsSet_) {
        val[utility::conversions::to_string_t("proxy_security_group_check_result")] = ModelBase::toJson(proxySecurityGroupCheckResult_);
    }

    return val;
}
bool QueryProxyResponseV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            ProxyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance"));
        if(!fieldValue.is_null())
        {
            InstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_security_group_check_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_security_group_check_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxySecurityGroupCheckResult(refVal);
        }
    }
    return ok;
}


ProxyInfo QueryProxyResponseV3::getProxy() const
{
    return proxy_;
}

void QueryProxyResponseV3::setProxy(const ProxyInfo& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool QueryProxyResponseV3::proxyIsSet() const
{
    return proxyIsSet_;
}

void QueryProxyResponseV3::unsetproxy()
{
    proxyIsSet_ = false;
}

InstanceInfo QueryProxyResponseV3::getMasterInstance() const
{
    return masterInstance_;
}

void QueryProxyResponseV3::setMasterInstance(const InstanceInfo& value)
{
    masterInstance_ = value;
    masterInstanceIsSet_ = true;
}

bool QueryProxyResponseV3::masterInstanceIsSet() const
{
    return masterInstanceIsSet_;
}

void QueryProxyResponseV3::unsetmasterInstance()
{
    masterInstanceIsSet_ = false;
}

std::vector<InstanceInfo>& QueryProxyResponseV3::getReadonlyInstances()
{
    return readonlyInstances_;
}

void QueryProxyResponseV3::setReadonlyInstances(const std::vector<InstanceInfo>& value)
{
    readonlyInstances_ = value;
    readonlyInstancesIsSet_ = true;
}

bool QueryProxyResponseV3::readonlyInstancesIsSet() const
{
    return readonlyInstancesIsSet_;
}

void QueryProxyResponseV3::unsetreadonlyInstances()
{
    readonlyInstancesIsSet_ = false;
}

bool QueryProxyResponseV3::isProxySecurityGroupCheckResult() const
{
    return proxySecurityGroupCheckResult_;
}

void QueryProxyResponseV3::setProxySecurityGroupCheckResult(bool value)
{
    proxySecurityGroupCheckResult_ = value;
    proxySecurityGroupCheckResultIsSet_ = true;
}

bool QueryProxyResponseV3::proxySecurityGroupCheckResultIsSet() const
{
    return proxySecurityGroupCheckResultIsSet_;
}

void QueryProxyResponseV3::unsetproxySecurityGroupCheckResult()
{
    proxySecurityGroupCheckResultIsSet_ = false;
}

}
}
}
}
}



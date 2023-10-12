

#include "huaweicloud/rds/v3/model/ShowInformationAboutDatabaseProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowInformationAboutDatabaseProxyResponse::ShowInformationAboutDatabaseProxyResponse()
{
    proxyIsSet_ = false;
    masterInstanceIsSet_ = false;
    readonlyInstancesIsSet_ = false;
}

ShowInformationAboutDatabaseProxyResponse::~ShowInformationAboutDatabaseProxyResponse() = default;

void ShowInformationAboutDatabaseProxyResponse::validate()
{
}

web::json::value ShowInformationAboutDatabaseProxyResponse::toJson() const
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

    return val;
}
bool ShowInformationAboutDatabaseProxyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            Proxy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_instance"));
        if(!fieldValue.is_null())
        {
            MasterInstance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ReadonlyInstances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyInstances(refVal);
        }
    }
    return ok;
}


Proxy ShowInformationAboutDatabaseProxyResponse::getProxy() const
{
    return proxy_;
}

void ShowInformationAboutDatabaseProxyResponse::setProxy(const Proxy& value)
{
    proxy_ = value;
    proxyIsSet_ = true;
}

bool ShowInformationAboutDatabaseProxyResponse::proxyIsSet() const
{
    return proxyIsSet_;
}

void ShowInformationAboutDatabaseProxyResponse::unsetproxy()
{
    proxyIsSet_ = false;
}

MasterInstance ShowInformationAboutDatabaseProxyResponse::getMasterInstance() const
{
    return masterInstance_;
}

void ShowInformationAboutDatabaseProxyResponse::setMasterInstance(const MasterInstance& value)
{
    masterInstance_ = value;
    masterInstanceIsSet_ = true;
}

bool ShowInformationAboutDatabaseProxyResponse::masterInstanceIsSet() const
{
    return masterInstanceIsSet_;
}

void ShowInformationAboutDatabaseProxyResponse::unsetmasterInstance()
{
    masterInstanceIsSet_ = false;
}

std::vector<ReadonlyInstances>& ShowInformationAboutDatabaseProxyResponse::getReadonlyInstances()
{
    return readonlyInstances_;
}

void ShowInformationAboutDatabaseProxyResponse::setReadonlyInstances(const std::vector<ReadonlyInstances>& value)
{
    readonlyInstances_ = value;
    readonlyInstancesIsSet_ = true;
}

bool ShowInformationAboutDatabaseProxyResponse::readonlyInstancesIsSet() const
{
    return readonlyInstancesIsSet_;
}

void ShowInformationAboutDatabaseProxyResponse::unsetreadonlyInstances()
{
    readonlyInstancesIsSet_ = false;
}

}
}
}
}
}



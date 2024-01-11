

#include "huaweicloud/drs/v5/model/JobEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobEndpointInfo::JobEndpointInfo()
{
    dbType_ = "";
    dbTypeIsSet_ = false;
    endpointType_ = "";
    endpointTypeIsSet_ = false;
    endpointRole_ = "";
    endpointRoleIsSet_ = false;
    endpointIsSet_ = false;
    cloudIsSet_ = false;
    vpcIsSet_ = false;
    configIsSet_ = false;
    sslIsSet_ = false;
    customizedDnsIsSet_ = false;
}

JobEndpointInfo::~JobEndpointInfo() = default;

void JobEndpointInfo::validate()
{
}

web::json::value JobEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(endpointTypeIsSet_) {
        val[utility::conversions::to_string_t("endpoint_type")] = ModelBase::toJson(endpointType_);
    }
    if(endpointRoleIsSet_) {
        val[utility::conversions::to_string_t("endpoint_role")] = ModelBase::toJson(endpointRole_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(cloudIsSet_) {
        val[utility::conversions::to_string_t("cloud")] = ModelBase::toJson(cloud_);
    }
    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(sslIsSet_) {
        val[utility::conversions::to_string_t("ssl")] = ModelBase::toJson(ssl_);
    }
    if(customizedDnsIsSet_) {
        val[utility::conversions::to_string_t("customized_dns")] = ModelBase::toJson(customizedDns_);
    }

    return val;
}
bool JobEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            BaseEndpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud"));
        if(!fieldValue.is_null())
        {
            CloudBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloud(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            CloudVpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            BaseEndpointConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl"));
        if(!fieldValue.is_null())
        {
            EndpointSslConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customized_dns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customized_dns"));
        if(!fieldValue.is_null())
        {
            CustomizedDns refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomizedDns(refVal);
        }
    }
    return ok;
}


std::string JobEndpointInfo::getDbType() const
{
    return dbType_;
}

void JobEndpointInfo::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool JobEndpointInfo::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void JobEndpointInfo::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string JobEndpointInfo::getEndpointType() const
{
    return endpointType_;
}

void JobEndpointInfo::setEndpointType(const std::string& value)
{
    endpointType_ = value;
    endpointTypeIsSet_ = true;
}

bool JobEndpointInfo::endpointTypeIsSet() const
{
    return endpointTypeIsSet_;
}

void JobEndpointInfo::unsetendpointType()
{
    endpointTypeIsSet_ = false;
}

std::string JobEndpointInfo::getEndpointRole() const
{
    return endpointRole_;
}

void JobEndpointInfo::setEndpointRole(const std::string& value)
{
    endpointRole_ = value;
    endpointRoleIsSet_ = true;
}

bool JobEndpointInfo::endpointRoleIsSet() const
{
    return endpointRoleIsSet_;
}

void JobEndpointInfo::unsetendpointRole()
{
    endpointRoleIsSet_ = false;
}

BaseEndpoint JobEndpointInfo::getEndpoint() const
{
    return endpoint_;
}

void JobEndpointInfo::setEndpoint(const BaseEndpoint& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool JobEndpointInfo::endpointIsSet() const
{
    return endpointIsSet_;
}

void JobEndpointInfo::unsetendpoint()
{
    endpointIsSet_ = false;
}

CloudBaseInfo JobEndpointInfo::getCloud() const
{
    return cloud_;
}

void JobEndpointInfo::setCloud(const CloudBaseInfo& value)
{
    cloud_ = value;
    cloudIsSet_ = true;
}

bool JobEndpointInfo::cloudIsSet() const
{
    return cloudIsSet_;
}

void JobEndpointInfo::unsetcloud()
{
    cloudIsSet_ = false;
}

CloudVpcInfo JobEndpointInfo::getVpc() const
{
    return vpc_;
}

void JobEndpointInfo::setVpc(const CloudVpcInfo& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool JobEndpointInfo::vpcIsSet() const
{
    return vpcIsSet_;
}

void JobEndpointInfo::unsetvpc()
{
    vpcIsSet_ = false;
}

BaseEndpointConfig JobEndpointInfo::getConfig() const
{
    return config_;
}

void JobEndpointInfo::setConfig(const BaseEndpointConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool JobEndpointInfo::configIsSet() const
{
    return configIsSet_;
}

void JobEndpointInfo::unsetconfig()
{
    configIsSet_ = false;
}

EndpointSslConfig JobEndpointInfo::getSsl() const
{
    return ssl_;
}

void JobEndpointInfo::setSsl(const EndpointSslConfig& value)
{
    ssl_ = value;
    sslIsSet_ = true;
}

bool JobEndpointInfo::sslIsSet() const
{
    return sslIsSet_;
}

void JobEndpointInfo::unsetssl()
{
    sslIsSet_ = false;
}

CustomizedDns JobEndpointInfo::getCustomizedDns() const
{
    return customizedDns_;
}

void JobEndpointInfo::setCustomizedDns(const CustomizedDns& value)
{
    customizedDns_ = value;
    customizedDnsIsSet_ = true;
}

bool JobEndpointInfo::customizedDnsIsSet() const
{
    return customizedDnsIsSet_;
}

void JobEndpointInfo::unsetcustomizedDns()
{
    customizedDnsIsSet_ = false;
}

}
}
}
}
}



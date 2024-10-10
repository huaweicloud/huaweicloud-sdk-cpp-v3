

#include "huaweicloud/drs/v5/model/UpdateConnectionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateConnectionReq::UpdateConnectionReq()
{
    name_ = "";
    nameIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    configIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    endpointIsSet_ = false;
    vpcIsSet_ = false;
    sslIsSet_ = false;
    cloudIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

UpdateConnectionReq::~UpdateConnectionReq() = default;

void UpdateConnectionReq::validate()
{
}

web::json::value UpdateConnectionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(sslIsSet_) {
        val[utility::conversions::to_string_t("ssl")] = ModelBase::toJson(ssl_);
    }
    if(cloudIsSet_) {
        val[utility::conversions::to_string_t("cloud")] = ModelBase::toJson(cloud_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool UpdateConnectionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            ConnectionConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            CloudVpcInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cloud"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud"));
        if(!fieldValue.is_null())
        {
            CloudBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloud(refVal);
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


std::string UpdateConnectionReq::getName() const
{
    return name_;
}

void UpdateConnectionReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateConnectionReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateConnectionReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateConnectionReq::getDbType() const
{
    return dbType_;
}

void UpdateConnectionReq::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool UpdateConnectionReq::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void UpdateConnectionReq::unsetdbType()
{
    dbTypeIsSet_ = false;
}

ConnectionConfig UpdateConnectionReq::getConfig() const
{
    return config_;
}

void UpdateConnectionReq::setConfig(const ConnectionConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool UpdateConnectionReq::configIsSet() const
{
    return configIsSet_;
}

void UpdateConnectionReq::unsetconfig()
{
    configIsSet_ = false;
}

std::string UpdateConnectionReq::getDescription() const
{
    return description_;
}

void UpdateConnectionReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateConnectionReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateConnectionReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

BaseEndpoint UpdateConnectionReq::getEndpoint() const
{
    return endpoint_;
}

void UpdateConnectionReq::setEndpoint(const BaseEndpoint& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool UpdateConnectionReq::endpointIsSet() const
{
    return endpointIsSet_;
}

void UpdateConnectionReq::unsetendpoint()
{
    endpointIsSet_ = false;
}

CloudVpcInfo UpdateConnectionReq::getVpc() const
{
    return vpc_;
}

void UpdateConnectionReq::setVpc(const CloudVpcInfo& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool UpdateConnectionReq::vpcIsSet() const
{
    return vpcIsSet_;
}

void UpdateConnectionReq::unsetvpc()
{
    vpcIsSet_ = false;
}

EndpointSslConfig UpdateConnectionReq::getSsl() const
{
    return ssl_;
}

void UpdateConnectionReq::setSsl(const EndpointSslConfig& value)
{
    ssl_ = value;
    sslIsSet_ = true;
}

bool UpdateConnectionReq::sslIsSet() const
{
    return sslIsSet_;
}

void UpdateConnectionReq::unsetssl()
{
    sslIsSet_ = false;
}

CloudBaseInfo UpdateConnectionReq::getCloud() const
{
    return cloud_;
}

void UpdateConnectionReq::setCloud(const CloudBaseInfo& value)
{
    cloud_ = value;
    cloudIsSet_ = true;
}

bool UpdateConnectionReq::cloudIsSet() const
{
    return cloudIsSet_;
}

void UpdateConnectionReq::unsetcloud()
{
    cloudIsSet_ = false;
}

std::string UpdateConnectionReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateConnectionReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateConnectionReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateConnectionReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}



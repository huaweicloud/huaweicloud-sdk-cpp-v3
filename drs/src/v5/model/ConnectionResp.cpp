

#include "huaweicloud/drs/v5/model/ConnectionResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ConnectionResp::ConnectionResp()
{
    connectionId_ = "";
    connectionIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    configIsSet_ = false;
    endpointIsSet_ = false;
    vpcIsSet_ = false;
    sslIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ConnectionResp::~ConnectionResp() = default;

void ConnectionResp::validate()
{
}

web::json::value ConnectionResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectionIdIsSet_) {
        val[utility::conversions::to_string_t("connection_id")] = ModelBase::toJson(connectionId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ConnectionResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    return ok;
}


std::string ConnectionResp::getConnectionId() const
{
    return connectionId_;
}

void ConnectionResp::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool ConnectionResp::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void ConnectionResp::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

std::string ConnectionResp::getName() const
{
    return name_;
}

void ConnectionResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConnectionResp::nameIsSet() const
{
    return nameIsSet_;
}

void ConnectionResp::unsetname()
{
    nameIsSet_ = false;
}

int64_t ConnectionResp::getCreateTime() const
{
    return createTime_;
}

void ConnectionResp::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ConnectionResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ConnectionResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ConnectionResp::getDbType() const
{
    return dbType_;
}

void ConnectionResp::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool ConnectionResp::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void ConnectionResp::unsetdbType()
{
    dbTypeIsSet_ = false;
}

ConnectionConfig ConnectionResp::getConfig() const
{
    return config_;
}

void ConnectionResp::setConfig(const ConnectionConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool ConnectionResp::configIsSet() const
{
    return configIsSet_;
}

void ConnectionResp::unsetconfig()
{
    configIsSet_ = false;
}

BaseEndpoint ConnectionResp::getEndpoint() const
{
    return endpoint_;
}

void ConnectionResp::setEndpoint(const BaseEndpoint& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ConnectionResp::endpointIsSet() const
{
    return endpointIsSet_;
}

void ConnectionResp::unsetendpoint()
{
    endpointIsSet_ = false;
}

CloudVpcInfo ConnectionResp::getVpc() const
{
    return vpc_;
}

void ConnectionResp::setVpc(const CloudVpcInfo& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool ConnectionResp::vpcIsSet() const
{
    return vpcIsSet_;
}

void ConnectionResp::unsetvpc()
{
    vpcIsSet_ = false;
}

EndpointSslConfig ConnectionResp::getSsl() const
{
    return ssl_;
}

void ConnectionResp::setSsl(const EndpointSslConfig& value)
{
    ssl_ = value;
    sslIsSet_ = true;
}

bool ConnectionResp::sslIsSet() const
{
    return sslIsSet_;
}

void ConnectionResp::unsetssl()
{
    sslIsSet_ = false;
}

std::string ConnectionResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ConnectionResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ConnectionResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ConnectionResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ConnectionResp::getDescription() const
{
    return description_;
}

void ConnectionResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConnectionResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConnectionResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



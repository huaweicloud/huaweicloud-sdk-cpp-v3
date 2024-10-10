

#include "huaweicloud/drs/v5/model/CreateConnectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateConnectionResponse::CreateConnectionResponse()
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

CreateConnectionResponse::~CreateConnectionResponse() = default;

void CreateConnectionResponse::validate()
{
}

web::json::value CreateConnectionResponse::toJson() const
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
bool CreateConnectionResponse::fromJson(const web::json::value& val)
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


std::string CreateConnectionResponse::getConnectionId() const
{
    return connectionId_;
}

void CreateConnectionResponse::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool CreateConnectionResponse::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void CreateConnectionResponse::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

std::string CreateConnectionResponse::getName() const
{
    return name_;
}

void CreateConnectionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateConnectionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateConnectionResponse::unsetname()
{
    nameIsSet_ = false;
}

int64_t CreateConnectionResponse::getCreateTime() const
{
    return createTime_;
}

void CreateConnectionResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateConnectionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateConnectionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateConnectionResponse::getDbType() const
{
    return dbType_;
}

void CreateConnectionResponse::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool CreateConnectionResponse::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void CreateConnectionResponse::unsetdbType()
{
    dbTypeIsSet_ = false;
}

ConnectionConfig CreateConnectionResponse::getConfig() const
{
    return config_;
}

void CreateConnectionResponse::setConfig(const ConnectionConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool CreateConnectionResponse::configIsSet() const
{
    return configIsSet_;
}

void CreateConnectionResponse::unsetconfig()
{
    configIsSet_ = false;
}

BaseEndpoint CreateConnectionResponse::getEndpoint() const
{
    return endpoint_;
}

void CreateConnectionResponse::setEndpoint(const BaseEndpoint& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool CreateConnectionResponse::endpointIsSet() const
{
    return endpointIsSet_;
}

void CreateConnectionResponse::unsetendpoint()
{
    endpointIsSet_ = false;
}

CloudVpcInfo CreateConnectionResponse::getVpc() const
{
    return vpc_;
}

void CreateConnectionResponse::setVpc(const CloudVpcInfo& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool CreateConnectionResponse::vpcIsSet() const
{
    return vpcIsSet_;
}

void CreateConnectionResponse::unsetvpc()
{
    vpcIsSet_ = false;
}

EndpointSslConfig CreateConnectionResponse::getSsl() const
{
    return ssl_;
}

void CreateConnectionResponse::setSsl(const EndpointSslConfig& value)
{
    ssl_ = value;
    sslIsSet_ = true;
}

bool CreateConnectionResponse::sslIsSet() const
{
    return sslIsSet_;
}

void CreateConnectionResponse::unsetssl()
{
    sslIsSet_ = false;
}

std::string CreateConnectionResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateConnectionResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateConnectionResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateConnectionResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateConnectionResponse::getDescription() const
{
    return description_;
}

void CreateConnectionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateConnectionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateConnectionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



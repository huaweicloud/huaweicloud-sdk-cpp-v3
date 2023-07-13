

#include "huaweicloud/drs/v5/model/BaseEndpoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BaseEndpoint::BaseEndpoint()
{
    id_ = "";
    idIsSet_ = false;
    endpointName_ = "";
    endpointNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    dbPort_ = "";
    dbPortIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    sourceShardingIsSet_ = false;
}

BaseEndpoint::~BaseEndpoint() = default;

void BaseEndpoint::validate()
{
}

web::json::value BaseEndpoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(endpointNameIsSet_) {
        val[utility::conversions::to_string_t("endpoint_name")] = ModelBase::toJson(endpointName_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(sourceShardingIsSet_) {
        val[utility::conversions::to_string_t("source_sharding")] = ModelBase::toJson(sourceSharding_);
    }

    return val;
}

bool BaseEndpoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPassword(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_sharding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_sharding"));
        if(!fieldValue.is_null())
        {
            std::vector<BaseEndpoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSharding(refVal);
        }
    }
    return ok;
}

std::string BaseEndpoint::getId() const
{
    return id_;
}

void BaseEndpoint::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BaseEndpoint::idIsSet() const
{
    return idIsSet_;
}

void BaseEndpoint::unsetid()
{
    idIsSet_ = false;
}

std::string BaseEndpoint::getEndpointName() const
{
    return endpointName_;
}

void BaseEndpoint::setEndpointName(const std::string& value)
{
    endpointName_ = value;
    endpointNameIsSet_ = true;
}

bool BaseEndpoint::endpointNameIsSet() const
{
    return endpointNameIsSet_;
}

void BaseEndpoint::unsetendpointName()
{
    endpointNameIsSet_ = false;
}

std::string BaseEndpoint::getIp() const
{
    return ip_;
}

void BaseEndpoint::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BaseEndpoint::ipIsSet() const
{
    return ipIsSet_;
}

void BaseEndpoint::unsetip()
{
    ipIsSet_ = false;
}

std::string BaseEndpoint::getDbPort() const
{
    return dbPort_;
}

void BaseEndpoint::setDbPort(const std::string& value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool BaseEndpoint::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void BaseEndpoint::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string BaseEndpoint::getDbUser() const
{
    return dbUser_;
}

void BaseEndpoint::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool BaseEndpoint::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void BaseEndpoint::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string BaseEndpoint::getDbPassword() const
{
    return dbPassword_;
}

void BaseEndpoint::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool BaseEndpoint::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void BaseEndpoint::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

std::string BaseEndpoint::getInstanceId() const
{
    return instanceId_;
}

void BaseEndpoint::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BaseEndpoint::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BaseEndpoint::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BaseEndpoint::getInstanceName() const
{
    return instanceName_;
}

void BaseEndpoint::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool BaseEndpoint::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void BaseEndpoint::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string BaseEndpoint::getDbName() const
{
    return dbName_;
}

void BaseEndpoint::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool BaseEndpoint::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void BaseEndpoint::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<BaseEndpoint>& BaseEndpoint::getSourceSharding()
{
    return sourceSharding_;
}

void BaseEndpoint::setSourceSharding(const std::vector<BaseEndpoint>& value)
{
    sourceSharding_ = value;
    sourceShardingIsSet_ = true;
}

bool BaseEndpoint::sourceShardingIsSet() const
{
    return sourceShardingIsSet_;
}

void BaseEndpoint::unsetsourceSharding()
{
    sourceShardingIsSet_ = false;
}

}
}
}
}
}



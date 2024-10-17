

#include "huaweicloud/dbss/v1/model/RdsDbListResponse_databases.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsDbListResponse_databases::RdsDbListResponse_databases()
{
    id_ = "";
    idIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    isSupported_ = false;
    isSupportedIsSet_ = false;
    enterpriseId_ = "";
    enterpriseIdIsSet_ = false;
}

RdsDbListResponse_databases::~RdsDbListResponse_databases() = default;

void RdsDbListResponse_databases::validate()
{
}

web::json::value RdsDbListResponse_databases::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(isSupportedIsSet_) {
        val[utility::conversions::to_string_t("is_supported")] = ModelBase::toJson(isSupported_);
    }
    if(enterpriseIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_id")] = ModelBase::toJson(enterpriseId_);
    }

    return val;
}
bool RdsDbListResponse_databases::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_supported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_supported"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupported(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseId(refVal);
        }
    }
    return ok;
}


std::string RdsDbListResponse_databases::getId() const
{
    return id_;
}

void RdsDbListResponse_databases::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RdsDbListResponse_databases::idIsSet() const
{
    return idIsSet_;
}

void RdsDbListResponse_databases::unsetid()
{
    idIsSet_ = false;
}

std::string RdsDbListResponse_databases::getDbName() const
{
    return dbName_;
}

void RdsDbListResponse_databases::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RdsDbListResponse_databases::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RdsDbListResponse_databases::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string RdsDbListResponse_databases::getStatus() const
{
    return status_;
}

void RdsDbListResponse_databases::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RdsDbListResponse_databases::statusIsSet() const
{
    return statusIsSet_;
}

void RdsDbListResponse_databases::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RdsDbListResponse_databases::getPort() const
{
    return port_;
}

void RdsDbListResponse_databases::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool RdsDbListResponse_databases::portIsSet() const
{
    return portIsSet_;
}

void RdsDbListResponse_databases::unsetport()
{
    portIsSet_ = false;
}

std::string RdsDbListResponse_databases::getIp() const
{
    return ip_;
}

void RdsDbListResponse_databases::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool RdsDbListResponse_databases::ipIsSet() const
{
    return ipIsSet_;
}

void RdsDbListResponse_databases::unsetip()
{
    ipIsSet_ = false;
}

std::string RdsDbListResponse_databases::getInstanceName() const
{
    return instanceName_;
}

void RdsDbListResponse_databases::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool RdsDbListResponse_databases::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void RdsDbListResponse_databases::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string RdsDbListResponse_databases::getType() const
{
    return type_;
}

void RdsDbListResponse_databases::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RdsDbListResponse_databases::typeIsSet() const
{
    return typeIsSet_;
}

void RdsDbListResponse_databases::unsettype()
{
    typeIsSet_ = false;
}

std::string RdsDbListResponse_databases::getVersion() const
{
    return version_;
}

void RdsDbListResponse_databases::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool RdsDbListResponse_databases::versionIsSet() const
{
    return versionIsSet_;
}

void RdsDbListResponse_databases::unsetversion()
{
    versionIsSet_ = false;
}

bool RdsDbListResponse_databases::isIsSupported() const
{
    return isSupported_;
}

void RdsDbListResponse_databases::setIsSupported(bool value)
{
    isSupported_ = value;
    isSupportedIsSet_ = true;
}

bool RdsDbListResponse_databases::isSupportedIsSet() const
{
    return isSupportedIsSet_;
}

void RdsDbListResponse_databases::unsetisSupported()
{
    isSupportedIsSet_ = false;
}

std::string RdsDbListResponse_databases::getEnterpriseId() const
{
    return enterpriseId_;
}

void RdsDbListResponse_databases::setEnterpriseId(const std::string& value)
{
    enterpriseId_ = value;
    enterpriseIdIsSet_ = true;
}

bool RdsDbListResponse_databases::enterpriseIdIsSet() const
{
    return enterpriseIdIsSet_;
}

void RdsDbListResponse_databases::unsetenterpriseId()
{
    enterpriseIdIsSet_ = false;
}

}
}
}
}
}



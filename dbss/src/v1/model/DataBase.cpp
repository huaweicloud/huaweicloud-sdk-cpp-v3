

#include "huaweicloud/dbss/v1/model/DataBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DataBase::DataBase()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    charset_ = "";
    charsetIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    auditStatus_ = "";
    auditStatusIsSet_ = false;
    agentUrlIsSet_ = false;
    dbClassification_ = "";
    dbClassificationIsSet_ = false;
}

DataBase::~DataBase() = default;

void DataBase::validate()
{
}

web::json::value DataBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(charsetIsSet_) {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(charset_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(auditStatusIsSet_) {
        val[utility::conversions::to_string_t("audit_status")] = ModelBase::toJson(auditStatus_);
    }
    if(agentUrlIsSet_) {
        val[utility::conversions::to_string_t("agent_url")] = ModelBase::toJson(agentUrl_);
    }
    if(dbClassificationIsSet_) {
        val[utility::conversions::to_string_t("db_classification")] = ModelBase::toJson(dbClassification_);
    }

    return val;
}
bool DataBase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_classification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_classification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbClassification(refVal);
        }
    }
    return ok;
}


std::string DataBase::getId() const
{
    return id_;
}

void DataBase::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DataBase::idIsSet() const
{
    return idIsSet_;
}

void DataBase::unsetid()
{
    idIsSet_ = false;
}

std::string DataBase::getName() const
{
    return name_;
}

void DataBase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DataBase::nameIsSet() const
{
    return nameIsSet_;
}

void DataBase::unsetname()
{
    nameIsSet_ = false;
}

std::string DataBase::getType() const
{
    return type_;
}

void DataBase::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DataBase::typeIsSet() const
{
    return typeIsSet_;
}

void DataBase::unsettype()
{
    typeIsSet_ = false;
}

std::string DataBase::getVersion() const
{
    return version_;
}

void DataBase::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DataBase::versionIsSet() const
{
    return versionIsSet_;
}

void DataBase::unsetversion()
{
    versionIsSet_ = false;
}

std::string DataBase::getCharset() const
{
    return charset_;
}

void DataBase::setCharset(const std::string& value)
{
    charset_ = value;
    charsetIsSet_ = true;
}

bool DataBase::charsetIsSet() const
{
    return charsetIsSet_;
}

void DataBase::unsetcharset()
{
    charsetIsSet_ = false;
}

std::string DataBase::getIp() const
{
    return ip_;
}

void DataBase::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DataBase::ipIsSet() const
{
    return ipIsSet_;
}

void DataBase::unsetip()
{
    ipIsSet_ = false;
}

std::string DataBase::getPort() const
{
    return port_;
}

void DataBase::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DataBase::portIsSet() const
{
    return portIsSet_;
}

void DataBase::unsetport()
{
    portIsSet_ = false;
}

std::string DataBase::getOs() const
{
    return os_;
}

void DataBase::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool DataBase::osIsSet() const
{
    return osIsSet_;
}

void DataBase::unsetos()
{
    osIsSet_ = false;
}

std::string DataBase::getStatus() const
{
    return status_;
}

void DataBase::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DataBase::statusIsSet() const
{
    return statusIsSet_;
}

void DataBase::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DataBase::getInstanceName() const
{
    return instanceName_;
}

void DataBase::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DataBase::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DataBase::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string DataBase::getAuditStatus() const
{
    return auditStatus_;
}

void DataBase::setAuditStatus(const std::string& value)
{
    auditStatus_ = value;
    auditStatusIsSet_ = true;
}

bool DataBase::auditStatusIsSet() const
{
    return auditStatusIsSet_;
}

void DataBase::unsetauditStatus()
{
    auditStatusIsSet_ = false;
}

std::vector<std::string>& DataBase::getAgentUrl()
{
    return agentUrl_;
}

void DataBase::setAgentUrl(const std::vector<std::string>& value)
{
    agentUrl_ = value;
    agentUrlIsSet_ = true;
}

bool DataBase::agentUrlIsSet() const
{
    return agentUrlIsSet_;
}

void DataBase::unsetagentUrl()
{
    agentUrlIsSet_ = false;
}

std::string DataBase::getDbClassification() const
{
    return dbClassification_;
}

void DataBase::setDbClassification(const std::string& value)
{
    dbClassification_ = value;
    dbClassificationIsSet_ = true;
}

bool DataBase::dbClassificationIsSet() const
{
    return dbClassificationIsSet_;
}

void DataBase::unsetdbClassification()
{
    dbClassificationIsSet_ = false;
}

}
}
}
}
}



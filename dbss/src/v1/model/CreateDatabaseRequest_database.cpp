

#include "huaweicloud/dbss/v1/model/CreateDatabaseRequest_database.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDatabaseRequest_database::CreateDatabaseRequest_database()
{
    dbClassification_ = "";
    dbClassificationIsSet_ = false;
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
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

CreateDatabaseRequest_database::~CreateDatabaseRequest_database() = default;

void CreateDatabaseRequest_database::validate()
{
}

web::json::value CreateDatabaseRequest_database::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbClassificationIsSet_) {
        val[utility::conversions::to_string_t("db_classification")] = ModelBase::toJson(dbClassification_);
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
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool CreateDatabaseRequest_database::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_classification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_classification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbClassification(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseRequest_database::getDbClassification() const
{
    return dbClassification_;
}

void CreateDatabaseRequest_database::setDbClassification(const std::string& value)
{
    dbClassification_ = value;
    dbClassificationIsSet_ = true;
}

bool CreateDatabaseRequest_database::dbClassificationIsSet() const
{
    return dbClassificationIsSet_;
}

void CreateDatabaseRequest_database::unsetdbClassification()
{
    dbClassificationIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getName() const
{
    return name_;
}

void CreateDatabaseRequest_database::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDatabaseRequest_database::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDatabaseRequest_database::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getType() const
{
    return type_;
}

void CreateDatabaseRequest_database::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateDatabaseRequest_database::typeIsSet() const
{
    return typeIsSet_;
}

void CreateDatabaseRequest_database::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getVersion() const
{
    return version_;
}

void CreateDatabaseRequest_database::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateDatabaseRequest_database::versionIsSet() const
{
    return versionIsSet_;
}

void CreateDatabaseRequest_database::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getCharset() const
{
    return charset_;
}

void CreateDatabaseRequest_database::setCharset(const std::string& value)
{
    charset_ = value;
    charsetIsSet_ = true;
}

bool CreateDatabaseRequest_database::charsetIsSet() const
{
    return charsetIsSet_;
}

void CreateDatabaseRequest_database::unsetcharset()
{
    charsetIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getIp() const
{
    return ip_;
}

void CreateDatabaseRequest_database::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool CreateDatabaseRequest_database::ipIsSet() const
{
    return ipIsSet_;
}

void CreateDatabaseRequest_database::unsetip()
{
    ipIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getPort() const
{
    return port_;
}

void CreateDatabaseRequest_database::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateDatabaseRequest_database::portIsSet() const
{
    return portIsSet_;
}

void CreateDatabaseRequest_database::unsetport()
{
    portIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getOs() const
{
    return os_;
}

void CreateDatabaseRequest_database::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool CreateDatabaseRequest_database::osIsSet() const
{
    return osIsSet_;
}

void CreateDatabaseRequest_database::unsetos()
{
    osIsSet_ = false;
}

std::string CreateDatabaseRequest_database::getInstanceName() const
{
    return instanceName_;
}

void CreateDatabaseRequest_database::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool CreateDatabaseRequest_database::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void CreateDatabaseRequest_database::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/drs/v3/model/Endpoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




Endpoint::Endpoint()
{
    dbType_ = "";
    dbTypeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    instId_ = "";
    instIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    instName_ = "";
    instNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    mongoHaMode_ = "";
    mongoHaModeIsSet_ = false;
    safeMode_ = 0;
    safeModeIsSet_ = false;
    sslCertPassword_ = "";
    sslCertPasswordIsSet_ = false;
    sslCertCheckSum_ = "";
    sslCertCheckSumIsSet_ = false;
    sslCertKey_ = "";
    sslCertKeyIsSet_ = false;
    sslCertName_ = "";
    sslCertNameIsSet_ = false;
    sslLink_ = false;
    sslLinkIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    clusterMode_ = "";
    clusterModeIsSet_ = false;
}

Endpoint::~Endpoint() = default;

void Endpoint::validate()
{
}

web::json::value Endpoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(instIdIsSet_) {
        val[utility::conversions::to_string_t("inst_id")] = ModelBase::toJson(instId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(instNameIsSet_) {
        val[utility::conversions::to_string_t("inst_name")] = ModelBase::toJson(instName_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(mongoHaModeIsSet_) {
        val[utility::conversions::to_string_t("mongo_ha_mode")] = ModelBase::toJson(mongoHaMode_);
    }
    if(safeModeIsSet_) {
        val[utility::conversions::to_string_t("safe_mode")] = ModelBase::toJson(safeMode_);
    }
    if(sslCertPasswordIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_password")] = ModelBase::toJson(sslCertPassword_);
    }
    if(sslCertCheckSumIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_check_sum")] = ModelBase::toJson(sslCertCheckSum_);
    }
    if(sslCertKeyIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_key")] = ModelBase::toJson(sslCertKey_);
    }
    if(sslCertNameIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_name")] = ModelBase::toJson(sslCertName_);
    }
    if(sslLinkIsSet_) {
        val[utility::conversions::to_string_t("ssl_link")] = ModelBase::toJson(sslLink_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(clusterModeIsSet_) {
        val[utility::conversions::to_string_t("cluster_mode")] = ModelBase::toJson(clusterMode_);
    }

    return val;
}

bool Endpoint::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inst_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inst_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("inst_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inst_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mongo_ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mongo_ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMongoHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("safe_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("safe_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSafeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_check_sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_check_sum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertCheckSum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_link"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterMode(refVal);
        }
    }
    return ok;
}

std::string Endpoint::getDbType() const
{
    return dbType_;
}

void Endpoint::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool Endpoint::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void Endpoint::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string Endpoint::getAzCode() const
{
    return azCode_;
}

void Endpoint::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool Endpoint::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void Endpoint::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string Endpoint::getRegion() const
{
    return region_;
}

void Endpoint::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool Endpoint::regionIsSet() const
{
    return regionIsSet_;
}

void Endpoint::unsetregion()
{
    regionIsSet_ = false;
}

std::string Endpoint::getInstId() const
{
    return instId_;
}

void Endpoint::setInstId(const std::string& value)
{
    instId_ = value;
    instIdIsSet_ = true;
}

bool Endpoint::instIdIsSet() const
{
    return instIdIsSet_;
}

void Endpoint::unsetinstId()
{
    instIdIsSet_ = false;
}

std::string Endpoint::getVpcId() const
{
    return vpcId_;
}

void Endpoint::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool Endpoint::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void Endpoint::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string Endpoint::getSubnetId() const
{
    return subnetId_;
}

void Endpoint::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool Endpoint::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void Endpoint::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string Endpoint::getSecurityGroupId() const
{
    return securityGroupId_;
}

void Endpoint::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool Endpoint::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void Endpoint::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string Endpoint::getProjectId() const
{
    return projectId_;
}

void Endpoint::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Endpoint::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Endpoint::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Endpoint::getDbName() const
{
    return dbName_;
}

void Endpoint::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool Endpoint::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void Endpoint::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string Endpoint::getDbPassword() const
{
    return dbPassword_;
}

void Endpoint::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool Endpoint::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void Endpoint::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

int32_t Endpoint::getDbPort() const
{
    return dbPort_;
}

void Endpoint::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool Endpoint::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void Endpoint::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string Endpoint::getDbUser() const
{
    return dbUser_;
}

void Endpoint::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool Endpoint::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void Endpoint::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string Endpoint::getInstName() const
{
    return instName_;
}

void Endpoint::setInstName(const std::string& value)
{
    instName_ = value;
    instNameIsSet_ = true;
}

bool Endpoint::instNameIsSet() const
{
    return instNameIsSet_;
}

void Endpoint::unsetinstName()
{
    instNameIsSet_ = false;
}

std::string Endpoint::getIp() const
{
    return ip_;
}

void Endpoint::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool Endpoint::ipIsSet() const
{
    return ipIsSet_;
}

void Endpoint::unsetip()
{
    ipIsSet_ = false;
}

std::string Endpoint::getMongoHaMode() const
{
    return mongoHaMode_;
}

void Endpoint::setMongoHaMode(const std::string& value)
{
    mongoHaMode_ = value;
    mongoHaModeIsSet_ = true;
}

bool Endpoint::mongoHaModeIsSet() const
{
    return mongoHaModeIsSet_;
}

void Endpoint::unsetmongoHaMode()
{
    mongoHaModeIsSet_ = false;
}

int32_t Endpoint::getSafeMode() const
{
    return safeMode_;
}

void Endpoint::setSafeMode(int32_t value)
{
    safeMode_ = value;
    safeModeIsSet_ = true;
}

bool Endpoint::safeModeIsSet() const
{
    return safeModeIsSet_;
}

void Endpoint::unsetsafeMode()
{
    safeModeIsSet_ = false;
}

std::string Endpoint::getSslCertPassword() const
{
    return sslCertPassword_;
}

void Endpoint::setSslCertPassword(const std::string& value)
{
    sslCertPassword_ = value;
    sslCertPasswordIsSet_ = true;
}

bool Endpoint::sslCertPasswordIsSet() const
{
    return sslCertPasswordIsSet_;
}

void Endpoint::unsetsslCertPassword()
{
    sslCertPasswordIsSet_ = false;
}

std::string Endpoint::getSslCertCheckSum() const
{
    return sslCertCheckSum_;
}

void Endpoint::setSslCertCheckSum(const std::string& value)
{
    sslCertCheckSum_ = value;
    sslCertCheckSumIsSet_ = true;
}

bool Endpoint::sslCertCheckSumIsSet() const
{
    return sslCertCheckSumIsSet_;
}

void Endpoint::unsetsslCertCheckSum()
{
    sslCertCheckSumIsSet_ = false;
}

std::string Endpoint::getSslCertKey() const
{
    return sslCertKey_;
}

void Endpoint::setSslCertKey(const std::string& value)
{
    sslCertKey_ = value;
    sslCertKeyIsSet_ = true;
}

bool Endpoint::sslCertKeyIsSet() const
{
    return sslCertKeyIsSet_;
}

void Endpoint::unsetsslCertKey()
{
    sslCertKeyIsSet_ = false;
}

std::string Endpoint::getSslCertName() const
{
    return sslCertName_;
}

void Endpoint::setSslCertName(const std::string& value)
{
    sslCertName_ = value;
    sslCertNameIsSet_ = true;
}

bool Endpoint::sslCertNameIsSet() const
{
    return sslCertNameIsSet_;
}

void Endpoint::unsetsslCertName()
{
    sslCertNameIsSet_ = false;
}

bool Endpoint::isSslLink() const
{
    return sslLink_;
}

void Endpoint::setSslLink(bool value)
{
    sslLink_ = value;
    sslLinkIsSet_ = true;
}

bool Endpoint::sslLinkIsSet() const
{
    return sslLinkIsSet_;
}

void Endpoint::unsetsslLink()
{
    sslLinkIsSet_ = false;
}

std::string Endpoint::getTopic() const
{
    return topic_;
}

void Endpoint::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool Endpoint::topicIsSet() const
{
    return topicIsSet_;
}

void Endpoint::unsettopic()
{
    topicIsSet_ = false;
}

std::string Endpoint::getClusterMode() const
{
    return clusterMode_;
}

void Endpoint::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool Endpoint::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void Endpoint::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

}
}
}
}
}



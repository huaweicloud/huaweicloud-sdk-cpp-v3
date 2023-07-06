

#include "huaweicloud/drs/v3/model/TestEndPoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




TestEndPoint::TestEndPoint()
{
    id_ = "";
    idIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    instId_ = "";
    instIdIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    sslLink_ = false;
    sslLinkIsSet_ = false;
    sslCertKey_ = "";
    sslCertKeyIsSet_ = false;
    sslCertName_ = "";
    sslCertNameIsSet_ = false;
    sslCertCheckSum_ = "";
    sslCertCheckSumIsSet_ = false;
    sslCertPassword_ = "";
    sslCertPasswordIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    endPointType_ = "";
    endPointTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    kafkaSecurityConfigIsSet_ = false;
}

TestEndPoint::~TestEndPoint() = default;

void TestEndPoint::validate()
{
}

web::json::value TestEndPoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(instIdIsSet_) {
        val[utility::conversions::to_string_t("inst_id")] = ModelBase::toJson(instId_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(sslLinkIsSet_) {
        val[utility::conversions::to_string_t("ssl_link")] = ModelBase::toJson(sslLink_);
    }
    if(sslCertKeyIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_key")] = ModelBase::toJson(sslCertKey_);
    }
    if(sslCertNameIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_name")] = ModelBase::toJson(sslCertName_);
    }
    if(sslCertCheckSumIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_check_sum")] = ModelBase::toJson(sslCertCheckSum_);
    }
    if(sslCertPasswordIsSet_) {
        val[utility::conversions::to_string_t("ssl_cert_password")] = ModelBase::toJson(sslCertPassword_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(endPointTypeIsSet_) {
        val[utility::conversions::to_string_t("end_point_type")] = ModelBase::toJson(endPointType_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(kafkaSecurityConfigIsSet_) {
        val[utility::conversions::to_string_t("kafka_security_config")] = ModelBase::toJson(kafkaSecurityConfig_);
    }

    return val;
}

bool TestEndPoint::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ssl_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_link"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslLink(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ssl_cert_check_sum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_cert_check_sum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslCertCheckSum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_point_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_point_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndPointType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("kafka_security_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kafka_security_config"));
        if(!fieldValue.is_null())
        {
            KafkaSecurity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKafkaSecurityConfig(refVal);
        }
    }
    return ok;
}

std::string TestEndPoint::getId() const
{
    return id_;
}

void TestEndPoint::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestEndPoint::idIsSet() const
{
    return idIsSet_;
}

void TestEndPoint::unsetid()
{
    idIsSet_ = false;
}

std::string TestEndPoint::getNetType() const
{
    return netType_;
}

void TestEndPoint::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool TestEndPoint::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void TestEndPoint::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string TestEndPoint::getDbType() const
{
    return dbType_;
}

void TestEndPoint::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool TestEndPoint::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void TestEndPoint::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string TestEndPoint::getIp() const
{
    return ip_;
}

void TestEndPoint::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool TestEndPoint::ipIsSet() const
{
    return ipIsSet_;
}

void TestEndPoint::unsetip()
{
    ipIsSet_ = false;
}

int32_t TestEndPoint::getDbPort() const
{
    return dbPort_;
}

void TestEndPoint::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool TestEndPoint::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void TestEndPoint::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string TestEndPoint::getInstId() const
{
    return instId_;
}

void TestEndPoint::setInstId(const std::string& value)
{
    instId_ = value;
    instIdIsSet_ = true;
}

bool TestEndPoint::instIdIsSet() const
{
    return instIdIsSet_;
}

void TestEndPoint::unsetinstId()
{
    instIdIsSet_ = false;
}

std::string TestEndPoint::getDbUser() const
{
    return dbUser_;
}

void TestEndPoint::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool TestEndPoint::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void TestEndPoint::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string TestEndPoint::getDbPassword() const
{
    return dbPassword_;
}

void TestEndPoint::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool TestEndPoint::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void TestEndPoint::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

bool TestEndPoint::isSslLink() const
{
    return sslLink_;
}

void TestEndPoint::setSslLink(bool value)
{
    sslLink_ = value;
    sslLinkIsSet_ = true;
}

bool TestEndPoint::sslLinkIsSet() const
{
    return sslLinkIsSet_;
}

void TestEndPoint::unsetsslLink()
{
    sslLinkIsSet_ = false;
}

std::string TestEndPoint::getSslCertKey() const
{
    return sslCertKey_;
}

void TestEndPoint::setSslCertKey(const std::string& value)
{
    sslCertKey_ = value;
    sslCertKeyIsSet_ = true;
}

bool TestEndPoint::sslCertKeyIsSet() const
{
    return sslCertKeyIsSet_;
}

void TestEndPoint::unsetsslCertKey()
{
    sslCertKeyIsSet_ = false;
}

std::string TestEndPoint::getSslCertName() const
{
    return sslCertName_;
}

void TestEndPoint::setSslCertName(const std::string& value)
{
    sslCertName_ = value;
    sslCertNameIsSet_ = true;
}

bool TestEndPoint::sslCertNameIsSet() const
{
    return sslCertNameIsSet_;
}

void TestEndPoint::unsetsslCertName()
{
    sslCertNameIsSet_ = false;
}

std::string TestEndPoint::getSslCertCheckSum() const
{
    return sslCertCheckSum_;
}

void TestEndPoint::setSslCertCheckSum(const std::string& value)
{
    sslCertCheckSum_ = value;
    sslCertCheckSumIsSet_ = true;
}

bool TestEndPoint::sslCertCheckSumIsSet() const
{
    return sslCertCheckSumIsSet_;
}

void TestEndPoint::unsetsslCertCheckSum()
{
    sslCertCheckSumIsSet_ = false;
}

std::string TestEndPoint::getSslCertPassword() const
{
    return sslCertPassword_;
}

void TestEndPoint::setSslCertPassword(const std::string& value)
{
    sslCertPassword_ = value;
    sslCertPasswordIsSet_ = true;
}

bool TestEndPoint::sslCertPasswordIsSet() const
{
    return sslCertPasswordIsSet_;
}

void TestEndPoint::unsetsslCertPassword()
{
    sslCertPasswordIsSet_ = false;
}

std::string TestEndPoint::getVpcId() const
{
    return vpcId_;
}

void TestEndPoint::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool TestEndPoint::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void TestEndPoint::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string TestEndPoint::getSubnetId() const
{
    return subnetId_;
}

void TestEndPoint::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool TestEndPoint::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void TestEndPoint::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string TestEndPoint::getEndPointType() const
{
    return endPointType_;
}

void TestEndPoint::setEndPointType(const std::string& value)
{
    endPointType_ = value;
    endPointTypeIsSet_ = true;
}

bool TestEndPoint::endPointTypeIsSet() const
{
    return endPointTypeIsSet_;
}

void TestEndPoint::unsetendPointType()
{
    endPointTypeIsSet_ = false;
}

std::string TestEndPoint::getRegion() const
{
    return region_;
}

void TestEndPoint::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TestEndPoint::regionIsSet() const
{
    return regionIsSet_;
}

void TestEndPoint::unsetregion()
{
    regionIsSet_ = false;
}

std::string TestEndPoint::getProjectId() const
{
    return projectId_;
}

void TestEndPoint::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TestEndPoint::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TestEndPoint::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TestEndPoint::getDbName() const
{
    return dbName_;
}

void TestEndPoint::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TestEndPoint::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TestEndPoint::unsetdbName()
{
    dbNameIsSet_ = false;
}

KafkaSecurity TestEndPoint::getKafkaSecurityConfig() const
{
    return kafkaSecurityConfig_;
}

void TestEndPoint::setKafkaSecurityConfig(const KafkaSecurity& value)
{
    kafkaSecurityConfig_ = value;
    kafkaSecurityConfigIsSet_ = true;
}

bool TestEndPoint::kafkaSecurityConfigIsSet() const
{
    return kafkaSecurityConfigIsSet_;
}

void TestEndPoint::unsetkafkaSecurityConfig()
{
    kafkaSecurityConfigIsSet_ = false;
}

}
}
}
}
}



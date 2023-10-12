

#include "huaweicloud/drs/v3/model/EndpointVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




EndpointVO::EndpointVO()
{
    id_ = "";
    idIsSet_ = false;
    objId_ = "";
    objIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    dbType_ = "";
    dbTypeIsSet_ = false;
    dbUser_ = "";
    dbUserIsSet_ = false;
    dbPassword_ = "";
    dbPasswordIsSet_ = false;
    manageIp_ = "";
    manageIpIsSet_ = false;
    trafficIp_ = "";
    trafficIpIsSet_ = false;
    dbPort_ = 0;
    dbPortIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    volumeSize_ = 0L;
    volumeSizeIsSet_ = false;
    fullTransUserPwd_ = "";
    fullTransUserPwdIsSet_ = false;
    incrementTransUserPwd_ = "";
    incrementTransUserPwdIsSet_ = false;
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
    dbVersion_ = "";
    dbVersionIsSet_ = false;
    mongoHaMode_ = "";
    mongoHaModeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    clusterMode_ = "";
    clusterModeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    safeMode_ = 0;
    safeModeIsSet_ = false;
    kerberosVoIsSet_ = false;
    multiWriteDbId_ = "";
    multiWriteDbIdIsSet_ = false;
}

EndpointVO::~EndpointVO() = default;

void EndpointVO::validate()
{
}

web::json::value EndpointVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(objIdIsSet_) {
        val[utility::conversions::to_string_t("obj_id")] = ModelBase::toJson(objId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(dbTypeIsSet_) {
        val[utility::conversions::to_string_t("db_type")] = ModelBase::toJson(dbType_);
    }
    if(dbUserIsSet_) {
        val[utility::conversions::to_string_t("db_user")] = ModelBase::toJson(dbUser_);
    }
    if(dbPasswordIsSet_) {
        val[utility::conversions::to_string_t("db_password")] = ModelBase::toJson(dbPassword_);
    }
    if(manageIpIsSet_) {
        val[utility::conversions::to_string_t("manage_ip")] = ModelBase::toJson(manageIp_);
    }
    if(trafficIpIsSet_) {
        val[utility::conversions::to_string_t("traffic_ip")] = ModelBase::toJson(trafficIp_);
    }
    if(dbPortIsSet_) {
        val[utility::conversions::to_string_t("db_port")] = ModelBase::toJson(dbPort_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(fullTransUserPwdIsSet_) {
        val[utility::conversions::to_string_t("full_trans_user_pwd")] = ModelBase::toJson(fullTransUserPwd_);
    }
    if(incrementTransUserPwdIsSet_) {
        val[utility::conversions::to_string_t("increment_trans_user_pwd")] = ModelBase::toJson(incrementTransUserPwd_);
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
    if(dbVersionIsSet_) {
        val[utility::conversions::to_string_t("db_version")] = ModelBase::toJson(dbVersion_);
    }
    if(mongoHaModeIsSet_) {
        val[utility::conversions::to_string_t("mongo_ha_mode")] = ModelBase::toJson(mongoHaMode_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(clusterModeIsSet_) {
        val[utility::conversions::to_string_t("cluster_mode")] = ModelBase::toJson(clusterMode_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(safeModeIsSet_) {
        val[utility::conversions::to_string_t("safe_mode")] = ModelBase::toJson(safeMode_);
    }
    if(kerberosVoIsSet_) {
        val[utility::conversions::to_string_t("kerberos_vo")] = ModelBase::toJson(kerberosVo_);
    }
    if(multiWriteDbIdIsSet_) {
        val[utility::conversions::to_string_t("multi_write_db_id")] = ModelBase::toJson(multiWriteDbId_);
    }

    return val;
}
bool EndpointVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("obj_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obj_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("manage_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manage_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManageIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_trans_user_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_trans_user_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullTransUserPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_trans_user_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_trans_user_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementTransUserPwd(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("kerberos_vo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kerberos_vo"));
        if(!fieldValue.is_null())
        {
            KerberosVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKerberosVo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_write_db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_write_db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiWriteDbId(refVal);
        }
    }
    return ok;
}


std::string EndpointVO::getId() const
{
    return id_;
}

void EndpointVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EndpointVO::idIsSet() const
{
    return idIsSet_;
}

void EndpointVO::unsetid()
{
    idIsSet_ = false;
}

std::string EndpointVO::getObjId() const
{
    return objId_;
}

void EndpointVO::setObjId(const std::string& value)
{
    objId_ = value;
    objIdIsSet_ = true;
}

bool EndpointVO::objIdIsSet() const
{
    return objIdIsSet_;
}

void EndpointVO::unsetobjId()
{
    objIdIsSet_ = false;
}

std::string EndpointVO::getInstanceName() const
{
    return instanceName_;
}

void EndpointVO::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool EndpointVO::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void EndpointVO::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string EndpointVO::getDbType() const
{
    return dbType_;
}

void EndpointVO::setDbType(const std::string& value)
{
    dbType_ = value;
    dbTypeIsSet_ = true;
}

bool EndpointVO::dbTypeIsSet() const
{
    return dbTypeIsSet_;
}

void EndpointVO::unsetdbType()
{
    dbTypeIsSet_ = false;
}

std::string EndpointVO::getDbUser() const
{
    return dbUser_;
}

void EndpointVO::setDbUser(const std::string& value)
{
    dbUser_ = value;
    dbUserIsSet_ = true;
}

bool EndpointVO::dbUserIsSet() const
{
    return dbUserIsSet_;
}

void EndpointVO::unsetdbUser()
{
    dbUserIsSet_ = false;
}

std::string EndpointVO::getDbPassword() const
{
    return dbPassword_;
}

void EndpointVO::setDbPassword(const std::string& value)
{
    dbPassword_ = value;
    dbPasswordIsSet_ = true;
}

bool EndpointVO::dbPasswordIsSet() const
{
    return dbPasswordIsSet_;
}

void EndpointVO::unsetdbPassword()
{
    dbPasswordIsSet_ = false;
}

std::string EndpointVO::getManageIp() const
{
    return manageIp_;
}

void EndpointVO::setManageIp(const std::string& value)
{
    manageIp_ = value;
    manageIpIsSet_ = true;
}

bool EndpointVO::manageIpIsSet() const
{
    return manageIpIsSet_;
}

void EndpointVO::unsetmanageIp()
{
    manageIpIsSet_ = false;
}

std::string EndpointVO::getTrafficIp() const
{
    return trafficIp_;
}

void EndpointVO::setTrafficIp(const std::string& value)
{
    trafficIp_ = value;
    trafficIpIsSet_ = true;
}

bool EndpointVO::trafficIpIsSet() const
{
    return trafficIpIsSet_;
}

void EndpointVO::unsettrafficIp()
{
    trafficIpIsSet_ = false;
}

int32_t EndpointVO::getDbPort() const
{
    return dbPort_;
}

void EndpointVO::setDbPort(int32_t value)
{
    dbPort_ = value;
    dbPortIsSet_ = true;
}

bool EndpointVO::dbPortIsSet() const
{
    return dbPortIsSet_;
}

void EndpointVO::unsetdbPort()
{
    dbPortIsSet_ = false;
}

std::string EndpointVO::getRegion() const
{
    return region_;
}

void EndpointVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool EndpointVO::regionIsSet() const
{
    return regionIsSet_;
}

void EndpointVO::unsetregion()
{
    regionIsSet_ = false;
}

std::string EndpointVO::getCreatedAt() const
{
    return createdAt_;
}

void EndpointVO::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool EndpointVO::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void EndpointVO::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string EndpointVO::getUpdatedAt() const
{
    return updatedAt_;
}

void EndpointVO::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool EndpointVO::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void EndpointVO::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string EndpointVO::getIp() const
{
    return ip_;
}

void EndpointVO::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool EndpointVO::ipIsSet() const
{
    return ipIsSet_;
}

void EndpointVO::unsetip()
{
    ipIsSet_ = false;
}

std::string EndpointVO::getPublicIp() const
{
    return publicIp_;
}

void EndpointVO::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool EndpointVO::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void EndpointVO::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string EndpointVO::getAzCode() const
{
    return azCode_;
}

void EndpointVO::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool EndpointVO::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void EndpointVO::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string EndpointVO::getSecurityGroupId() const
{
    return securityGroupId_;
}

void EndpointVO::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool EndpointVO::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void EndpointVO::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string EndpointVO::getSubnetId() const
{
    return subnetId_;
}

void EndpointVO::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool EndpointVO::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void EndpointVO::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string EndpointVO::getVpcId() const
{
    return vpcId_;
}

void EndpointVO::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool EndpointVO::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void EndpointVO::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

int64_t EndpointVO::getVolumeSize() const
{
    return volumeSize_;
}

void EndpointVO::setVolumeSize(int64_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool EndpointVO::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void EndpointVO::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string EndpointVO::getFullTransUserPwd() const
{
    return fullTransUserPwd_;
}

void EndpointVO::setFullTransUserPwd(const std::string& value)
{
    fullTransUserPwd_ = value;
    fullTransUserPwdIsSet_ = true;
}

bool EndpointVO::fullTransUserPwdIsSet() const
{
    return fullTransUserPwdIsSet_;
}

void EndpointVO::unsetfullTransUserPwd()
{
    fullTransUserPwdIsSet_ = false;
}

std::string EndpointVO::getIncrementTransUserPwd() const
{
    return incrementTransUserPwd_;
}

void EndpointVO::setIncrementTransUserPwd(const std::string& value)
{
    incrementTransUserPwd_ = value;
    incrementTransUserPwdIsSet_ = true;
}

bool EndpointVO::incrementTransUserPwdIsSet() const
{
    return incrementTransUserPwdIsSet_;
}

void EndpointVO::unsetincrementTransUserPwd()
{
    incrementTransUserPwdIsSet_ = false;
}

bool EndpointVO::isSslLink() const
{
    return sslLink_;
}

void EndpointVO::setSslLink(bool value)
{
    sslLink_ = value;
    sslLinkIsSet_ = true;
}

bool EndpointVO::sslLinkIsSet() const
{
    return sslLinkIsSet_;
}

void EndpointVO::unsetsslLink()
{
    sslLinkIsSet_ = false;
}

std::string EndpointVO::getSslCertKey() const
{
    return sslCertKey_;
}

void EndpointVO::setSslCertKey(const std::string& value)
{
    sslCertKey_ = value;
    sslCertKeyIsSet_ = true;
}

bool EndpointVO::sslCertKeyIsSet() const
{
    return sslCertKeyIsSet_;
}

void EndpointVO::unsetsslCertKey()
{
    sslCertKeyIsSet_ = false;
}

std::string EndpointVO::getSslCertName() const
{
    return sslCertName_;
}

void EndpointVO::setSslCertName(const std::string& value)
{
    sslCertName_ = value;
    sslCertNameIsSet_ = true;
}

bool EndpointVO::sslCertNameIsSet() const
{
    return sslCertNameIsSet_;
}

void EndpointVO::unsetsslCertName()
{
    sslCertNameIsSet_ = false;
}

std::string EndpointVO::getSslCertCheckSum() const
{
    return sslCertCheckSum_;
}

void EndpointVO::setSslCertCheckSum(const std::string& value)
{
    sslCertCheckSum_ = value;
    sslCertCheckSumIsSet_ = true;
}

bool EndpointVO::sslCertCheckSumIsSet() const
{
    return sslCertCheckSumIsSet_;
}

void EndpointVO::unsetsslCertCheckSum()
{
    sslCertCheckSumIsSet_ = false;
}

std::string EndpointVO::getSslCertPassword() const
{
    return sslCertPassword_;
}

void EndpointVO::setSslCertPassword(const std::string& value)
{
    sslCertPassword_ = value;
    sslCertPasswordIsSet_ = true;
}

bool EndpointVO::sslCertPasswordIsSet() const
{
    return sslCertPasswordIsSet_;
}

void EndpointVO::unsetsslCertPassword()
{
    sslCertPasswordIsSet_ = false;
}

std::string EndpointVO::getDbVersion() const
{
    return dbVersion_;
}

void EndpointVO::setDbVersion(const std::string& value)
{
    dbVersion_ = value;
    dbVersionIsSet_ = true;
}

bool EndpointVO::dbVersionIsSet() const
{
    return dbVersionIsSet_;
}

void EndpointVO::unsetdbVersion()
{
    dbVersionIsSet_ = false;
}

std::string EndpointVO::getMongoHaMode() const
{
    return mongoHaMode_;
}

void EndpointVO::setMongoHaMode(const std::string& value)
{
    mongoHaMode_ = value;
    mongoHaModeIsSet_ = true;
}

bool EndpointVO::mongoHaModeIsSet() const
{
    return mongoHaModeIsSet_;
}

void EndpointVO::unsetmongoHaMode()
{
    mongoHaModeIsSet_ = false;
}

std::string EndpointVO::getProjectId() const
{
    return projectId_;
}

void EndpointVO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool EndpointVO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void EndpointVO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string EndpointVO::getClusterMode() const
{
    return clusterMode_;
}

void EndpointVO::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool EndpointVO::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void EndpointVO::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

std::string EndpointVO::getInstanceId() const
{
    return instanceId_;
}

void EndpointVO::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EndpointVO::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EndpointVO::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string EndpointVO::getDbName() const
{
    return dbName_;
}

void EndpointVO::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool EndpointVO::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void EndpointVO::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string EndpointVO::getTopic() const
{
    return topic_;
}

void EndpointVO::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool EndpointVO::topicIsSet() const
{
    return topicIsSet_;
}

void EndpointVO::unsettopic()
{
    topicIsSet_ = false;
}

int32_t EndpointVO::getSafeMode() const
{
    return safeMode_;
}

void EndpointVO::setSafeMode(int32_t value)
{
    safeMode_ = value;
    safeModeIsSet_ = true;
}

bool EndpointVO::safeModeIsSet() const
{
    return safeModeIsSet_;
}

void EndpointVO::unsetsafeMode()
{
    safeModeIsSet_ = false;
}

KerberosVO EndpointVO::getKerberosVo() const
{
    return kerberosVo_;
}

void EndpointVO::setKerberosVo(const KerberosVO& value)
{
    kerberosVo_ = value;
    kerberosVoIsSet_ = true;
}

bool EndpointVO::kerberosVoIsSet() const
{
    return kerberosVoIsSet_;
}

void EndpointVO::unsetkerberosVo()
{
    kerberosVoIsSet_ = false;
}

std::string EndpointVO::getMultiWriteDbId() const
{
    return multiWriteDbId_;
}

void EndpointVO::setMultiWriteDbId(const std::string& value)
{
    multiWriteDbId_ = value;
    multiWriteDbIdIsSet_ = true;
}

bool EndpointVO::multiWriteDbIdIsSet() const
{
    return multiWriteDbIdIsSet_;
}

void EndpointVO::unsetmultiWriteDbId()
{
    multiWriteDbIdIsSet_ = false;
}

}
}
}
}
}



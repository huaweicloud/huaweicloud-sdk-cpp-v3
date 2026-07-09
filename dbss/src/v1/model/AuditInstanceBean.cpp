

#include "huaweicloud/dbss/v1/model/AuditInstanceBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditInstanceBean::AuditInstanceBean()
{
    chargeModel_ = "";
    chargeModelIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    configNum_ = 0;
    configNumIsSet_ = false;
    connectIp_ = "";
    connectIpIsSet_ = false;
    connectIpv6_ = "";
    connectIpv6IsSet_ = false;
    cpu_ = 0;
    cpuIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    databaseLimit_ = 0;
    databaseLimitIsSet_ = false;
    effect_ = 0;
    effectIsSet_ = false;
    expired_ = "";
    expiredIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    newVersion_ = "";
    newVersionIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    remainDays_ = "";
    remainDaysIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    task_ = "";
    taskIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    zone_ = "";
    zoneIsSet_ = false;
    supportedFeatureIsSet_ = false;
}

AuditInstanceBean::~AuditInstanceBean() = default;

void AuditInstanceBean::validate()
{
}

web::json::value AuditInstanceBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModelIsSet_) {
        val[utility::conversions::to_string_t("charge_model")] = ModelBase::toJson(chargeModel_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(configNumIsSet_) {
        val[utility::conversions::to_string_t("config_num")] = ModelBase::toJson(configNum_);
    }
    if(connectIpIsSet_) {
        val[utility::conversions::to_string_t("connect_ip")] = ModelBase::toJson(connectIp_);
    }
    if(connectIpv6IsSet_) {
        val[utility::conversions::to_string_t("connect_ipv6")] = ModelBase::toJson(connectIpv6_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(databaseLimitIsSet_) {
        val[utility::conversions::to_string_t("database_limit")] = ModelBase::toJson(databaseLimit_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }
    if(expiredIsSet_) {
        val[utility::conversions::to_string_t("expired")] = ModelBase::toJson(expired_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(newVersionIsSet_) {
        val[utility::conversions::to_string_t("new_version")] = ModelBase::toJson(newVersion_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(remainDaysIsSet_) {
        val[utility::conversions::to_string_t("remain_days")] = ModelBase::toJson(remainDays_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(zoneIsSet_) {
        val[utility::conversions::to_string_t("zone")] = ModelBase::toJson(zone_);
    }
    if(supportedFeatureIsSet_) {
        val[utility::conversions::to_string_t("supported_feature")] = ModelBase::toJson(supportedFeature_);
    }

    return val;
}
bool AuditInstanceBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remain_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remain_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_feature"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedFeature(refVal);
        }
    }
    return ok;
}


std::string AuditInstanceBean::getChargeModel() const
{
    return chargeModel_;
}

void AuditInstanceBean::setChargeModel(const std::string& value)
{
    chargeModel_ = value;
    chargeModelIsSet_ = true;
}

bool AuditInstanceBean::chargeModelIsSet() const
{
    return chargeModelIsSet_;
}

void AuditInstanceBean::unsetchargeModel()
{
    chargeModelIsSet_ = false;
}

std::string AuditInstanceBean::getComment() const
{
    return comment_;
}

void AuditInstanceBean::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool AuditInstanceBean::commentIsSet() const
{
    return commentIsSet_;
}

void AuditInstanceBean::unsetcomment()
{
    commentIsSet_ = false;
}

int32_t AuditInstanceBean::getConfigNum() const
{
    return configNum_;
}

void AuditInstanceBean::setConfigNum(int32_t value)
{
    configNum_ = value;
    configNumIsSet_ = true;
}

bool AuditInstanceBean::configNumIsSet() const
{
    return configNumIsSet_;
}

void AuditInstanceBean::unsetconfigNum()
{
    configNumIsSet_ = false;
}

std::string AuditInstanceBean::getConnectIp() const
{
    return connectIp_;
}

void AuditInstanceBean::setConnectIp(const std::string& value)
{
    connectIp_ = value;
    connectIpIsSet_ = true;
}

bool AuditInstanceBean::connectIpIsSet() const
{
    return connectIpIsSet_;
}

void AuditInstanceBean::unsetconnectIp()
{
    connectIpIsSet_ = false;
}

std::string AuditInstanceBean::getConnectIpv6() const
{
    return connectIpv6_;
}

void AuditInstanceBean::setConnectIpv6(const std::string& value)
{
    connectIpv6_ = value;
    connectIpv6IsSet_ = true;
}

bool AuditInstanceBean::connectIpv6IsSet() const
{
    return connectIpv6IsSet_;
}

void AuditInstanceBean::unsetconnectIpv6()
{
    connectIpv6IsSet_ = false;
}

int32_t AuditInstanceBean::getCpu() const
{
    return cpu_;
}

void AuditInstanceBean::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool AuditInstanceBean::cpuIsSet() const
{
    return cpuIsSet_;
}

void AuditInstanceBean::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string AuditInstanceBean::getCreated() const
{
    return created_;
}

void AuditInstanceBean::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool AuditInstanceBean::createdIsSet() const
{
    return createdIsSet_;
}

void AuditInstanceBean::unsetcreated()
{
    createdIsSet_ = false;
}

int32_t AuditInstanceBean::getDatabaseLimit() const
{
    return databaseLimit_;
}

void AuditInstanceBean::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool AuditInstanceBean::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void AuditInstanceBean::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

int32_t AuditInstanceBean::getEffect() const
{
    return effect_;
}

void AuditInstanceBean::setEffect(int32_t value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool AuditInstanceBean::effectIsSet() const
{
    return effectIsSet_;
}

void AuditInstanceBean::unseteffect()
{
    effectIsSet_ = false;
}

std::string AuditInstanceBean::getExpired() const
{
    return expired_;
}

void AuditInstanceBean::setExpired(const std::string& value)
{
    expired_ = value;
    expiredIsSet_ = true;
}

bool AuditInstanceBean::expiredIsSet() const
{
    return expiredIsSet_;
}

void AuditInstanceBean::unsetexpired()
{
    expiredIsSet_ = false;
}

std::string AuditInstanceBean::getId() const
{
    return id_;
}

void AuditInstanceBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditInstanceBean::idIsSet() const
{
    return idIsSet_;
}

void AuditInstanceBean::unsetid()
{
    idIsSet_ = false;
}

std::string AuditInstanceBean::getKeepDays() const
{
    return keepDays_;
}

void AuditInstanceBean::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool AuditInstanceBean::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void AuditInstanceBean::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string AuditInstanceBean::getName() const
{
    return name_;
}

void AuditInstanceBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AuditInstanceBean::nameIsSet() const
{
    return nameIsSet_;
}

void AuditInstanceBean::unsetname()
{
    nameIsSet_ = false;
}

std::string AuditInstanceBean::getNewVersion() const
{
    return newVersion_;
}

void AuditInstanceBean::setNewVersion(const std::string& value)
{
    newVersion_ = value;
    newVersionIsSet_ = true;
}

bool AuditInstanceBean::newVersionIsSet() const
{
    return newVersionIsSet_;
}

void AuditInstanceBean::unsetnewVersion()
{
    newVersionIsSet_ = false;
}

std::string AuditInstanceBean::getPortId() const
{
    return portId_;
}

void AuditInstanceBean::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool AuditInstanceBean::portIdIsSet() const
{
    return portIdIsSet_;
}

void AuditInstanceBean::unsetportId()
{
    portIdIsSet_ = false;
}

int32_t AuditInstanceBean::getRam() const
{
    return ram_;
}

void AuditInstanceBean::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool AuditInstanceBean::ramIsSet() const
{
    return ramIsSet_;
}

void AuditInstanceBean::unsetram()
{
    ramIsSet_ = false;
}

std::string AuditInstanceBean::getRegion() const
{
    return region_;
}

void AuditInstanceBean::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AuditInstanceBean::regionIsSet() const
{
    return regionIsSet_;
}

void AuditInstanceBean::unsetregion()
{
    regionIsSet_ = false;
}

std::string AuditInstanceBean::getRemainDays() const
{
    return remainDays_;
}

void AuditInstanceBean::setRemainDays(const std::string& value)
{
    remainDays_ = value;
    remainDaysIsSet_ = true;
}

bool AuditInstanceBean::remainDaysIsSet() const
{
    return remainDaysIsSet_;
}

void AuditInstanceBean::unsetremainDays()
{
    remainDaysIsSet_ = false;
}

std::string AuditInstanceBean::getResourceId() const
{
    return resourceId_;
}

void AuditInstanceBean::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool AuditInstanceBean::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void AuditInstanceBean::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string AuditInstanceBean::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void AuditInstanceBean::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool AuditInstanceBean::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void AuditInstanceBean::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string AuditInstanceBean::getScene() const
{
    return scene_;
}

void AuditInstanceBean::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool AuditInstanceBean::sceneIsSet() const
{
    return sceneIsSet_;
}

void AuditInstanceBean::unsetscene()
{
    sceneIsSet_ = false;
}

std::string AuditInstanceBean::getSecurityGroupId() const
{
    return securityGroupId_;
}

void AuditInstanceBean::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool AuditInstanceBean::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void AuditInstanceBean::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string AuditInstanceBean::getSpecification() const
{
    return specification_;
}

void AuditInstanceBean::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool AuditInstanceBean::specificationIsSet() const
{
    return specificationIsSet_;
}

void AuditInstanceBean::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string AuditInstanceBean::getStatus() const
{
    return status_;
}

void AuditInstanceBean::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuditInstanceBean::statusIsSet() const
{
    return statusIsSet_;
}

void AuditInstanceBean::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AuditInstanceBean::getSubnetId() const
{
    return subnetId_;
}

void AuditInstanceBean::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AuditInstanceBean::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AuditInstanceBean::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AuditInstanceBean::getTask() const
{
    return task_;
}

void AuditInstanceBean::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool AuditInstanceBean::taskIsSet() const
{
    return taskIsSet_;
}

void AuditInstanceBean::unsettask()
{
    taskIsSet_ = false;
}

std::string AuditInstanceBean::getVersion() const
{
    return version_;
}

void AuditInstanceBean::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AuditInstanceBean::versionIsSet() const
{
    return versionIsSet_;
}

void AuditInstanceBean::unsetversion()
{
    versionIsSet_ = false;
}

std::string AuditInstanceBean::getVpcId() const
{
    return vpcId_;
}

void AuditInstanceBean::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool AuditInstanceBean::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void AuditInstanceBean::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string AuditInstanceBean::getZone() const
{
    return zone_;
}

void AuditInstanceBean::setZone(const std::string& value)
{
    zone_ = value;
    zoneIsSet_ = true;
}

bool AuditInstanceBean::zoneIsSet() const
{
    return zoneIsSet_;
}

void AuditInstanceBean::unsetzone()
{
    zoneIsSet_ = false;
}

std::vector<std::string>& AuditInstanceBean::getSupportedFeature()
{
    return supportedFeature_;
}

void AuditInstanceBean::setSupportedFeature(const std::vector<std::string>& value)
{
    supportedFeature_ = value;
    supportedFeatureIsSet_ = true;
}

bool AuditInstanceBean::supportedFeatureIsSet() const
{
    return supportedFeatureIsSet_;
}

void AuditInstanceBean::unsetsupportedFeature()
{
    supportedFeatureIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dbss/v1/model/AuditInstanceListBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditInstanceListBean::AuditInstanceListBean()
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
}

AuditInstanceListBean::~AuditInstanceListBean() = default;

void AuditInstanceListBean::validate()
{
}

web::json::value AuditInstanceListBean::toJson() const
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

    return val;
}
bool AuditInstanceListBean::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AuditInstanceListBean::getChargeModel() const
{
    return chargeModel_;
}

void AuditInstanceListBean::setChargeModel(const std::string& value)
{
    chargeModel_ = value;
    chargeModelIsSet_ = true;
}

bool AuditInstanceListBean::chargeModelIsSet() const
{
    return chargeModelIsSet_;
}

void AuditInstanceListBean::unsetchargeModel()
{
    chargeModelIsSet_ = false;
}

std::string AuditInstanceListBean::getComment() const
{
    return comment_;
}

void AuditInstanceListBean::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool AuditInstanceListBean::commentIsSet() const
{
    return commentIsSet_;
}

void AuditInstanceListBean::unsetcomment()
{
    commentIsSet_ = false;
}

int32_t AuditInstanceListBean::getConfigNum() const
{
    return configNum_;
}

void AuditInstanceListBean::setConfigNum(int32_t value)
{
    configNum_ = value;
    configNumIsSet_ = true;
}

bool AuditInstanceListBean::configNumIsSet() const
{
    return configNumIsSet_;
}

void AuditInstanceListBean::unsetconfigNum()
{
    configNumIsSet_ = false;
}

std::string AuditInstanceListBean::getConnectIp() const
{
    return connectIp_;
}

void AuditInstanceListBean::setConnectIp(const std::string& value)
{
    connectIp_ = value;
    connectIpIsSet_ = true;
}

bool AuditInstanceListBean::connectIpIsSet() const
{
    return connectIpIsSet_;
}

void AuditInstanceListBean::unsetconnectIp()
{
    connectIpIsSet_ = false;
}

std::string AuditInstanceListBean::getConnectIpv6() const
{
    return connectIpv6_;
}

void AuditInstanceListBean::setConnectIpv6(const std::string& value)
{
    connectIpv6_ = value;
    connectIpv6IsSet_ = true;
}

bool AuditInstanceListBean::connectIpv6IsSet() const
{
    return connectIpv6IsSet_;
}

void AuditInstanceListBean::unsetconnectIpv6()
{
    connectIpv6IsSet_ = false;
}

int32_t AuditInstanceListBean::getCpu() const
{
    return cpu_;
}

void AuditInstanceListBean::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool AuditInstanceListBean::cpuIsSet() const
{
    return cpuIsSet_;
}

void AuditInstanceListBean::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string AuditInstanceListBean::getCreated() const
{
    return created_;
}

void AuditInstanceListBean::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool AuditInstanceListBean::createdIsSet() const
{
    return createdIsSet_;
}

void AuditInstanceListBean::unsetcreated()
{
    createdIsSet_ = false;
}

int32_t AuditInstanceListBean::getDatabaseLimit() const
{
    return databaseLimit_;
}

void AuditInstanceListBean::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool AuditInstanceListBean::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void AuditInstanceListBean::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

int32_t AuditInstanceListBean::getEffect() const
{
    return effect_;
}

void AuditInstanceListBean::setEffect(int32_t value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool AuditInstanceListBean::effectIsSet() const
{
    return effectIsSet_;
}

void AuditInstanceListBean::unseteffect()
{
    effectIsSet_ = false;
}

std::string AuditInstanceListBean::getExpired() const
{
    return expired_;
}

void AuditInstanceListBean::setExpired(const std::string& value)
{
    expired_ = value;
    expiredIsSet_ = true;
}

bool AuditInstanceListBean::expiredIsSet() const
{
    return expiredIsSet_;
}

void AuditInstanceListBean::unsetexpired()
{
    expiredIsSet_ = false;
}

std::string AuditInstanceListBean::getId() const
{
    return id_;
}

void AuditInstanceListBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditInstanceListBean::idIsSet() const
{
    return idIsSet_;
}

void AuditInstanceListBean::unsetid()
{
    idIsSet_ = false;
}

std::string AuditInstanceListBean::getKeepDays() const
{
    return keepDays_;
}

void AuditInstanceListBean::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool AuditInstanceListBean::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void AuditInstanceListBean::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string AuditInstanceListBean::getName() const
{
    return name_;
}

void AuditInstanceListBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AuditInstanceListBean::nameIsSet() const
{
    return nameIsSet_;
}

void AuditInstanceListBean::unsetname()
{
    nameIsSet_ = false;
}

std::string AuditInstanceListBean::getNewVersion() const
{
    return newVersion_;
}

void AuditInstanceListBean::setNewVersion(const std::string& value)
{
    newVersion_ = value;
    newVersionIsSet_ = true;
}

bool AuditInstanceListBean::newVersionIsSet() const
{
    return newVersionIsSet_;
}

void AuditInstanceListBean::unsetnewVersion()
{
    newVersionIsSet_ = false;
}

std::string AuditInstanceListBean::getPortId() const
{
    return portId_;
}

void AuditInstanceListBean::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool AuditInstanceListBean::portIdIsSet() const
{
    return portIdIsSet_;
}

void AuditInstanceListBean::unsetportId()
{
    portIdIsSet_ = false;
}

int32_t AuditInstanceListBean::getRam() const
{
    return ram_;
}

void AuditInstanceListBean::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool AuditInstanceListBean::ramIsSet() const
{
    return ramIsSet_;
}

void AuditInstanceListBean::unsetram()
{
    ramIsSet_ = false;
}

std::string AuditInstanceListBean::getRegion() const
{
    return region_;
}

void AuditInstanceListBean::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AuditInstanceListBean::regionIsSet() const
{
    return regionIsSet_;
}

void AuditInstanceListBean::unsetregion()
{
    regionIsSet_ = false;
}

std::string AuditInstanceListBean::getRemainDays() const
{
    return remainDays_;
}

void AuditInstanceListBean::setRemainDays(const std::string& value)
{
    remainDays_ = value;
    remainDaysIsSet_ = true;
}

bool AuditInstanceListBean::remainDaysIsSet() const
{
    return remainDaysIsSet_;
}

void AuditInstanceListBean::unsetremainDays()
{
    remainDaysIsSet_ = false;
}

std::string AuditInstanceListBean::getResourceId() const
{
    return resourceId_;
}

void AuditInstanceListBean::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool AuditInstanceListBean::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void AuditInstanceListBean::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string AuditInstanceListBean::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void AuditInstanceListBean::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool AuditInstanceListBean::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void AuditInstanceListBean::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string AuditInstanceListBean::getScene() const
{
    return scene_;
}

void AuditInstanceListBean::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool AuditInstanceListBean::sceneIsSet() const
{
    return sceneIsSet_;
}

void AuditInstanceListBean::unsetscene()
{
    sceneIsSet_ = false;
}

std::string AuditInstanceListBean::getSecurityGroupId() const
{
    return securityGroupId_;
}

void AuditInstanceListBean::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool AuditInstanceListBean::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void AuditInstanceListBean::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string AuditInstanceListBean::getSpecification() const
{
    return specification_;
}

void AuditInstanceListBean::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool AuditInstanceListBean::specificationIsSet() const
{
    return specificationIsSet_;
}

void AuditInstanceListBean::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string AuditInstanceListBean::getStatus() const
{
    return status_;
}

void AuditInstanceListBean::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AuditInstanceListBean::statusIsSet() const
{
    return statusIsSet_;
}

void AuditInstanceListBean::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AuditInstanceListBean::getSubnetId() const
{
    return subnetId_;
}

void AuditInstanceListBean::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool AuditInstanceListBean::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void AuditInstanceListBean::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string AuditInstanceListBean::getTask() const
{
    return task_;
}

void AuditInstanceListBean::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool AuditInstanceListBean::taskIsSet() const
{
    return taskIsSet_;
}

void AuditInstanceListBean::unsettask()
{
    taskIsSet_ = false;
}

std::string AuditInstanceListBean::getVersion() const
{
    return version_;
}

void AuditInstanceListBean::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AuditInstanceListBean::versionIsSet() const
{
    return versionIsSet_;
}

void AuditInstanceListBean::unsetversion()
{
    versionIsSet_ = false;
}

std::string AuditInstanceListBean::getVpcId() const
{
    return vpcId_;
}

void AuditInstanceListBean::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool AuditInstanceListBean::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void AuditInstanceListBean::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string AuditInstanceListBean::getZone() const
{
    return zone_;
}

void AuditInstanceListBean::setZone(const std::string& value)
{
    zone_ = value;
    zoneIsSet_ = true;
}

bool AuditInstanceListBean::zoneIsSet() const
{
    return zoneIsSet_;
}

void AuditInstanceListBean::unsetzone()
{
    zoneIsSet_ = false;
}

}
}
}
}
}



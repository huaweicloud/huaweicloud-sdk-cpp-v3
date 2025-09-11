

#include "huaweicloud/dbss/v1/model/ResponseServer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResponseServer::ResponseServer()
{
    connectIp_ = "";
    connectIpIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    effect_ = 0;
    effectIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    isActive_ = 0;
    isActiveIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
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
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    updateStatus_ = "";
    updateStatusIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    zone_ = "";
    zoneIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

ResponseServer::~ResponseServer() = default;

void ResponseServer::validate()
{
}

web::json::value ResponseServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectIpIsSet_) {
        val[utility::conversions::to_string_t("connect_ip")] = ModelBase::toJson(connectIp_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(isActiveIsSet_) {
        val[utility::conversions::to_string_t("is_active")] = ModelBase::toJson(isActive_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
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
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(updateStatusIsSet_) {
        val[utility::conversions::to_string_t("update_status")] = ModelBase::toJson(updateStatus_);
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
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ResponseServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connect_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_active"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsActive(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ResponseServer::getConnectIp() const
{
    return connectIp_;
}

void ResponseServer::setConnectIp(const std::string& value)
{
    connectIp_ = value;
    connectIpIsSet_ = true;
}

bool ResponseServer::connectIpIsSet() const
{
    return connectIpIsSet_;
}

void ResponseServer::unsetconnectIp()
{
    connectIpIsSet_ = false;
}

std::string ResponseServer::getCpu() const
{
    return cpu_;
}

void ResponseServer::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ResponseServer::cpuIsSet() const
{
    return cpuIsSet_;
}

void ResponseServer::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ResponseServer::getCreated() const
{
    return created_;
}

void ResponseServer::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ResponseServer::createdIsSet() const
{
    return createdIsSet_;
}

void ResponseServer::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ResponseServer::getDescription() const
{
    return description_;
}

void ResponseServer::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ResponseServer::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ResponseServer::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ResponseServer::getEffect() const
{
    return effect_;
}

void ResponseServer::setEffect(int32_t value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool ResponseServer::effectIsSet() const
{
    return effectIsSet_;
}

void ResponseServer::unseteffect()
{
    effectIsSet_ = false;
}

std::string ResponseServer::getInstanceId() const
{
    return instanceId_;
}

void ResponseServer::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResponseServer::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResponseServer::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ResponseServer::getIsActive() const
{
    return isActive_;
}

void ResponseServer::setIsActive(int32_t value)
{
    isActive_ = value;
    isActiveIsSet_ = true;
}

bool ResponseServer::isActiveIsSet() const
{
    return isActiveIsSet_;
}

void ResponseServer::unsetisActive()
{
    isActiveIsSet_ = false;
}

std::string ResponseServer::getName() const
{
    return name_;
}

void ResponseServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResponseServer::nameIsSet() const
{
    return nameIsSet_;
}

void ResponseServer::unsetname()
{
    nameIsSet_ = false;
}

std::string ResponseServer::getRam() const
{
    return ram_;
}

void ResponseServer::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ResponseServer::ramIsSet() const
{
    return ramIsSet_;
}

void ResponseServer::unsetram()
{
    ramIsSet_ = false;
}

std::string ResponseServer::getRegion() const
{
    return region_;
}

void ResponseServer::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ResponseServer::regionIsSet() const
{
    return regionIsSet_;
}

void ResponseServer::unsetregion()
{
    regionIsSet_ = false;
}

std::string ResponseServer::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ResponseServer::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ResponseServer::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ResponseServer::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string ResponseServer::getScene() const
{
    return scene_;
}

void ResponseServer::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ResponseServer::sceneIsSet() const
{
    return sceneIsSet_;
}

void ResponseServer::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ResponseServer::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ResponseServer::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ResponseServer::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ResponseServer::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ResponseServer::getSpecification() const
{
    return specification_;
}

void ResponseServer::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ResponseServer::specificationIsSet() const
{
    return specificationIsSet_;
}

void ResponseServer::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string ResponseServer::getStatus() const
{
    return status_;
}

void ResponseServer::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResponseServer::statusIsSet() const
{
    return statusIsSet_;
}

void ResponseServer::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ResponseServer::getSubnetId() const
{
    return subnetId_;
}

void ResponseServer::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ResponseServer::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ResponseServer::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ResponseServer::getTaskStatus() const
{
    return taskStatus_;
}

void ResponseServer::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ResponseServer::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ResponseServer::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string ResponseServer::getUpdateStatus() const
{
    return updateStatus_;
}

void ResponseServer::setUpdateStatus(const std::string& value)
{
    updateStatus_ = value;
    updateStatusIsSet_ = true;
}

bool ResponseServer::updateStatusIsSet() const
{
    return updateStatusIsSet_;
}

void ResponseServer::unsetupdateStatus()
{
    updateStatusIsSet_ = false;
}

std::string ResponseServer::getVersion() const
{
    return version_;
}

void ResponseServer::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ResponseServer::versionIsSet() const
{
    return versionIsSet_;
}

void ResponseServer::unsetversion()
{
    versionIsSet_ = false;
}

std::string ResponseServer::getVpcId() const
{
    return vpcId_;
}

void ResponseServer::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ResponseServer::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ResponseServer::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ResponseServer::getZone() const
{
    return zone_;
}

void ResponseServer::setZone(const std::string& value)
{
    zone_ = value;
    zoneIsSet_ = true;
}

bool ResponseServer::zoneIsSet() const
{
    return zoneIsSet_;
}

void ResponseServer::unsetzone()
{
    zoneIsSet_ = false;
}

std::string ResponseServer::getServerId() const
{
    return serverId_;
}

void ResponseServer::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ResponseServer::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ResponseServer::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}



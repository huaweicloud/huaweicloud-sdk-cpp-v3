

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterRelations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterRelations::DisasterRelations()
{
    disasterType_ = "";
    disasterTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    disasterRole_ = "";
    disasterRoleIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    slaveRegionInstanceInfoIsSet_ = false;
    masterRegionInstanceInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    synchronizationId_ = "";
    synchronizationIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    precheckFailedReason_ = "";
    precheckFailedReasonIsSet_ = false;
    actionsIsSet_ = false;
}

DisasterRelations::~DisasterRelations() = default;

void DisasterRelations::validate()
{
}

web::json::value DisasterRelations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(disasterRoleIsSet_) {
        val[utility::conversions::to_string_t("disaster_role")] = ModelBase::toJson(disasterRole_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(slaveRegionInstanceInfoIsSet_) {
        val[utility::conversions::to_string_t("slave_region_instance_info")] = ModelBase::toJson(slaveRegionInstanceInfo_);
    }
    if(masterRegionInstanceInfoIsSet_) {
        val[utility::conversions::to_string_t("master_region_instance_info")] = ModelBase::toJson(masterRegionInstanceInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(synchronizationIdIsSet_) {
        val[utility::conversions::to_string_t("synchronization_id")] = ModelBase::toJson(synchronizationId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(precheckFailedReasonIsSet_) {
        val[utility::conversions::to_string_t("precheck_failed_reason")] = ModelBase::toJson(precheckFailedReason_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool DisasterRelations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disaster_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_region_instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_region_instance_info"));
        if(!fieldValue.is_null())
        {
            RegionInstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveRegionInstanceInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_region_instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_region_instance_info"));
        if(!fieldValue.is_null())
        {
            RegionInstanceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterRegionInstanceInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("synchronization_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("synchronization_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSynchronizationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("precheck_failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string DisasterRelations::getDisasterType() const
{
    return disasterType_;
}

void DisasterRelations::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterRelations::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterRelations::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

std::string DisasterRelations::getName() const
{
    return name_;
}

void DisasterRelations::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DisasterRelations::nameIsSet() const
{
    return nameIsSet_;
}

void DisasterRelations::unsetname()
{
    nameIsSet_ = false;
}

std::string DisasterRelations::getDisasterRole() const
{
    return disasterRole_;
}

void DisasterRelations::setDisasterRole(const std::string& value)
{
    disasterRole_ = value;
    disasterRoleIsSet_ = true;
}

bool DisasterRelations::disasterRoleIsSet() const
{
    return disasterRoleIsSet_;
}

void DisasterRelations::unsetdisasterRole()
{
    disasterRoleIsSet_ = false;
}

std::string DisasterRelations::getCreated() const
{
    return created_;
}

void DisasterRelations::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool DisasterRelations::createdIsSet() const
{
    return createdIsSet_;
}

void DisasterRelations::unsetcreated()
{
    createdIsSet_ = false;
}

std::string DisasterRelations::getUpdated() const
{
    return updated_;
}

void DisasterRelations::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool DisasterRelations::updatedIsSet() const
{
    return updatedIsSet_;
}

void DisasterRelations::unsetupdated()
{
    updatedIsSet_ = false;
}

RegionInstanceInfo DisasterRelations::getSlaveRegionInstanceInfo() const
{
    return slaveRegionInstanceInfo_;
}

void DisasterRelations::setSlaveRegionInstanceInfo(const RegionInstanceInfo& value)
{
    slaveRegionInstanceInfo_ = value;
    slaveRegionInstanceInfoIsSet_ = true;
}

bool DisasterRelations::slaveRegionInstanceInfoIsSet() const
{
    return slaveRegionInstanceInfoIsSet_;
}

void DisasterRelations::unsetslaveRegionInstanceInfo()
{
    slaveRegionInstanceInfoIsSet_ = false;
}

RegionInstanceInfo DisasterRelations::getMasterRegionInstanceInfo() const
{
    return masterRegionInstanceInfo_;
}

void DisasterRelations::setMasterRegionInstanceInfo(const RegionInstanceInfo& value)
{
    masterRegionInstanceInfo_ = value;
    masterRegionInstanceInfoIsSet_ = true;
}

bool DisasterRelations::masterRegionInstanceInfoIsSet() const
{
    return masterRegionInstanceInfoIsSet_;
}

void DisasterRelations::unsetmasterRegionInstanceInfo()
{
    masterRegionInstanceInfoIsSet_ = false;
}

std::string DisasterRelations::getId() const
{
    return id_;
}

void DisasterRelations::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DisasterRelations::idIsSet() const
{
    return idIsSet_;
}

void DisasterRelations::unsetid()
{
    idIsSet_ = false;
}

std::string DisasterRelations::getSynchronizationId() const
{
    return synchronizationId_;
}

void DisasterRelations::setSynchronizationId(const std::string& value)
{
    synchronizationId_ = value;
    synchronizationIdIsSet_ = true;
}

bool DisasterRelations::synchronizationIdIsSet() const
{
    return synchronizationIdIsSet_;
}

void DisasterRelations::unsetsynchronizationId()
{
    synchronizationIdIsSet_ = false;
}

std::string DisasterRelations::getInstanceId() const
{
    return instanceId_;
}

void DisasterRelations::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DisasterRelations::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DisasterRelations::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DisasterRelations::getInstanceName() const
{
    return instanceName_;
}

void DisasterRelations::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DisasterRelations::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DisasterRelations::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string DisasterRelations::getInstanceStatus() const
{
    return instanceStatus_;
}

void DisasterRelations::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool DisasterRelations::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void DisasterRelations::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string DisasterRelations::getStatus() const
{
    return status_;
}

void DisasterRelations::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DisasterRelations::statusIsSet() const
{
    return statusIsSet_;
}

void DisasterRelations::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DisasterRelations::getPrecheckFailedReason() const
{
    return precheckFailedReason_;
}

void DisasterRelations::setPrecheckFailedReason(const std::string& value)
{
    precheckFailedReason_ = value;
    precheckFailedReasonIsSet_ = true;
}

bool DisasterRelations::precheckFailedReasonIsSet() const
{
    return precheckFailedReasonIsSet_;
}

void DisasterRelations::unsetprecheckFailedReason()
{
    precheckFailedReasonIsSet_ = false;
}

std::vector<std::string>& DisasterRelations::getActions()
{
    return actions_;
}

void DisasterRelations::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool DisasterRelations::actionsIsSet() const
{
    return actionsIsSet_;
}

void DisasterRelations::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/sdrs/v1/model/ShowProtectionGroupParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectionGroupParams::ShowProtectionGroupParams()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    sourceAvailabilityZone_ = "";
    sourceAvailabilityZoneIsSet_ = false;
    targetAvailabilityZone_ = "";
    targetAvailabilityZoneIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    priorityStation_ = "";
    priorityStationIsSet_ = false;
    protectedInstanceNum_ = 0;
    protectedInstanceNumIsSet_ = false;
    replicationNum_ = 0;
    replicationNumIsSet_ = false;
    disasterRecoveryDrillNum_ = 0;
    disasterRecoveryDrillNumIsSet_ = false;
    protectedStatus_ = "";
    protectedStatusIsSet_ = false;
    replicationStatus_ = "";
    replicationStatusIsSet_ = false;
    healthStatus_ = "";
    healthStatusIsSet_ = false;
    sourceVpcId_ = "";
    sourceVpcIdIsSet_ = false;
    targetVpcId_ = "";
    targetVpcIdIsSet_ = false;
    testVpcId_ = "";
    testVpcIdIsSet_ = false;
    drType_ = "";
    drTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    protectionType_ = "";
    protectionTypeIsSet_ = false;
    replicationModel_ = "";
    replicationModelIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
}

ShowProtectionGroupParams::~ShowProtectionGroupParams() = default;

void ShowProtectionGroupParams::validate()
{
}

web::json::value ShowProtectionGroupParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(sourceAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("source_availability_zone")] = ModelBase::toJson(sourceAvailabilityZone_);
    }
    if(targetAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("target_availability_zone")] = ModelBase::toJson(targetAvailabilityZone_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(priorityStationIsSet_) {
        val[utility::conversions::to_string_t("priority_station")] = ModelBase::toJson(priorityStation_);
    }
    if(protectedInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_num")] = ModelBase::toJson(protectedInstanceNum_);
    }
    if(replicationNumIsSet_) {
        val[utility::conversions::to_string_t("replication_num")] = ModelBase::toJson(replicationNum_);
    }
    if(disasterRecoveryDrillNumIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill_num")] = ModelBase::toJson(disasterRecoveryDrillNum_);
    }
    if(protectedStatusIsSet_) {
        val[utility::conversions::to_string_t("protected_status")] = ModelBase::toJson(protectedStatus_);
    }
    if(replicationStatusIsSet_) {
        val[utility::conversions::to_string_t("replication_status")] = ModelBase::toJson(replicationStatus_);
    }
    if(healthStatusIsSet_) {
        val[utility::conversions::to_string_t("health_status")] = ModelBase::toJson(healthStatus_);
    }
    if(sourceVpcIdIsSet_) {
        val[utility::conversions::to_string_t("source_vpc_id")] = ModelBase::toJson(sourceVpcId_);
    }
    if(targetVpcIdIsSet_) {
        val[utility::conversions::to_string_t("target_vpc_id")] = ModelBase::toJson(targetVpcId_);
    }
    if(testVpcIdIsSet_) {
        val[utility::conversions::to_string_t("test_vpc_id")] = ModelBase::toJson(testVpcId_);
    }
    if(drTypeIsSet_) {
        val[utility::conversions::to_string_t("dr_type")] = ModelBase::toJson(drType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(protectionTypeIsSet_) {
        val[utility::conversions::to_string_t("protection_type")] = ModelBase::toJson(protectionType_);
    }
    if(replicationModelIsSet_) {
        val[utility::conversions::to_string_t("replication_model")] = ModelBase::toJson(replicationModel_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }

    return val;
}

bool ShowProtectionGroupParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityStation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrillNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("health_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dr_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protection_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protection_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    return ok;
}

std::string ShowProtectionGroupParams::getId() const
{
    return id_;
}

void ShowProtectionGroupParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProtectionGroupParams::idIsSet() const
{
    return idIsSet_;
}

void ShowProtectionGroupParams::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProtectionGroupParams::getName() const
{
    return name_;
}

void ShowProtectionGroupParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProtectionGroupParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProtectionGroupParams::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProtectionGroupParams::getDescription() const
{
    return description_;
}

void ShowProtectionGroupParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProtectionGroupParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProtectionGroupParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowProtectionGroupParams::getStatus() const
{
    return status_;
}

void ShowProtectionGroupParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProtectionGroupParams::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProtectionGroupParams::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowProtectionGroupParams::getProgress() const
{
    return progress_;
}

void ShowProtectionGroupParams::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowProtectionGroupParams::progressIsSet() const
{
    return progressIsSet_;
}

void ShowProtectionGroupParams::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ShowProtectionGroupParams::getSourceAvailabilityZone() const
{
    return sourceAvailabilityZone_;
}

void ShowProtectionGroupParams::setSourceAvailabilityZone(const std::string& value)
{
    sourceAvailabilityZone_ = value;
    sourceAvailabilityZoneIsSet_ = true;
}

bool ShowProtectionGroupParams::sourceAvailabilityZoneIsSet() const
{
    return sourceAvailabilityZoneIsSet_;
}

void ShowProtectionGroupParams::unsetsourceAvailabilityZone()
{
    sourceAvailabilityZoneIsSet_ = false;
}

std::string ShowProtectionGroupParams::getTargetAvailabilityZone() const
{
    return targetAvailabilityZone_;
}

void ShowProtectionGroupParams::setTargetAvailabilityZone(const std::string& value)
{
    targetAvailabilityZone_ = value;
    targetAvailabilityZoneIsSet_ = true;
}

bool ShowProtectionGroupParams::targetAvailabilityZoneIsSet() const
{
    return targetAvailabilityZoneIsSet_;
}

void ShowProtectionGroupParams::unsettargetAvailabilityZone()
{
    targetAvailabilityZoneIsSet_ = false;
}

std::string ShowProtectionGroupParams::getDomainId() const
{
    return domainId_;
}

void ShowProtectionGroupParams::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowProtectionGroupParams::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowProtectionGroupParams::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowProtectionGroupParams::getDomainName() const
{
    return domainName_;
}

void ShowProtectionGroupParams::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowProtectionGroupParams::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowProtectionGroupParams::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowProtectionGroupParams::getPriorityStation() const
{
    return priorityStation_;
}

void ShowProtectionGroupParams::setPriorityStation(const std::string& value)
{
    priorityStation_ = value;
    priorityStationIsSet_ = true;
}

bool ShowProtectionGroupParams::priorityStationIsSet() const
{
    return priorityStationIsSet_;
}

void ShowProtectionGroupParams::unsetpriorityStation()
{
    priorityStationIsSet_ = false;
}

int32_t ShowProtectionGroupParams::getProtectedInstanceNum() const
{
    return protectedInstanceNum_;
}

void ShowProtectionGroupParams::setProtectedInstanceNum(int32_t value)
{
    protectedInstanceNum_ = value;
    protectedInstanceNumIsSet_ = true;
}

bool ShowProtectionGroupParams::protectedInstanceNumIsSet() const
{
    return protectedInstanceNumIsSet_;
}

void ShowProtectionGroupParams::unsetprotectedInstanceNum()
{
    protectedInstanceNumIsSet_ = false;
}

int32_t ShowProtectionGroupParams::getReplicationNum() const
{
    return replicationNum_;
}

void ShowProtectionGroupParams::setReplicationNum(int32_t value)
{
    replicationNum_ = value;
    replicationNumIsSet_ = true;
}

bool ShowProtectionGroupParams::replicationNumIsSet() const
{
    return replicationNumIsSet_;
}

void ShowProtectionGroupParams::unsetreplicationNum()
{
    replicationNumIsSet_ = false;
}

int32_t ShowProtectionGroupParams::getDisasterRecoveryDrillNum() const
{
    return disasterRecoveryDrillNum_;
}

void ShowProtectionGroupParams::setDisasterRecoveryDrillNum(int32_t value)
{
    disasterRecoveryDrillNum_ = value;
    disasterRecoveryDrillNumIsSet_ = true;
}

bool ShowProtectionGroupParams::disasterRecoveryDrillNumIsSet() const
{
    return disasterRecoveryDrillNumIsSet_;
}

void ShowProtectionGroupParams::unsetdisasterRecoveryDrillNum()
{
    disasterRecoveryDrillNumIsSet_ = false;
}

std::string ShowProtectionGroupParams::getProtectedStatus() const
{
    return protectedStatus_;
}

void ShowProtectionGroupParams::setProtectedStatus(const std::string& value)
{
    protectedStatus_ = value;
    protectedStatusIsSet_ = true;
}

bool ShowProtectionGroupParams::protectedStatusIsSet() const
{
    return protectedStatusIsSet_;
}

void ShowProtectionGroupParams::unsetprotectedStatus()
{
    protectedStatusIsSet_ = false;
}

std::string ShowProtectionGroupParams::getReplicationStatus() const
{
    return replicationStatus_;
}

void ShowProtectionGroupParams::setReplicationStatus(const std::string& value)
{
    replicationStatus_ = value;
    replicationStatusIsSet_ = true;
}

bool ShowProtectionGroupParams::replicationStatusIsSet() const
{
    return replicationStatusIsSet_;
}

void ShowProtectionGroupParams::unsetreplicationStatus()
{
    replicationStatusIsSet_ = false;
}

std::string ShowProtectionGroupParams::getHealthStatus() const
{
    return healthStatus_;
}

void ShowProtectionGroupParams::setHealthStatus(const std::string& value)
{
    healthStatus_ = value;
    healthStatusIsSet_ = true;
}

bool ShowProtectionGroupParams::healthStatusIsSet() const
{
    return healthStatusIsSet_;
}

void ShowProtectionGroupParams::unsethealthStatus()
{
    healthStatusIsSet_ = false;
}

std::string ShowProtectionGroupParams::getSourceVpcId() const
{
    return sourceVpcId_;
}

void ShowProtectionGroupParams::setSourceVpcId(const std::string& value)
{
    sourceVpcId_ = value;
    sourceVpcIdIsSet_ = true;
}

bool ShowProtectionGroupParams::sourceVpcIdIsSet() const
{
    return sourceVpcIdIsSet_;
}

void ShowProtectionGroupParams::unsetsourceVpcId()
{
    sourceVpcIdIsSet_ = false;
}

std::string ShowProtectionGroupParams::getTargetVpcId() const
{
    return targetVpcId_;
}

void ShowProtectionGroupParams::setTargetVpcId(const std::string& value)
{
    targetVpcId_ = value;
    targetVpcIdIsSet_ = true;
}

bool ShowProtectionGroupParams::targetVpcIdIsSet() const
{
    return targetVpcIdIsSet_;
}

void ShowProtectionGroupParams::unsettargetVpcId()
{
    targetVpcIdIsSet_ = false;
}

std::string ShowProtectionGroupParams::getTestVpcId() const
{
    return testVpcId_;
}

void ShowProtectionGroupParams::setTestVpcId(const std::string& value)
{
    testVpcId_ = value;
    testVpcIdIsSet_ = true;
}

bool ShowProtectionGroupParams::testVpcIdIsSet() const
{
    return testVpcIdIsSet_;
}

void ShowProtectionGroupParams::unsettestVpcId()
{
    testVpcIdIsSet_ = false;
}

std::string ShowProtectionGroupParams::getDrType() const
{
    return drType_;
}

void ShowProtectionGroupParams::setDrType(const std::string& value)
{
    drType_ = value;
    drTypeIsSet_ = true;
}

bool ShowProtectionGroupParams::drTypeIsSet() const
{
    return drTypeIsSet_;
}

void ShowProtectionGroupParams::unsetdrType()
{
    drTypeIsSet_ = false;
}

std::string ShowProtectionGroupParams::getCreatedAt() const
{
    return createdAt_;
}

void ShowProtectionGroupParams::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowProtectionGroupParams::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowProtectionGroupParams::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowProtectionGroupParams::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowProtectionGroupParams::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowProtectionGroupParams::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowProtectionGroupParams::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowProtectionGroupParams::getProtectionType() const
{
    return protectionType_;
}

void ShowProtectionGroupParams::setProtectionType(const std::string& value)
{
    protectionType_ = value;
    protectionTypeIsSet_ = true;
}

bool ShowProtectionGroupParams::protectionTypeIsSet() const
{
    return protectionTypeIsSet_;
}

void ShowProtectionGroupParams::unsetprotectionType()
{
    protectionTypeIsSet_ = false;
}

std::string ShowProtectionGroupParams::getReplicationModel() const
{
    return replicationModel_;
}

void ShowProtectionGroupParams::setReplicationModel(const std::string& value)
{
    replicationModel_ = value;
    replicationModelIsSet_ = true;
}

bool ShowProtectionGroupParams::replicationModelIsSet() const
{
    return replicationModelIsSet_;
}

void ShowProtectionGroupParams::unsetreplicationModel()
{
    replicationModelIsSet_ = false;
}

std::string ShowProtectionGroupParams::getServerType() const
{
    return serverType_;
}

void ShowProtectionGroupParams::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowProtectionGroupParams::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowProtectionGroupParams::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/rds/v3/model/SimplifiedInstanceEntry.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SimplifiedInstanceEntry::SimplifiedInstanceEntry()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    frozen_ = false;
    frozenIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    payModel_ = "";
    payModelIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    availabilityZoneIdsIsSet_ = false;
    readOnlyInstancesIsSet_ = false;
    currentActionsIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    volumeSize_ = 0L;
    volumeSizeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

SimplifiedInstanceEntry::~SimplifiedInstanceEntry() = default;

void SimplifiedInstanceEntry::validate()
{
}

web::json::value SimplifiedInstanceEntry::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(frozenIsSet_) {
        val[utility::conversions::to_string_t("frozen")] = ModelBase::toJson(frozen_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(availabilityZoneIdsIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_ids")] = ModelBase::toJson(availabilityZoneIds_);
    }
    if(readOnlyInstancesIsSet_) {
        val[utility::conversions::to_string_t("read_only_instances")] = ModelBase::toJson(readOnlyInstances_);
    }
    if(currentActionsIsSet_) {
        val[utility::conversions::to_string_t("current_actions")] = ModelBase::toJson(currentActions_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool SimplifiedInstanceEntry::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozen(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pay_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string SimplifiedInstanceEntry::getId() const
{
    return id_;
}

void SimplifiedInstanceEntry::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimplifiedInstanceEntry::idIsSet() const
{
    return idIsSet_;
}

void SimplifiedInstanceEntry::unsetid()
{
    idIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getName() const
{
    return name_;
}

void SimplifiedInstanceEntry::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SimplifiedInstanceEntry::nameIsSet() const
{
    return nameIsSet_;
}

void SimplifiedInstanceEntry::unsetname()
{
    nameIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getEngineName() const
{
    return engineName_;
}

void SimplifiedInstanceEntry::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool SimplifiedInstanceEntry::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void SimplifiedInstanceEntry::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getEngineVersion() const
{
    return engineVersion_;
}

void SimplifiedInstanceEntry::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool SimplifiedInstanceEntry::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void SimplifiedInstanceEntry::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getInstanceStatus() const
{
    return instanceStatus_;
}

void SimplifiedInstanceEntry::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool SimplifiedInstanceEntry::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void SimplifiedInstanceEntry::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

bool SimplifiedInstanceEntry::isFrozen() const
{
    return frozen_;
}

void SimplifiedInstanceEntry::setFrozen(bool value)
{
    frozen_ = value;
    frozenIsSet_ = true;
}

bool SimplifiedInstanceEntry::frozenIsSet() const
{
    return frozenIsSet_;
}

void SimplifiedInstanceEntry::unsetfrozen()
{
    frozenIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getType() const
{
    return type_;
}

void SimplifiedInstanceEntry::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SimplifiedInstanceEntry::typeIsSet() const
{
    return typeIsSet_;
}

void SimplifiedInstanceEntry::unsettype()
{
    typeIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getPayModel() const
{
    return payModel_;
}

void SimplifiedInstanceEntry::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool SimplifiedInstanceEntry::payModelIsSet() const
{
    return payModelIsSet_;
}

void SimplifiedInstanceEntry::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getSpecCode() const
{
    return specCode_;
}

void SimplifiedInstanceEntry::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool SimplifiedInstanceEntry::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void SimplifiedInstanceEntry::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::vector<std::string>& SimplifiedInstanceEntry::getAvailabilityZoneIds()
{
    return availabilityZoneIds_;
}

void SimplifiedInstanceEntry::setAvailabilityZoneIds(const std::vector<std::string>& value)
{
    availabilityZoneIds_ = value;
    availabilityZoneIdsIsSet_ = true;
}

bool SimplifiedInstanceEntry::availabilityZoneIdsIsSet() const
{
    return availabilityZoneIdsIsSet_;
}

void SimplifiedInstanceEntry::unsetavailabilityZoneIds()
{
    availabilityZoneIdsIsSet_ = false;
}

std::vector<std::string>& SimplifiedInstanceEntry::getReadOnlyInstances()
{
    return readOnlyInstances_;
}

void SimplifiedInstanceEntry::setReadOnlyInstances(const std::vector<std::string>& value)
{
    readOnlyInstances_ = value;
    readOnlyInstancesIsSet_ = true;
}

bool SimplifiedInstanceEntry::readOnlyInstancesIsSet() const
{
    return readOnlyInstancesIsSet_;
}

void SimplifiedInstanceEntry::unsetreadOnlyInstances()
{
    readOnlyInstancesIsSet_ = false;
}

std::vector<std::string>& SimplifiedInstanceEntry::getCurrentActions()
{
    return currentActions_;
}

void SimplifiedInstanceEntry::setCurrentActions(const std::vector<std::string>& value)
{
    currentActions_ = value;
    currentActionsIsSet_ = true;
}

bool SimplifiedInstanceEntry::currentActionsIsSet() const
{
    return currentActionsIsSet_;
}

void SimplifiedInstanceEntry::unsetcurrentActions()
{
    currentActionsIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getVolumeType() const
{
    return volumeType_;
}

void SimplifiedInstanceEntry::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool SimplifiedInstanceEntry::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void SimplifiedInstanceEntry::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int64_t SimplifiedInstanceEntry::getVolumeSize() const
{
    return volumeSize_;
}

void SimplifiedInstanceEntry::setVolumeSize(int64_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool SimplifiedInstanceEntry::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void SimplifiedInstanceEntry::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string SimplifiedInstanceEntry::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SimplifiedInstanceEntry::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SimplifiedInstanceEntry::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SimplifiedInstanceEntry::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/modelarts/v1/model/UpdateInferDeploymentHpaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferDeploymentHpaResponse::UpdateInferDeploymentHpaResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    targetResourceId_ = "";
    targetResourceIdIsSet_ = false;
    targetResourceType_ = "";
    targetResourceTypeIsSet_ = false;
    minReplicas_ = 0;
    minReplicasIsSet_ = false;
    maxReplicas_ = 0;
    maxReplicasIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    hpaRulesIsSet_ = false;
}

UpdateInferDeploymentHpaResponse::~UpdateInferDeploymentHpaResponse() = default;

void UpdateInferDeploymentHpaResponse::validate()
{
}

web::json::value UpdateInferDeploymentHpaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(targetResourceIdIsSet_) {
        val[utility::conversions::to_string_t("target_resource_id")] = ModelBase::toJson(targetResourceId_);
    }
    if(targetResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("target_resource_type")] = ModelBase::toJson(targetResourceType_);
    }
    if(minReplicasIsSet_) {
        val[utility::conversions::to_string_t("min_replicas")] = ModelBase::toJson(minReplicas_);
    }
    if(maxReplicasIsSet_) {
        val[utility::conversions::to_string_t("max_replicas")] = ModelBase::toJson(maxReplicas_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(hpaRulesIsSet_) {
        val[utility::conversions::to_string_t("hpa_rules")] = ModelBase::toJson(hpaRules_);
    }

    return val;
}
bool UpdateInferDeploymentHpaResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinReplicas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_replicas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_replicas"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReplicas(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hpa_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hpa_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<HpaRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpaRules(refVal);
        }
    }
    return ok;
}


std::string UpdateInferDeploymentHpaResponse::getId() const
{
    return id_;
}

void UpdateInferDeploymentHpaResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateInferDeploymentHpaResponse::getName() const
{
    return name_;
}

void UpdateInferDeploymentHpaResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInferDeploymentHpaResponse::getTargetResourceId() const
{
    return targetResourceId_;
}

void UpdateInferDeploymentHpaResponse::setTargetResourceId(const std::string& value)
{
    targetResourceId_ = value;
    targetResourceIdIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::targetResourceIdIsSet() const
{
    return targetResourceIdIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsettargetResourceId()
{
    targetResourceIdIsSet_ = false;
}

std::string UpdateInferDeploymentHpaResponse::getTargetResourceType() const
{
    return targetResourceType_;
}

void UpdateInferDeploymentHpaResponse::setTargetResourceType(const std::string& value)
{
    targetResourceType_ = value;
    targetResourceTypeIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::targetResourceTypeIsSet() const
{
    return targetResourceTypeIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsettargetResourceType()
{
    targetResourceTypeIsSet_ = false;
}

int32_t UpdateInferDeploymentHpaResponse::getMinReplicas() const
{
    return minReplicas_;
}

void UpdateInferDeploymentHpaResponse::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t UpdateInferDeploymentHpaResponse::getMaxReplicas() const
{
    return maxReplicas_;
}

void UpdateInferDeploymentHpaResponse::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

std::string UpdateInferDeploymentHpaResponse::getStatus() const
{
    return status_;
}

void UpdateInferDeploymentHpaResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateInferDeploymentHpaResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateInferDeploymentHpaResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HpaRule>& UpdateInferDeploymentHpaResponse::getHpaRules()
{
    return hpaRules_;
}

void UpdateInferDeploymentHpaResponse::setHpaRules(const std::vector<HpaRule>& value)
{
    hpaRules_ = value;
    hpaRulesIsSet_ = true;
}

bool UpdateInferDeploymentHpaResponse::hpaRulesIsSet() const
{
    return hpaRulesIsSet_;
}

void UpdateInferDeploymentHpaResponse::unsethpaRules()
{
    hpaRulesIsSet_ = false;
}

}
}
}
}
}



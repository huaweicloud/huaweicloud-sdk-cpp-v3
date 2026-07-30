

#include "huaweicloud/modelarts/v1/model/DeleteInferDeploymentHpaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferDeploymentHpaResponse::DeleteInferDeploymentHpaResponse()
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

DeleteInferDeploymentHpaResponse::~DeleteInferDeploymentHpaResponse() = default;

void DeleteInferDeploymentHpaResponse::validate()
{
}

web::json::value DeleteInferDeploymentHpaResponse::toJson() const
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
bool DeleteInferDeploymentHpaResponse::fromJson(const web::json::value& val)
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


std::string DeleteInferDeploymentHpaResponse::getId() const
{
    return id_;
}

void DeleteInferDeploymentHpaResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteInferDeploymentHpaResponse::getName() const
{
    return name_;
}

void DeleteInferDeploymentHpaResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteInferDeploymentHpaResponse::getTargetResourceId() const
{
    return targetResourceId_;
}

void DeleteInferDeploymentHpaResponse::setTargetResourceId(const std::string& value)
{
    targetResourceId_ = value;
    targetResourceIdIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::targetResourceIdIsSet() const
{
    return targetResourceIdIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsettargetResourceId()
{
    targetResourceIdIsSet_ = false;
}

std::string DeleteInferDeploymentHpaResponse::getTargetResourceType() const
{
    return targetResourceType_;
}

void DeleteInferDeploymentHpaResponse::setTargetResourceType(const std::string& value)
{
    targetResourceType_ = value;
    targetResourceTypeIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::targetResourceTypeIsSet() const
{
    return targetResourceTypeIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsettargetResourceType()
{
    targetResourceTypeIsSet_ = false;
}

int32_t DeleteInferDeploymentHpaResponse::getMinReplicas() const
{
    return minReplicas_;
}

void DeleteInferDeploymentHpaResponse::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t DeleteInferDeploymentHpaResponse::getMaxReplicas() const
{
    return maxReplicas_;
}

void DeleteInferDeploymentHpaResponse::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

std::string DeleteInferDeploymentHpaResponse::getStatus() const
{
    return status_;
}

void DeleteInferDeploymentHpaResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteInferDeploymentHpaResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteInferDeploymentHpaResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HpaRule>& DeleteInferDeploymentHpaResponse::getHpaRules()
{
    return hpaRules_;
}

void DeleteInferDeploymentHpaResponse::setHpaRules(const std::vector<HpaRule>& value)
{
    hpaRules_ = value;
    hpaRulesIsSet_ = true;
}

bool DeleteInferDeploymentHpaResponse::hpaRulesIsSet() const
{
    return hpaRulesIsSet_;
}

void DeleteInferDeploymentHpaResponse::unsethpaRules()
{
    hpaRulesIsSet_ = false;
}

}
}
}
}
}



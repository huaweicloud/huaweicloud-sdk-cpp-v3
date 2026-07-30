

#include "huaweicloud/modelarts/v1/model/CreateInferDeploymentHpaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferDeploymentHpaResponse::CreateInferDeploymentHpaResponse()
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

CreateInferDeploymentHpaResponse::~CreateInferDeploymentHpaResponse() = default;

void CreateInferDeploymentHpaResponse::validate()
{
}

web::json::value CreateInferDeploymentHpaResponse::toJson() const
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
bool CreateInferDeploymentHpaResponse::fromJson(const web::json::value& val)
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


std::string CreateInferDeploymentHpaResponse::getId() const
{
    return id_;
}

void CreateInferDeploymentHpaResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateInferDeploymentHpaResponse::getName() const
{
    return name_;
}

void CreateInferDeploymentHpaResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateInferDeploymentHpaResponse::getTargetResourceId() const
{
    return targetResourceId_;
}

void CreateInferDeploymentHpaResponse::setTargetResourceId(const std::string& value)
{
    targetResourceId_ = value;
    targetResourceIdIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::targetResourceIdIsSet() const
{
    return targetResourceIdIsSet_;
}

void CreateInferDeploymentHpaResponse::unsettargetResourceId()
{
    targetResourceIdIsSet_ = false;
}

std::string CreateInferDeploymentHpaResponse::getTargetResourceType() const
{
    return targetResourceType_;
}

void CreateInferDeploymentHpaResponse::setTargetResourceType(const std::string& value)
{
    targetResourceType_ = value;
    targetResourceTypeIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::targetResourceTypeIsSet() const
{
    return targetResourceTypeIsSet_;
}

void CreateInferDeploymentHpaResponse::unsettargetResourceType()
{
    targetResourceTypeIsSet_ = false;
}

int32_t CreateInferDeploymentHpaResponse::getMinReplicas() const
{
    return minReplicas_;
}

void CreateInferDeploymentHpaResponse::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t CreateInferDeploymentHpaResponse::getMaxReplicas() const
{
    return maxReplicas_;
}

void CreateInferDeploymentHpaResponse::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

std::string CreateInferDeploymentHpaResponse::getStatus() const
{
    return status_;
}

void CreateInferDeploymentHpaResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateInferDeploymentHpaResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateInferDeploymentHpaResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateInferDeploymentHpaResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HpaRule>& CreateInferDeploymentHpaResponse::getHpaRules()
{
    return hpaRules_;
}

void CreateInferDeploymentHpaResponse::setHpaRules(const std::vector<HpaRule>& value)
{
    hpaRules_ = value;
    hpaRulesIsSet_ = true;
}

bool CreateInferDeploymentHpaResponse::hpaRulesIsSet() const
{
    return hpaRulesIsSet_;
}

void CreateInferDeploymentHpaResponse::unsethpaRules()
{
    hpaRulesIsSet_ = false;
}

}
}
}
}
}



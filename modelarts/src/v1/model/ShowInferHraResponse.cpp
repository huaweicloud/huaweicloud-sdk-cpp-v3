

#include "huaweicloud/modelarts/v1/model/ShowInferHraResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferHraResponse::ShowInferHraResponse()
{
    id_ = "";
    idIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    hraRulesIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    policyStatus_ = "";
    policyStatusIsSet_ = false;
    minReplicas_ = 0;
    minReplicasIsSet_ = false;
    maxReplicas_ = 0;
    maxReplicasIsSet_ = false;
    scaleWindow_ = 0;
    scaleWindowIsSet_ = false;
}

ShowInferHraResponse::~ShowInferHraResponse() = default;

void ShowInferHraResponse::validate()
{
}

web::json::value ShowInferHraResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(hraRulesIsSet_) {
        val[utility::conversions::to_string_t("hra_rules")] = ModelBase::toJson(hraRules_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(policyStatusIsSet_) {
        val[utility::conversions::to_string_t("policy_status")] = ModelBase::toJson(policyStatus_);
    }
    if(minReplicasIsSet_) {
        val[utility::conversions::to_string_t("min_replicas")] = ModelBase::toJson(minReplicas_);
    }
    if(maxReplicasIsSet_) {
        val[utility::conversions::to_string_t("max_replicas")] = ModelBase::toJson(maxReplicas_);
    }
    if(scaleWindowIsSet_) {
        val[utility::conversions::to_string_t("scale_window")] = ModelBase::toJson(scaleWindow_);
    }

    return val;
}
bool ShowInferHraResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hra_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hra_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<HraRuleResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHraRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scale_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scale_window"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleWindow(refVal);
        }
    }
    return ok;
}


std::string ShowInferHraResponse::getId() const
{
    return id_;
}

void ShowInferHraResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInferHraResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowInferHraResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInferHraResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowInferHraResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowInferHraResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowInferHraResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HraRuleResponse>& ShowInferHraResponse::getHraRules()
{
    return hraRules_;
}

void ShowInferHraResponse::setHraRules(const std::vector<HraRuleResponse>& value)
{
    hraRules_ = value;
    hraRulesIsSet_ = true;
}

bool ShowInferHraResponse::hraRulesIsSet() const
{
    return hraRulesIsSet_;
}

void ShowInferHraResponse::unsethraRules()
{
    hraRulesIsSet_ = false;
}

bool ShowInferHraResponse::isDisable() const
{
    return disable_;
}

void ShowInferHraResponse::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool ShowInferHraResponse::disableIsSet() const
{
    return disableIsSet_;
}

void ShowInferHraResponse::unsetdisable()
{
    disableIsSet_ = false;
}

std::string ShowInferHraResponse::getPolicyStatus() const
{
    return policyStatus_;
}

void ShowInferHraResponse::setPolicyStatus(const std::string& value)
{
    policyStatus_ = value;
    policyStatusIsSet_ = true;
}

bool ShowInferHraResponse::policyStatusIsSet() const
{
    return policyStatusIsSet_;
}

void ShowInferHraResponse::unsetpolicyStatus()
{
    policyStatusIsSet_ = false;
}

int32_t ShowInferHraResponse::getMinReplicas() const
{
    return minReplicas_;
}

void ShowInferHraResponse::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool ShowInferHraResponse::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void ShowInferHraResponse::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t ShowInferHraResponse::getMaxReplicas() const
{
    return maxReplicas_;
}

void ShowInferHraResponse::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool ShowInferHraResponse::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void ShowInferHraResponse::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

int32_t ShowInferHraResponse::getScaleWindow() const
{
    return scaleWindow_;
}

void ShowInferHraResponse::setScaleWindow(int32_t value)
{
    scaleWindow_ = value;
    scaleWindowIsSet_ = true;
}

bool ShowInferHraResponse::scaleWindowIsSet() const
{
    return scaleWindowIsSet_;
}

void ShowInferHraResponse::unsetscaleWindow()
{
    scaleWindowIsSet_ = false;
}

}
}
}
}
}



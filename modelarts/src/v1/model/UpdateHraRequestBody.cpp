

#include "huaweicloud/modelarts/v1/model/UpdateHraRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateHraRequestBody::UpdateHraRequestBody()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    hraRulesIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    minReplicas_ = 0;
    minReplicasIsSet_ = false;
    maxReplicas_ = 0;
    maxReplicasIsSet_ = false;
    scaleWindow_ = 0;
    scaleWindowIsSet_ = false;
}

UpdateHraRequestBody::~UpdateHraRequestBody() = default;

void UpdateHraRequestBody::validate()
{
}

web::json::value UpdateHraRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(hraRulesIsSet_) {
        val[utility::conversions::to_string_t("hra_rules")] = ModelBase::toJson(hraRules_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
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
bool UpdateHraRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<HraRuleUpdateRequest> refVal;
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


std::string UpdateHraRequestBody::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateHraRequestBody::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateHraRequestBody::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateHraRequestBody::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HraRuleUpdateRequest>& UpdateHraRequestBody::getHraRules()
{
    return hraRules_;
}

void UpdateHraRequestBody::setHraRules(const std::vector<HraRuleUpdateRequest>& value)
{
    hraRules_ = value;
    hraRulesIsSet_ = true;
}

bool UpdateHraRequestBody::hraRulesIsSet() const
{
    return hraRulesIsSet_;
}

void UpdateHraRequestBody::unsethraRules()
{
    hraRulesIsSet_ = false;
}

bool UpdateHraRequestBody::isDisable() const
{
    return disable_;
}

void UpdateHraRequestBody::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool UpdateHraRequestBody::disableIsSet() const
{
    return disableIsSet_;
}

void UpdateHraRequestBody::unsetdisable()
{
    disableIsSet_ = false;
}

int32_t UpdateHraRequestBody::getMinReplicas() const
{
    return minReplicas_;
}

void UpdateHraRequestBody::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool UpdateHraRequestBody::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void UpdateHraRequestBody::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t UpdateHraRequestBody::getMaxReplicas() const
{
    return maxReplicas_;
}

void UpdateHraRequestBody::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool UpdateHraRequestBody::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void UpdateHraRequestBody::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

int32_t UpdateHraRequestBody::getScaleWindow() const
{
    return scaleWindow_;
}

void UpdateHraRequestBody::setScaleWindow(int32_t value)
{
    scaleWindow_ = value;
    scaleWindowIsSet_ = true;
}

bool UpdateHraRequestBody::scaleWindowIsSet() const
{
    return scaleWindowIsSet_;
}

void UpdateHraRequestBody::unsetscaleWindow()
{
    scaleWindowIsSet_ = false;
}

}
}
}
}
}



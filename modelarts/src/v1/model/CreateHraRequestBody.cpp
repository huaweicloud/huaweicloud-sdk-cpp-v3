

#include "huaweicloud/modelarts/v1/model/CreateHraRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHraRequestBody::CreateHraRequestBody()
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

CreateHraRequestBody::~CreateHraRequestBody() = default;

void CreateHraRequestBody::validate()
{
}

web::json::value CreateHraRequestBody::toJson() const
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
bool CreateHraRequestBody::fromJson(const web::json::value& val)
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
            std::vector<HraRuleCreateRequest> refVal;
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


std::string CreateHraRequestBody::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateHraRequestBody::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateHraRequestBody::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateHraRequestBody::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<HraRuleCreateRequest>& CreateHraRequestBody::getHraRules()
{
    return hraRules_;
}

void CreateHraRequestBody::setHraRules(const std::vector<HraRuleCreateRequest>& value)
{
    hraRules_ = value;
    hraRulesIsSet_ = true;
}

bool CreateHraRequestBody::hraRulesIsSet() const
{
    return hraRulesIsSet_;
}

void CreateHraRequestBody::unsethraRules()
{
    hraRulesIsSet_ = false;
}

bool CreateHraRequestBody::isDisable() const
{
    return disable_;
}

void CreateHraRequestBody::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool CreateHraRequestBody::disableIsSet() const
{
    return disableIsSet_;
}

void CreateHraRequestBody::unsetdisable()
{
    disableIsSet_ = false;
}

int32_t CreateHraRequestBody::getMinReplicas() const
{
    return minReplicas_;
}

void CreateHraRequestBody::setMinReplicas(int32_t value)
{
    minReplicas_ = value;
    minReplicasIsSet_ = true;
}

bool CreateHraRequestBody::minReplicasIsSet() const
{
    return minReplicasIsSet_;
}

void CreateHraRequestBody::unsetminReplicas()
{
    minReplicasIsSet_ = false;
}

int32_t CreateHraRequestBody::getMaxReplicas() const
{
    return maxReplicas_;
}

void CreateHraRequestBody::setMaxReplicas(int32_t value)
{
    maxReplicas_ = value;
    maxReplicasIsSet_ = true;
}

bool CreateHraRequestBody::maxReplicasIsSet() const
{
    return maxReplicasIsSet_;
}

void CreateHraRequestBody::unsetmaxReplicas()
{
    maxReplicasIsSet_ = false;
}

int32_t CreateHraRequestBody::getScaleWindow() const
{
    return scaleWindow_;
}

void CreateHraRequestBody::setScaleWindow(int32_t value)
{
    scaleWindow_ = value;
    scaleWindowIsSet_ = true;
}

bool CreateHraRequestBody::scaleWindowIsSet() const
{
    return scaleWindowIsSet_;
}

void CreateHraRequestBody::unsetscaleWindow()
{
    scaleWindowIsSet_ = false;
}

}
}
}
}
}



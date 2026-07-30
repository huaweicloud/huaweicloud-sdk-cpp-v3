

#include "huaweicloud/modelarts/v1/model/HraRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HraRuleResponse::HraRuleResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    disable_ = false;
    disableIsSet_ = false;
    scalerType_ = "";
    scalerTypeIsSet_ = false;
    ruleStatus_ = "";
    ruleStatusIsSet_ = false;
    sloInfoIsSet_ = false;
    metricsIsSet_ = false;
    roleReplicaIsSet_ = false;
}

HraRuleResponse::~HraRuleResponse() = default;

void HraRuleResponse::validate()
{
}

web::json::value HraRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(scalerTypeIsSet_) {
        val[utility::conversions::to_string_t("scaler_type")] = ModelBase::toJson(scalerType_);
    }
    if(ruleStatusIsSet_) {
        val[utility::conversions::to_string_t("rule_status")] = ModelBase::toJson(ruleStatus_);
    }
    if(sloInfoIsSet_) {
        val[utility::conversions::to_string_t("slo_info")] = ModelBase::toJson(sloInfo_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }
    if(roleReplicaIsSet_) {
        val[utility::conversions::to_string_t("role_replica")] = ModelBase::toJson(roleReplica_);
    }

    return val;
}
bool HraRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaler_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaler_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slo_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slo_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SloInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSloInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<Metrics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_replica"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_replica"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleReplica> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleReplica(refVal);
        }
    }
    return ok;
}


std::string HraRuleResponse::getId() const
{
    return id_;
}

void HraRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HraRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void HraRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string HraRuleResponse::getName() const
{
    return name_;
}

void HraRuleResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HraRuleResponse::nameIsSet() const
{
    return nameIsSet_;
}

void HraRuleResponse::unsetname()
{
    nameIsSet_ = false;
}

bool HraRuleResponse::isDisable() const
{
    return disable_;
}

void HraRuleResponse::setDisable(bool value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool HraRuleResponse::disableIsSet() const
{
    return disableIsSet_;
}

void HraRuleResponse::unsetdisable()
{
    disableIsSet_ = false;
}

std::string HraRuleResponse::getScalerType() const
{
    return scalerType_;
}

void HraRuleResponse::setScalerType(const std::string& value)
{
    scalerType_ = value;
    scalerTypeIsSet_ = true;
}

bool HraRuleResponse::scalerTypeIsSet() const
{
    return scalerTypeIsSet_;
}

void HraRuleResponse::unsetscalerType()
{
    scalerTypeIsSet_ = false;
}

std::string HraRuleResponse::getRuleStatus() const
{
    return ruleStatus_;
}

void HraRuleResponse::setRuleStatus(const std::string& value)
{
    ruleStatus_ = value;
    ruleStatusIsSet_ = true;
}

bool HraRuleResponse::ruleStatusIsSet() const
{
    return ruleStatusIsSet_;
}

void HraRuleResponse::unsetruleStatus()
{
    ruleStatusIsSet_ = false;
}

std::vector<SloInfo>& HraRuleResponse::getSloInfo()
{
    return sloInfo_;
}

void HraRuleResponse::setSloInfo(const std::vector<SloInfo>& value)
{
    sloInfo_ = value;
    sloInfoIsSet_ = true;
}

bool HraRuleResponse::sloInfoIsSet() const
{
    return sloInfoIsSet_;
}

void HraRuleResponse::unsetsloInfo()
{
    sloInfoIsSet_ = false;
}

std::vector<Metrics>& HraRuleResponse::getMetrics()
{
    return metrics_;
}

void HraRuleResponse::setMetrics(const std::vector<Metrics>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool HraRuleResponse::metricsIsSet() const
{
    return metricsIsSet_;
}

void HraRuleResponse::unsetmetrics()
{
    metricsIsSet_ = false;
}

std::vector<RoleReplica>& HraRuleResponse::getRoleReplica()
{
    return roleReplica_;
}

void HraRuleResponse::setRoleReplica(const std::vector<RoleReplica>& value)
{
    roleReplica_ = value;
    roleReplicaIsSet_ = true;
}

bool HraRuleResponse::roleReplicaIsSet() const
{
    return roleReplicaIsSet_;
}

void HraRuleResponse::unsetroleReplica()
{
    roleReplicaIsSet_ = false;
}

}
}
}
}
}



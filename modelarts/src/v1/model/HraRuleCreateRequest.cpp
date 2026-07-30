

#include "huaweicloud/modelarts/v1/model/HraRuleCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HraRuleCreateRequest::HraRuleCreateRequest()
{
    scalerType_ = "";
    scalerTypeIsSet_ = false;
    sloInfoIsSet_ = false;
    metricsIsSet_ = false;
    roleReplicaIsSet_ = false;
}

HraRuleCreateRequest::~HraRuleCreateRequest() = default;

void HraRuleCreateRequest::validate()
{
}

web::json::value HraRuleCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scalerTypeIsSet_) {
        val[utility::conversions::to_string_t("scaler_type")] = ModelBase::toJson(scalerType_);
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
bool HraRuleCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scaler_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaler_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalerType(refVal);
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


std::string HraRuleCreateRequest::getScalerType() const
{
    return scalerType_;
}

void HraRuleCreateRequest::setScalerType(const std::string& value)
{
    scalerType_ = value;
    scalerTypeIsSet_ = true;
}

bool HraRuleCreateRequest::scalerTypeIsSet() const
{
    return scalerTypeIsSet_;
}

void HraRuleCreateRequest::unsetscalerType()
{
    scalerTypeIsSet_ = false;
}

std::vector<SloInfo>& HraRuleCreateRequest::getSloInfo()
{
    return sloInfo_;
}

void HraRuleCreateRequest::setSloInfo(const std::vector<SloInfo>& value)
{
    sloInfo_ = value;
    sloInfoIsSet_ = true;
}

bool HraRuleCreateRequest::sloInfoIsSet() const
{
    return sloInfoIsSet_;
}

void HraRuleCreateRequest::unsetsloInfo()
{
    sloInfoIsSet_ = false;
}

std::vector<Metrics>& HraRuleCreateRequest::getMetrics()
{
    return metrics_;
}

void HraRuleCreateRequest::setMetrics(const std::vector<Metrics>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool HraRuleCreateRequest::metricsIsSet() const
{
    return metricsIsSet_;
}

void HraRuleCreateRequest::unsetmetrics()
{
    metricsIsSet_ = false;
}

std::vector<RoleReplica>& HraRuleCreateRequest::getRoleReplica()
{
    return roleReplica_;
}

void HraRuleCreateRequest::setRoleReplica(const std::vector<RoleReplica>& value)
{
    roleReplica_ = value;
    roleReplicaIsSet_ = true;
}

bool HraRuleCreateRequest::roleReplicaIsSet() const
{
    return roleReplicaIsSet_;
}

void HraRuleCreateRequest::unsetroleReplica()
{
    roleReplicaIsSet_ = false;
}

}
}
}
}
}



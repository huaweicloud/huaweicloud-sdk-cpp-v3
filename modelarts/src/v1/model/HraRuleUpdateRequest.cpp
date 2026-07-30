

#include "huaweicloud/modelarts/v1/model/HraRuleUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HraRuleUpdateRequest::HraRuleUpdateRequest()
{
    id_ = "";
    idIsSet_ = false;
    operate_ = "";
    operateIsSet_ = false;
    scalerType_ = "";
    scalerTypeIsSet_ = false;
    sloInfoIsSet_ = false;
    metricsIsSet_ = false;
    roleReplicaIsSet_ = false;
}

HraRuleUpdateRequest::~HraRuleUpdateRequest() = default;

void HraRuleUpdateRequest::validate()
{
}

web::json::value HraRuleUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(operateIsSet_) {
        val[utility::conversions::to_string_t("operate")] = ModelBase::toJson(operate_);
    }
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
bool HraRuleUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperate(refVal);
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


std::string HraRuleUpdateRequest::getId() const
{
    return id_;
}

void HraRuleUpdateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HraRuleUpdateRequest::idIsSet() const
{
    return idIsSet_;
}

void HraRuleUpdateRequest::unsetid()
{
    idIsSet_ = false;
}

std::string HraRuleUpdateRequest::getOperate() const
{
    return operate_;
}

void HraRuleUpdateRequest::setOperate(const std::string& value)
{
    operate_ = value;
    operateIsSet_ = true;
}

bool HraRuleUpdateRequest::operateIsSet() const
{
    return operateIsSet_;
}

void HraRuleUpdateRequest::unsetoperate()
{
    operateIsSet_ = false;
}

std::string HraRuleUpdateRequest::getScalerType() const
{
    return scalerType_;
}

void HraRuleUpdateRequest::setScalerType(const std::string& value)
{
    scalerType_ = value;
    scalerTypeIsSet_ = true;
}

bool HraRuleUpdateRequest::scalerTypeIsSet() const
{
    return scalerTypeIsSet_;
}

void HraRuleUpdateRequest::unsetscalerType()
{
    scalerTypeIsSet_ = false;
}

std::vector<SloInfo>& HraRuleUpdateRequest::getSloInfo()
{
    return sloInfo_;
}

void HraRuleUpdateRequest::setSloInfo(const std::vector<SloInfo>& value)
{
    sloInfo_ = value;
    sloInfoIsSet_ = true;
}

bool HraRuleUpdateRequest::sloInfoIsSet() const
{
    return sloInfoIsSet_;
}

void HraRuleUpdateRequest::unsetsloInfo()
{
    sloInfoIsSet_ = false;
}

std::vector<Metrics>& HraRuleUpdateRequest::getMetrics()
{
    return metrics_;
}

void HraRuleUpdateRequest::setMetrics(const std::vector<Metrics>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool HraRuleUpdateRequest::metricsIsSet() const
{
    return metricsIsSet_;
}

void HraRuleUpdateRequest::unsetmetrics()
{
    metricsIsSet_ = false;
}

std::vector<RoleReplica>& HraRuleUpdateRequest::getRoleReplica()
{
    return roleReplica_;
}

void HraRuleUpdateRequest::setRoleReplica(const std::vector<RoleReplica>& value)
{
    roleReplica_ = value;
    roleReplicaIsSet_ = true;
}

bool HraRuleUpdateRequest::roleReplicaIsSet() const
{
    return roleReplicaIsSet_;
}

void HraRuleUpdateRequest::unsetroleReplica()
{
    roleReplicaIsSet_ = false;
}

}
}
}
}
}



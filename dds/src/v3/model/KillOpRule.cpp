

#include "huaweicloud/dds/v3/model/KillOpRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




KillOpRule::KillOpRule()
{
    id_ = "";
    idIsSet_ = false;
    operationTypes_ = "";
    operationTypesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    namespaces_ = "";
    namespacesIsSet_ = false;
    clientIps_ = "";
    clientIpsIsSet_ = false;
    planSummary_ = "";
    planSummaryIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    secsRunning_ = 0;
    secsRunningIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
}

KillOpRule::~KillOpRule() = default;

void KillOpRule::validate()
{
}

web::json::value KillOpRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(operationTypesIsSet_) {
        val[utility::conversions::to_string_t("operation_types")] = ModelBase::toJson(operationTypes_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(namespacesIsSet_) {
        val[utility::conversions::to_string_t("namespaces")] = ModelBase::toJson(namespaces_);
    }
    if(clientIpsIsSet_) {
        val[utility::conversions::to_string_t("client_ips")] = ModelBase::toJson(clientIps_);
    }
    if(planSummaryIsSet_) {
        val[utility::conversions::to_string_t("plan_summary")] = ModelBase::toJson(planSummary_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(secsRunningIsSet_) {
        val[utility::conversions::to_string_t("secs_running")] = ModelBase::toJson(secsRunning_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }

    return val;
}
bool KillOpRule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationTypes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("namespaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespaces"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secs_running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secs_running"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecsRunning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    return ok;
}


std::string KillOpRule::getId() const
{
    return id_;
}

void KillOpRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool KillOpRule::idIsSet() const
{
    return idIsSet_;
}

void KillOpRule::unsetid()
{
    idIsSet_ = false;
}

std::string KillOpRule::getOperationTypes() const
{
    return operationTypes_;
}

void KillOpRule::setOperationTypes(const std::string& value)
{
    operationTypes_ = value;
    operationTypesIsSet_ = true;
}

bool KillOpRule::operationTypesIsSet() const
{
    return operationTypesIsSet_;
}

void KillOpRule::unsetoperationTypes()
{
    operationTypesIsSet_ = false;
}

std::string KillOpRule::getStatus() const
{
    return status_;
}

void KillOpRule::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool KillOpRule::statusIsSet() const
{
    return statusIsSet_;
}

void KillOpRule::unsetstatus()
{
    statusIsSet_ = false;
}

std::string KillOpRule::getNamespaces() const
{
    return namespaces_;
}

void KillOpRule::setNamespaces(const std::string& value)
{
    namespaces_ = value;
    namespacesIsSet_ = true;
}

bool KillOpRule::namespacesIsSet() const
{
    return namespacesIsSet_;
}

void KillOpRule::unsetnamespaces()
{
    namespacesIsSet_ = false;
}

std::string KillOpRule::getClientIps() const
{
    return clientIps_;
}

void KillOpRule::setClientIps(const std::string& value)
{
    clientIps_ = value;
    clientIpsIsSet_ = true;
}

bool KillOpRule::clientIpsIsSet() const
{
    return clientIpsIsSet_;
}

void KillOpRule::unsetclientIps()
{
    clientIpsIsSet_ = false;
}

std::string KillOpRule::getPlanSummary() const
{
    return planSummary_;
}

void KillOpRule::setPlanSummary(const std::string& value)
{
    planSummary_ = value;
    planSummaryIsSet_ = true;
}

bool KillOpRule::planSummaryIsSet() const
{
    return planSummaryIsSet_;
}

void KillOpRule::unsetplanSummary()
{
    planSummaryIsSet_ = false;
}

int32_t KillOpRule::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void KillOpRule::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool KillOpRule::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void KillOpRule::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int32_t KillOpRule::getSecsRunning() const
{
    return secsRunning_;
}

void KillOpRule::setSecsRunning(int32_t value)
{
    secsRunning_ = value;
    secsRunningIsSet_ = true;
}

bool KillOpRule::secsRunningIsSet() const
{
    return secsRunningIsSet_;
}

void KillOpRule::unsetsecsRunning()
{
    secsRunningIsSet_ = false;
}

std::string KillOpRule::getNodeType() const
{
    return nodeType_;
}

void KillOpRule::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool KillOpRule::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void KillOpRule::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

}
}
}
}
}



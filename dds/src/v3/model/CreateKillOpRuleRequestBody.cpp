

#include "huaweicloud/dds/v3/model/CreateKillOpRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateKillOpRuleRequestBody::CreateKillOpRuleRequestBody()
{
    operationTypesIsSet_ = false;
    namespacesIsSet_ = false;
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

CreateKillOpRuleRequestBody::~CreateKillOpRuleRequestBody() = default;

void CreateKillOpRuleRequestBody::validate()
{
}

web::json::value CreateKillOpRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationTypesIsSet_) {
        val[utility::conversions::to_string_t("operation_types")] = ModelBase::toJson(operationTypes_);
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
bool CreateKillOpRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespaces"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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


std::vector<std::string>& CreateKillOpRuleRequestBody::getOperationTypes()
{
    return operationTypes_;
}

void CreateKillOpRuleRequestBody::setOperationTypes(const std::vector<std::string>& value)
{
    operationTypes_ = value;
    operationTypesIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::operationTypesIsSet() const
{
    return operationTypesIsSet_;
}

void CreateKillOpRuleRequestBody::unsetoperationTypes()
{
    operationTypesIsSet_ = false;
}

std::vector<std::string>& CreateKillOpRuleRequestBody::getNamespaces()
{
    return namespaces_;
}

void CreateKillOpRuleRequestBody::setNamespaces(const std::vector<std::string>& value)
{
    namespaces_ = value;
    namespacesIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::namespacesIsSet() const
{
    return namespacesIsSet_;
}

void CreateKillOpRuleRequestBody::unsetnamespaces()
{
    namespacesIsSet_ = false;
}

std::vector<std::string>& CreateKillOpRuleRequestBody::getClientIps()
{
    return clientIps_;
}

void CreateKillOpRuleRequestBody::setClientIps(const std::vector<std::string>& value)
{
    clientIps_ = value;
    clientIpsIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::clientIpsIsSet() const
{
    return clientIpsIsSet_;
}

void CreateKillOpRuleRequestBody::unsetclientIps()
{
    clientIpsIsSet_ = false;
}

std::string CreateKillOpRuleRequestBody::getPlanSummary() const
{
    return planSummary_;
}

void CreateKillOpRuleRequestBody::setPlanSummary(const std::string& value)
{
    planSummary_ = value;
    planSummaryIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::planSummaryIsSet() const
{
    return planSummaryIsSet_;
}

void CreateKillOpRuleRequestBody::unsetplanSummary()
{
    planSummaryIsSet_ = false;
}

int32_t CreateKillOpRuleRequestBody::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void CreateKillOpRuleRequestBody::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void CreateKillOpRuleRequestBody::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

int32_t CreateKillOpRuleRequestBody::getSecsRunning() const
{
    return secsRunning_;
}

void CreateKillOpRuleRequestBody::setSecsRunning(int32_t value)
{
    secsRunning_ = value;
    secsRunningIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::secsRunningIsSet() const
{
    return secsRunningIsSet_;
}

void CreateKillOpRuleRequestBody::unsetsecsRunning()
{
    secsRunningIsSet_ = false;
}

std::string CreateKillOpRuleRequestBody::getNodeType() const
{
    return nodeType_;
}

void CreateKillOpRuleRequestBody::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool CreateKillOpRuleRequestBody::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void CreateKillOpRuleRequestBody::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

}
}
}
}
}



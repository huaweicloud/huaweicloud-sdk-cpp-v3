

#include "huaweicloud/dds/v3/model/ShowKillOpRuleRuleListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowKillOpRuleRuleListRequest::ShowKillOpRuleRuleListRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    operationTypes_ = "";
    operationTypesIsSet_ = false;
    namespaces_ = "";
    namespacesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    planSummary_ = "";
    planSummaryIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowKillOpRuleRuleListRequest::~ShowKillOpRuleRuleListRequest() = default;

void ShowKillOpRuleRuleListRequest::validate()
{
}

web::json::value ShowKillOpRuleRuleListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(operationTypesIsSet_) {
        val[utility::conversions::to_string_t("operation_types")] = ModelBase::toJson(operationTypes_);
    }
    if(namespacesIsSet_) {
        val[utility::conversions::to_string_t("namespaces")] = ModelBase::toJson(namespaces_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(planSummaryIsSet_) {
        val[utility::conversions::to_string_t("plan_summary")] = ModelBase::toJson(planSummary_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowKillOpRuleRuleListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("namespaces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespaces"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaces(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowKillOpRuleRuleListRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowKillOpRuleRuleListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowKillOpRuleRuleListRequest::getOperationTypes() const
{
    return operationTypes_;
}

void ShowKillOpRuleRuleListRequest::setOperationTypes(const std::string& value)
{
    operationTypes_ = value;
    operationTypesIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::operationTypesIsSet() const
{
    return operationTypesIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetoperationTypes()
{
    operationTypesIsSet_ = false;
}

std::string ShowKillOpRuleRuleListRequest::getNamespaces() const
{
    return namespaces_;
}

void ShowKillOpRuleRuleListRequest::setNamespaces(const std::string& value)
{
    namespaces_ = value;
    namespacesIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::namespacesIsSet() const
{
    return namespacesIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetnamespaces()
{
    namespacesIsSet_ = false;
}

std::string ShowKillOpRuleRuleListRequest::getStatus() const
{
    return status_;
}

void ShowKillOpRuleRuleListRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowKillOpRuleRuleListRequest::getPlanSummary() const
{
    return planSummary_;
}

void ShowKillOpRuleRuleListRequest::setPlanSummary(const std::string& value)
{
    planSummary_ = value;
    planSummaryIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::planSummaryIsSet() const
{
    return planSummaryIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetplanSummary()
{
    planSummaryIsSet_ = false;
}

int32_t ShowKillOpRuleRuleListRequest::getOffset() const
{
    return offset_;
}

void ShowKillOpRuleRuleListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowKillOpRuleRuleListRequest::getLimit() const
{
    return limit_;
}

void ShowKillOpRuleRuleListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowKillOpRuleRuleListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowKillOpRuleRuleListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



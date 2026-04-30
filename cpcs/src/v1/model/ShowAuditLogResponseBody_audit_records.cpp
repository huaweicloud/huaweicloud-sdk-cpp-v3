

#include "huaweicloud/cpcs/v1/model/ShowAuditLogResponseBody_audit_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAuditLogResponseBody_audit_records::ShowAuditLogResponseBody_audit_records()
{
    id_ = "";
    idIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    time_ = 0L;
    timeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    failureMessage_ = "";
    failureMessageIsSet_ = false;
    verification_ = "";
    verificationIsSet_ = false;
}

ShowAuditLogResponseBody_audit_records::~ShowAuditLogResponseBody_audit_records() = default;

void ShowAuditLogResponseBody_audit_records::validate()
{
}

web::json::value ShowAuditLogResponseBody_audit_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(failureMessageIsSet_) {
        val[utility::conversions::to_string_t("failure_message")] = ModelBase::toJson(failureMessage_);
    }
    if(verificationIsSet_) {
        val[utility::conversions::to_string_t("verification")] = ModelBase::toJson(verification_);
    }

    return val;
}
bool ShowAuditLogResponseBody_audit_records::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("failure_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerification(refVal);
        }
    }
    return ok;
}


std::string ShowAuditLogResponseBody_audit_records::getId() const
{
    return id_;
}

void ShowAuditLogResponseBody_audit_records::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::idIsSet() const
{
    return idIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getTenantId() const
{
    return tenantId_;
}

void ShowAuditLogResponseBody_audit_records::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getClusterId() const
{
    return clusterId_;
}

void ShowAuditLogResponseBody_audit_records::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getClusterType() const
{
    return clusterType_;
}

void ShowAuditLogResponseBody_audit_records::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getOperation() const
{
    return operation_;
}

void ShowAuditLogResponseBody_audit_records::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::operationIsSet() const
{
    return operationIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetoperation()
{
    operationIsSet_ = false;
}

int64_t ShowAuditLogResponseBody_audit_records::getTime() const
{
    return time_;
}

void ShowAuditLogResponseBody_audit_records::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::timeIsSet() const
{
    return timeIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsettime()
{
    timeIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getStatus() const
{
    return status_;
}

void ShowAuditLogResponseBody_audit_records::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getFailureMessage() const
{
    return failureMessage_;
}

void ShowAuditLogResponseBody_audit_records::setFailureMessage(const std::string& value)
{
    failureMessage_ = value;
    failureMessageIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::failureMessageIsSet() const
{
    return failureMessageIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetfailureMessage()
{
    failureMessageIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getVerification() const
{
    return verification_;
}

void ShowAuditLogResponseBody_audit_records::setVerification(const std::string& value)
{
    verification_ = value;
    verificationIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::verificationIsSet() const
{
    return verificationIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetverification()
{
    verificationIsSet_ = false;
}

}
}
}
}
}



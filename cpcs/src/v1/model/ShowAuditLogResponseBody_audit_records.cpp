

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
    operateStatus_ = 0;
    operateStatusIsSet_ = false;
    operateMessage_ = "";
    operateMessageIsSet_ = false;
    auditStatus_ = 0;
    auditStatusIsSet_ = false;
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
    if(operateStatusIsSet_) {
        val[utility::conversions::to_string_t("operate_status")] = ModelBase::toJson(operateStatus_);
    }
    if(operateMessageIsSet_) {
        val[utility::conversions::to_string_t("operate_message")] = ModelBase::toJson(operateMessage_);
    }
    if(auditStatusIsSet_) {
        val[utility::conversions::to_string_t("audit_status")] = ModelBase::toJson(auditStatus_);
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
    if(val.has_field(utility::conversions::to_string_t("operate_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditStatus(refVal);
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

int32_t ShowAuditLogResponseBody_audit_records::getOperateStatus() const
{
    return operateStatus_;
}

void ShowAuditLogResponseBody_audit_records::setOperateStatus(int32_t value)
{
    operateStatus_ = value;
    operateStatusIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::operateStatusIsSet() const
{
    return operateStatusIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetoperateStatus()
{
    operateStatusIsSet_ = false;
}

std::string ShowAuditLogResponseBody_audit_records::getOperateMessage() const
{
    return operateMessage_;
}

void ShowAuditLogResponseBody_audit_records::setOperateMessage(const std::string& value)
{
    operateMessage_ = value;
    operateMessageIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::operateMessageIsSet() const
{
    return operateMessageIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetoperateMessage()
{
    operateMessageIsSet_ = false;
}

int32_t ShowAuditLogResponseBody_audit_records::getAuditStatus() const
{
    return auditStatus_;
}

void ShowAuditLogResponseBody_audit_records::setAuditStatus(int32_t value)
{
    auditStatus_ = value;
    auditStatusIsSet_ = true;
}

bool ShowAuditLogResponseBody_audit_records::auditStatusIsSet() const
{
    return auditStatusIsSet_;
}

void ShowAuditLogResponseBody_audit_records::unsetauditStatus()
{
    auditStatusIsSet_ = false;
}

}
}
}
}
}



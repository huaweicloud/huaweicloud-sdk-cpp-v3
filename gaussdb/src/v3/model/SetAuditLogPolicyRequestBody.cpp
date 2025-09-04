

#include "huaweicloud/gaussdb/v3/model/SetAuditLogPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetAuditLogPolicyRequestBody::SetAuditLogPolicyRequestBody()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    reserveAuditLogs_ = false;
    reserveAuditLogsIsSet_ = false;
    auditTypesIsSet_ = false;
}

SetAuditLogPolicyRequestBody::~SetAuditLogPolicyRequestBody() = default;

void SetAuditLogPolicyRequestBody::validate()
{
}

web::json::value SetAuditLogPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(reserveAuditLogsIsSet_) {
        val[utility::conversions::to_string_t("reserve_audit_logs")] = ModelBase::toJson(reserveAuditLogs_);
    }
    if(auditTypesIsSet_) {
        val[utility::conversions::to_string_t("audit_types")] = ModelBase::toJson(auditTypes_);
    }

    return val;
}
bool SetAuditLogPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_audit_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_audit_logs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveAuditLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditTypes(refVal);
        }
    }
    return ok;
}


int32_t SetAuditLogPolicyRequestBody::getKeepDays() const
{
    return keepDays_;
}

void SetAuditLogPolicyRequestBody::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SetAuditLogPolicyRequestBody::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SetAuditLogPolicyRequestBody::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

bool SetAuditLogPolicyRequestBody::isReserveAuditLogs() const
{
    return reserveAuditLogs_;
}

void SetAuditLogPolicyRequestBody::setReserveAuditLogs(bool value)
{
    reserveAuditLogs_ = value;
    reserveAuditLogsIsSet_ = true;
}

bool SetAuditLogPolicyRequestBody::reserveAuditLogsIsSet() const
{
    return reserveAuditLogsIsSet_;
}

void SetAuditLogPolicyRequestBody::unsetreserveAuditLogs()
{
    reserveAuditLogsIsSet_ = false;
}

std::vector<std::string>& SetAuditLogPolicyRequestBody::getAuditTypes()
{
    return auditTypes_;
}

void SetAuditLogPolicyRequestBody::setAuditTypes(const std::vector<std::string>& value)
{
    auditTypes_ = value;
    auditTypesIsSet_ = true;
}

bool SetAuditLogPolicyRequestBody::auditTypesIsSet() const
{
    return auditTypesIsSet_;
}

void SetAuditLogPolicyRequestBody::unsetauditTypes()
{
    auditTypesIsSet_ = false;
}

}
}
}
}
}



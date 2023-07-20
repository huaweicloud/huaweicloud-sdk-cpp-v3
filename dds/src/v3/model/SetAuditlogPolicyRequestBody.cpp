

#include "huaweicloud/dds/v3/model/SetAuditlogPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetAuditlogPolicyRequestBody::SetAuditlogPolicyRequestBody()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    reserveAuditlogs_ = "";
    reserveAuditlogsIsSet_ = false;
    auditScope_ = "";
    auditScopeIsSet_ = false;
    auditTypesIsSet_ = false;
}

SetAuditlogPolicyRequestBody::~SetAuditlogPolicyRequestBody() = default;

void SetAuditlogPolicyRequestBody::validate()
{
}

web::json::value SetAuditlogPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(reserveAuditlogsIsSet_) {
        val[utility::conversions::to_string_t("reserve_auditlogs")] = ModelBase::toJson(reserveAuditlogs_);
    }
    if(auditScopeIsSet_) {
        val[utility::conversions::to_string_t("audit_scope")] = ModelBase::toJson(auditScope_);
    }
    if(auditTypesIsSet_) {
        val[utility::conversions::to_string_t("audit_types")] = ModelBase::toJson(auditTypes_);
    }

    return val;
}

bool SetAuditlogPolicyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reserve_auditlogs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_auditlogs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveAuditlogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditScope(refVal);
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

int32_t SetAuditlogPolicyRequestBody::getKeepDays() const
{
    return keepDays_;
}

void SetAuditlogPolicyRequestBody::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string SetAuditlogPolicyRequestBody::getReserveAuditlogs() const
{
    return reserveAuditlogs_;
}

void SetAuditlogPolicyRequestBody::setReserveAuditlogs(const std::string& value)
{
    reserveAuditlogs_ = value;
    reserveAuditlogsIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::reserveAuditlogsIsSet() const
{
    return reserveAuditlogsIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetreserveAuditlogs()
{
    reserveAuditlogsIsSet_ = false;
}

std::string SetAuditlogPolicyRequestBody::getAuditScope() const
{
    return auditScope_;
}

void SetAuditlogPolicyRequestBody::setAuditScope(const std::string& value)
{
    auditScope_ = value;
    auditScopeIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::auditScopeIsSet() const
{
    return auditScopeIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetauditScope()
{
    auditScopeIsSet_ = false;
}

std::vector<std::string>& SetAuditlogPolicyRequestBody::getAuditTypes()
{
    return auditTypes_;
}

void SetAuditlogPolicyRequestBody::setAuditTypes(const std::vector<std::string>& value)
{
    auditTypes_ = value;
    auditTypesIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::auditTypesIsSet() const
{
    return auditTypesIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetauditTypes()
{
    auditTypesIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/dds/v3/model/ShowAuditlogPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowAuditlogPolicyResponse::ShowAuditlogPolicyResponse()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    auditScope_ = "";
    auditScopeIsSet_ = false;
    auditTypesIsSet_ = false;
}

ShowAuditlogPolicyResponse::~ShowAuditlogPolicyResponse() = default;

void ShowAuditlogPolicyResponse::validate()
{
}

web::json::value ShowAuditlogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(auditScopeIsSet_) {
        val[utility::conversions::to_string_t("audit_scope")] = ModelBase::toJson(auditScope_);
    }
    if(auditTypesIsSet_) {
        val[utility::conversions::to_string_t("audit_types")] = ModelBase::toJson(auditTypes_);
    }

    return val;
}

bool ShowAuditlogPolicyResponse::fromJson(const web::json::value& val)
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

int32_t ShowAuditlogPolicyResponse::getKeepDays() const
{
    return keepDays_;
}

void ShowAuditlogPolicyResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowAuditlogPolicyResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowAuditlogPolicyResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string ShowAuditlogPolicyResponse::getAuditScope() const
{
    return auditScope_;
}

void ShowAuditlogPolicyResponse::setAuditScope(const std::string& value)
{
    auditScope_ = value;
    auditScopeIsSet_ = true;
}

bool ShowAuditlogPolicyResponse::auditScopeIsSet() const
{
    return auditScopeIsSet_;
}

void ShowAuditlogPolicyResponse::unsetauditScope()
{
    auditScopeIsSet_ = false;
}

std::vector<std::string>& ShowAuditlogPolicyResponse::getAuditTypes()
{
    return auditTypes_;
}

void ShowAuditlogPolicyResponse::setAuditTypes(const std::vector<std::string>& value)
{
    auditTypes_ = value;
    auditTypesIsSet_ = true;
}

bool ShowAuditlogPolicyResponse::auditTypesIsSet() const
{
    return auditTypesIsSet_;
}

void ShowAuditlogPolicyResponse::unsetauditTypes()
{
    auditTypesIsSet_ = false;
}

}
}
}
}
}



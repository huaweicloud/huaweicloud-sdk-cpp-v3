

#include "huaweicloud/rds/v3/model/ShowAuditlogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAuditlogPolicyResponse::ShowAuditlogPolicyResponse()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    auditTypesIsSet_ = false;
    allAuditLogAction_ = "";
    allAuditLogActionIsSet_ = false;
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
    if(auditTypesIsSet_) {
        val[utility::conversions::to_string_t("audit_types")] = ModelBase::toJson(auditTypes_);
    }
    if(allAuditLogActionIsSet_) {
        val[utility::conversions::to_string_t("all_audit_log_action")] = ModelBase::toJson(allAuditLogAction_);
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
    if(val.has_field(utility::conversions::to_string_t("audit_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_audit_log_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_audit_log_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllAuditLogAction(refVal);
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

std::string ShowAuditlogPolicyResponse::getAllAuditLogAction() const
{
    return allAuditLogAction_;
}

void ShowAuditlogPolicyResponse::setAllAuditLogAction(const std::string& value)
{
    allAuditLogAction_ = value;
    allAuditLogActionIsSet_ = true;
}

bool ShowAuditlogPolicyResponse::allAuditLogActionIsSet() const
{
    return allAuditLogActionIsSet_;
}

void ShowAuditlogPolicyResponse::unsetallAuditLogAction()
{
    allAuditLogActionIsSet_ = false;
}

}
}
}
}
}



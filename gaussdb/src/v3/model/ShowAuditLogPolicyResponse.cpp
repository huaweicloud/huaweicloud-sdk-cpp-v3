

#include "huaweicloud/gaussdb/v3/model/ShowAuditLogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAuditLogPolicyResponse::ShowAuditLogPolicyResponse()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    auditTypesIsSet_ = false;
    allAuditLogAction_ = "";
    allAuditLogActionIsSet_ = false;
}

ShowAuditLogPolicyResponse::~ShowAuditLogPolicyResponse() = default;

void ShowAuditLogPolicyResponse::validate()
{
}

web::json::value ShowAuditLogPolicyResponse::toJson() const
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
bool ShowAuditLogPolicyResponse::fromJson(const web::json::value& val)
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


int32_t ShowAuditLogPolicyResponse::getKeepDays() const
{
    return keepDays_;
}

void ShowAuditLogPolicyResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowAuditLogPolicyResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowAuditLogPolicyResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::vector<std::string>& ShowAuditLogPolicyResponse::getAuditTypes()
{
    return auditTypes_;
}

void ShowAuditLogPolicyResponse::setAuditTypes(const std::vector<std::string>& value)
{
    auditTypes_ = value;
    auditTypesIsSet_ = true;
}

bool ShowAuditLogPolicyResponse::auditTypesIsSet() const
{
    return auditTypesIsSet_;
}

void ShowAuditLogPolicyResponse::unsetauditTypes()
{
    auditTypesIsSet_ = false;
}

std::string ShowAuditLogPolicyResponse::getAllAuditLogAction() const
{
    return allAuditLogAction_;
}

void ShowAuditLogPolicyResponse::setAllAuditLogAction(const std::string& value)
{
    allAuditLogAction_ = value;
    allAuditLogActionIsSet_ = true;
}

bool ShowAuditLogPolicyResponse::allAuditLogActionIsSet() const
{
    return allAuditLogActionIsSet_;
}

void ShowAuditLogPolicyResponse::unsetallAuditLogAction()
{
    allAuditLogActionIsSet_ = false;
}

}
}
}
}
}



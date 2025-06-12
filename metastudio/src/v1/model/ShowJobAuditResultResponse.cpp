

#include "huaweicloud/metastudio/v1/model/ShowJobAuditResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobAuditResultResponse::ShowJobAuditResultResponse()
{
    systemAuditResultIsSet_ = false;
    adminAuditResultIsSet_ = false;
}

ShowJobAuditResultResponse::~ShowJobAuditResultResponse() = default;

void ShowJobAuditResultResponse::validate()
{
}

web::json::value ShowJobAuditResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemAuditResultIsSet_) {
        val[utility::conversions::to_string_t("system_audit_result")] = ModelBase::toJson(systemAuditResult_);
    }
    if(adminAuditResultIsSet_) {
        val[utility::conversions::to_string_t("admin_audit_result")] = ModelBase::toJson(adminAuditResult_);
    }

    return val;
}
bool ShowJobAuditResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("system_audit_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_audit_result"));
        if(!fieldValue.is_null())
        {
            AuditResult_system_audit_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemAuditResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_audit_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_audit_result"));
        if(!fieldValue.is_null())
        {
            AuditResult_admin_audit_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminAuditResult(refVal);
        }
    }
    return ok;
}


AuditResult_system_audit_result ShowJobAuditResultResponse::getSystemAuditResult() const
{
    return systemAuditResult_;
}

void ShowJobAuditResultResponse::setSystemAuditResult(const AuditResult_system_audit_result& value)
{
    systemAuditResult_ = value;
    systemAuditResultIsSet_ = true;
}

bool ShowJobAuditResultResponse::systemAuditResultIsSet() const
{
    return systemAuditResultIsSet_;
}

void ShowJobAuditResultResponse::unsetsystemAuditResult()
{
    systemAuditResultIsSet_ = false;
}

AuditResult_admin_audit_result ShowJobAuditResultResponse::getAdminAuditResult() const
{
    return adminAuditResult_;
}

void ShowJobAuditResultResponse::setAdminAuditResult(const AuditResult_admin_audit_result& value)
{
    adminAuditResult_ = value;
    adminAuditResultIsSet_ = true;
}

bool ShowJobAuditResultResponse::adminAuditResultIsSet() const
{
    return adminAuditResultIsSet_;
}

void ShowJobAuditResultResponse::unsetadminAuditResult()
{
    adminAuditResultIsSet_ = false;
}

}
}
}
}
}



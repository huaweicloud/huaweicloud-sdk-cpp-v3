

#include "huaweicloud/metastudio/v1/model/AuditResult_system_audit_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AuditResult_system_audit_result::AuditResult_system_audit_result()
{
    auditTime_ = 0L;
    auditTimeIsSet_ = false;
    errorsIsSet_ = false;
}

AuditResult_system_audit_result::~AuditResult_system_audit_result() = default;

void AuditResult_system_audit_result::validate()
{
}

web::json::value AuditResult_system_audit_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditTimeIsSet_) {
        val[utility::conversions::to_string_t("audit_time")] = ModelBase::toJson(auditTime_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }

    return val;
}
bool AuditResult_system_audit_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditResult_system_audit_result_errors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    return ok;
}


int64_t AuditResult_system_audit_result::getAuditTime() const
{
    return auditTime_;
}

void AuditResult_system_audit_result::setAuditTime(int64_t value)
{
    auditTime_ = value;
    auditTimeIsSet_ = true;
}

bool AuditResult_system_audit_result::auditTimeIsSet() const
{
    return auditTimeIsSet_;
}

void AuditResult_system_audit_result::unsetauditTime()
{
    auditTimeIsSet_ = false;
}

std::vector<AuditResult_system_audit_result_errors>& AuditResult_system_audit_result::getErrors()
{
    return errors_;
}

void AuditResult_system_audit_result::setErrors(const std::vector<AuditResult_system_audit_result_errors>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool AuditResult_system_audit_result::errorsIsSet() const
{
    return errorsIsSet_;
}

void AuditResult_system_audit_result::unseterrors()
{
    errorsIsSet_ = false;
}

}
}
}
}
}



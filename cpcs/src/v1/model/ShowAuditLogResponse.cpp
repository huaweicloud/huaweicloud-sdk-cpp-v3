

#include "huaweicloud/cpcs/v1/model/ShowAuditLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAuditLogResponse::ShowAuditLogResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    auditRecordsIsSet_ = false;
}

ShowAuditLogResponse::~ShowAuditLogResponse() = default;

void ShowAuditLogResponse::validate()
{
}

web::json::value ShowAuditLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(auditRecordsIsSet_) {
        val[utility::conversions::to_string_t("audit_records")] = ModelBase::toJson(auditRecords_);
    }

    return val;
}
bool ShowAuditLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowAuditLogResponseBody_audit_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditRecords(refVal);
        }
    }
    return ok;
}


int32_t ShowAuditLogResponse::getTotal() const
{
    return total_;
}

void ShowAuditLogResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowAuditLogResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowAuditLogResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ShowAuditLogResponseBody_audit_records>& ShowAuditLogResponse::getAuditRecords()
{
    return auditRecords_;
}

void ShowAuditLogResponse::setAuditRecords(const std::vector<ShowAuditLogResponseBody_audit_records>& value)
{
    auditRecords_ = value;
    auditRecordsIsSet_ = true;
}

bool ShowAuditLogResponse::auditRecordsIsSet() const
{
    return auditRecordsIsSet_;
}

void ShowAuditLogResponse::unsetauditRecords()
{
    auditRecordsIsSet_ = false;
}

}
}
}
}
}



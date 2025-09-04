

#include "huaweicloud/gaussdb/v3/model/ListAuditLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListAuditLogsResponse::ListAuditLogsResponse()
{
    auditLogsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListAuditLogsResponse::~ListAuditLogsResponse() = default;

void ListAuditLogsResponse::validate()
{
}

web::json::value ListAuditLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditLogsIsSet_) {
        val[utility::conversions::to_string_t("audit_logs")] = ModelBase::toJson(auditLogs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListAuditLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<AuditLogDetail>& ListAuditLogsResponse::getAuditLogs()
{
    return auditLogs_;
}

void ListAuditLogsResponse::setAuditLogs(const std::vector<AuditLogDetail>& value)
{
    auditLogs_ = value;
    auditLogsIsSet_ = true;
}

bool ListAuditLogsResponse::auditLogsIsSet() const
{
    return auditLogsIsSet_;
}

void ListAuditLogsResponse::unsetauditLogs()
{
    auditLogsIsSet_ = false;
}

int32_t ListAuditLogsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAuditLogsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAuditLogsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAuditLogsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



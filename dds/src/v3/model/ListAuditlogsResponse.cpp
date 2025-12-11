

#include "huaweicloud/dds/v3/model/ListAuditlogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAuditlogsResponse::ListAuditlogsResponse()
{
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
    totalSize_ = 0L;
    totalSizeIsSet_ = false;
    auditLogsIsSet_ = false;
}

ListAuditlogsResponse::~ListAuditlogsResponse() = default;

void ListAuditlogsResponse::validate()
{
}

web::json::value ListAuditlogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }
    if(totalSizeIsSet_) {
        val[utility::conversions::to_string_t("total_size")] = ModelBase::toJson(totalSize_);
    }
    if(auditLogsIsSet_) {
        val[utility::conversions::to_string_t("audit_logs")] = ModelBase::toJson(auditLogs_);
    }

    return val;
}
bool ListAuditlogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAuditlogsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditLogs(refVal);
        }
    }
    return ok;
}


int32_t ListAuditlogsResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListAuditlogsResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListAuditlogsResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListAuditlogsResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

int64_t ListAuditlogsResponse::getTotalSize() const
{
    return totalSize_;
}

void ListAuditlogsResponse::setTotalSize(int64_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool ListAuditlogsResponse::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void ListAuditlogsResponse::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::vector<ListAuditlogsResult>& ListAuditlogsResponse::getAuditLogs()
{
    return auditLogs_;
}

void ListAuditlogsResponse::setAuditLogs(const std::vector<ListAuditlogsResult>& value)
{
    auditLogs_ = value;
    auditLogsIsSet_ = true;
}

bool ListAuditlogsResponse::auditLogsIsSet() const
{
    return auditLogsIsSet_;
}

void ListAuditlogsResponse::unsetauditLogs()
{
    auditLogsIsSet_ = false;
}

}
}
}
}
}



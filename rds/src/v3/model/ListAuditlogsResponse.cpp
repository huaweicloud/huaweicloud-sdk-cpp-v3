

#include "huaweicloud/rds/v3/model/ListAuditlogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuditlogsResponse::ListAuditlogsResponse()
{
    auditlogsIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
}

ListAuditlogsResponse::~ListAuditlogsResponse() = default;

void ListAuditlogsResponse::validate()
{
}

web::json::value ListAuditlogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditlogsIsSet_) {
        val[utility::conversions::to_string_t("auditlogs")] = ModelBase::toJson(auditlogs_);
    }
    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }

    return val;
}
bool ListAuditlogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auditlogs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auditlogs"));
        if(!fieldValue.is_null())
        {
            std::vector<Auditlog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditlogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    return ok;
}


std::vector<Auditlog>& ListAuditlogsResponse::getAuditlogs()
{
    return auditlogs_;
}

void ListAuditlogsResponse::setAuditlogs(const std::vector<Auditlog>& value)
{
    auditlogs_ = value;
    auditlogsIsSet_ = true;
}

bool ListAuditlogsResponse::auditlogsIsSet() const
{
    return auditlogsIsSet_;
}

void ListAuditlogsResponse::unsetauditlogs()
{
    auditlogsIsSet_ = false;
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

}
}
}
}
}





#include "huaweicloud/dbss/v1/model/ListAuditReportsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditReportsResponse::ListAuditReportsResponse()
{
    reportsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListAuditReportsResponse::~ListAuditReportsResponse() = default;

void ListAuditReportsResponse::validate()
{
}

web::json::value ListAuditReportsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reportsIsSet_) {
        val[utility::conversions::to_string_t("reports")] = ModelBase::toJson(reports_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditReportsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reports"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReports(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ReportInfo>& ListAuditReportsResponse::getReports()
{
    return reports_;
}

void ListAuditReportsResponse::setReports(const std::vector<ReportInfo>& value)
{
    reports_ = value;
    reportsIsSet_ = true;
}

bool ListAuditReportsResponse::reportsIsSet() const
{
    return reportsIsSet_;
}

void ListAuditReportsResponse::unsetreports()
{
    reportsIsSet_ = false;
}

int64_t ListAuditReportsResponse::getTotal() const
{
    return total_;
}

void ListAuditReportsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditReportsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditReportsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



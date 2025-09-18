

#include "huaweicloud/projectman/v4/model/ListProjectIssuesRecordsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectIssuesRecordsV4Response::ListProjectIssuesRecordsV4Response()
{
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListProjectIssuesRecordsV4Response::~ListProjectIssuesRecordsV4Response() = default;

void ListProjectIssuesRecordsV4Response::validate()
{
}

web::json::value ListProjectIssuesRecordsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectIssuesRecordsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueAttrHistoryRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<IssueAttrHistoryRecord>& ListProjectIssuesRecordsV4Response::getRecords()
{
    return records_;
}

void ListProjectIssuesRecordsV4Response::setRecords(const std::vector<IssueAttrHistoryRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Response::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListProjectIssuesRecordsV4Response::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListProjectIssuesRecordsV4Response::getTotal() const
{
    return total_;
}

void ListProjectIssuesRecordsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectIssuesRecordsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



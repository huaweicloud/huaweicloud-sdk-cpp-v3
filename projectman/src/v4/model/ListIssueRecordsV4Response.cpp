

#include "huaweicloud/projectman/v4/model/ListIssueRecordsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueRecordsV4Response::ListIssueRecordsV4Response()
{
    id_ = 0;
    idIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListIssueRecordsV4Response::~ListIssueRecordsV4Response() = default;

void ListIssueRecordsV4Response::validate()
{
}

web::json::value ListIssueRecordsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListIssueRecordsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueRecordV4> refVal;
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


int32_t ListIssueRecordsV4Response::getId() const
{
    return id_;
}

void ListIssueRecordsV4Response::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListIssueRecordsV4Response::idIsSet() const
{
    return idIsSet_;
}

void ListIssueRecordsV4Response::unsetid()
{
    idIsSet_ = false;
}

int64_t ListIssueRecordsV4Response::getCreatedTime() const
{
    return createdTime_;
}

void ListIssueRecordsV4Response::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ListIssueRecordsV4Response::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ListIssueRecordsV4Response::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::vector<IssueRecordV4>& ListIssueRecordsV4Response::getRecords()
{
    return records_;
}

void ListIssueRecordsV4Response::setRecords(const std::vector<IssueRecordV4>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListIssueRecordsV4Response::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListIssueRecordsV4Response::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListIssueRecordsV4Response::getTotal() const
{
    return total_;
}

void ListIssueRecordsV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListIssueRecordsV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListIssueRecordsV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



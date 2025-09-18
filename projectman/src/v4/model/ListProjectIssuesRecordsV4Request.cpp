

#include "huaweicloud/projectman/v4/model/ListProjectIssuesRecordsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectIssuesRecordsV4Request::ListProjectIssuesRecordsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    operatedTimeInterval_ = "";
    operatedTimeIntervalIsSet_ = false;
}

ListProjectIssuesRecordsV4Request::~ListProjectIssuesRecordsV4Request() = default;

void ListProjectIssuesRecordsV4Request::validate()
{
}

web::json::value ListProjectIssuesRecordsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(operatedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("operated_time_interval")] = ModelBase::toJson(operatedTimeInterval_);
    }

    return val;
}
bool ListProjectIssuesRecordsV4Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operated_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operated_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatedTimeInterval(refVal);
        }
    }
    return ok;
}


std::string ListProjectIssuesRecordsV4Request::getProjectId() const
{
    return projectId_;
}

void ListProjectIssuesRecordsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectIssuesRecordsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectIssuesRecordsV4Request::getOffset() const
{
    return offset_;
}

void ListProjectIssuesRecordsV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectIssuesRecordsV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectIssuesRecordsV4Request::getLimit() const
{
    return limit_;
}

void ListProjectIssuesRecordsV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectIssuesRecordsV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectIssuesRecordsV4Request::getOperatedTimeInterval() const
{
    return operatedTimeInterval_;
}

void ListProjectIssuesRecordsV4Request::setOperatedTimeInterval(const std::string& value)
{
    operatedTimeInterval_ = value;
    operatedTimeIntervalIsSet_ = true;
}

bool ListProjectIssuesRecordsV4Request::operatedTimeIntervalIsSet() const
{
    return operatedTimeIntervalIsSet_;
}

void ListProjectIssuesRecordsV4Request::unsetoperatedTimeInterval()
{
    operatedTimeIntervalIsSet_ = false;
}

}
}
}
}
}



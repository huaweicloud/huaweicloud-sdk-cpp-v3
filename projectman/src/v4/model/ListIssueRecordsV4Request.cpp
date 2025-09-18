

#include "huaweicloud/projectman/v4/model/ListIssueRecordsV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueRecordsV4Request::ListIssueRecordsV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListIssueRecordsV4Request::~ListIssueRecordsV4Request() = default;

void ListIssueRecordsV4Request::validate()
{
}

web::json::value ListIssueRecordsV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListIssueRecordsV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
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
    return ok;
}


std::string ListIssueRecordsV4Request::getProjectId() const
{
    return projectId_;
}

void ListIssueRecordsV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueRecordsV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueRecordsV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListIssueRecordsV4Request::getIssueId() const
{
    return issueId_;
}

void ListIssueRecordsV4Request::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListIssueRecordsV4Request::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListIssueRecordsV4Request::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t ListIssueRecordsV4Request::getOffset() const
{
    return offset_;
}

void ListIssueRecordsV4Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIssueRecordsV4Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIssueRecordsV4Request::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListIssueRecordsV4Request::getLimit() const
{
    return limit_;
}

void ListIssueRecordsV4Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIssueRecordsV4Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListIssueRecordsV4Request::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



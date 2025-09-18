

#include "huaweicloud/projectman/v4/model/ListAssociatedTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListAssociatedTestCasesRequest::ListAssociatedTestCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListAssociatedTestCasesRequest::~ListAssociatedTestCasesRequest() = default;

void ListAssociatedTestCasesRequest::validate()
{
}

web::json::value ListAssociatedTestCasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListAssociatedTestCasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ListAssociatedTestCasesRequest::getProjectId() const
{
    return projectId_;
}

void ListAssociatedTestCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAssociatedTestCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAssociatedTestCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListAssociatedTestCasesRequest::getIssueId() const
{
    return issueId_;
}

void ListAssociatedTestCasesRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListAssociatedTestCasesRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListAssociatedTestCasesRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t ListAssociatedTestCasesRequest::getLimit() const
{
    return limit_;
}

void ListAssociatedTestCasesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssociatedTestCasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssociatedTestCasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAssociatedTestCasesRequest::getOffset() const
{
    return offset_;
}

void ListAssociatedTestCasesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssociatedTestCasesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssociatedTestCasesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



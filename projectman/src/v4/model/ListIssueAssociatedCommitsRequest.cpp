

#include "huaweicloud/projectman/v4/model/ListIssueAssociatedCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueAssociatedCommitsRequest::ListIssueAssociatedCommitsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = 0;
    issueIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListIssueAssociatedCommitsRequest::~ListIssueAssociatedCommitsRequest() = default;

void ListIssueAssociatedCommitsRequest::validate()
{
}

web::json::value ListIssueAssociatedCommitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListIssueAssociatedCommitsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ListIssueAssociatedCommitsRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueAssociatedCommitsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueAssociatedCommitsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueAssociatedCommitsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListIssueAssociatedCommitsRequest::getIssueId() const
{
    return issueId_;
}

void ListIssueAssociatedCommitsRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListIssueAssociatedCommitsRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListIssueAssociatedCommitsRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ListIssueAssociatedCommitsRequest::getType() const
{
    return type_;
}

void ListIssueAssociatedCommitsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListIssueAssociatedCommitsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListIssueAssociatedCommitsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListIssueAssociatedCommitsRequest::getLimit() const
{
    return limit_;
}

void ListIssueAssociatedCommitsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIssueAssociatedCommitsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIssueAssociatedCommitsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListIssueAssociatedCommitsRequest::getOffset() const
{
    return offset_;
}

void ListIssueAssociatedCommitsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIssueAssociatedCommitsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIssueAssociatedCommitsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



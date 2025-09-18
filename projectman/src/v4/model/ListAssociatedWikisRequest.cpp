

#include "huaweicloud/projectman/v4/model/ListAssociatedWikisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListAssociatedWikisRequest::ListAssociatedWikisRequest()
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

ListAssociatedWikisRequest::~ListAssociatedWikisRequest() = default;

void ListAssociatedWikisRequest::validate()
{
}

web::json::value ListAssociatedWikisRequest::toJson() const
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
bool ListAssociatedWikisRequest::fromJson(const web::json::value& val)
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


std::string ListAssociatedWikisRequest::getProjectId() const
{
    return projectId_;
}

void ListAssociatedWikisRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAssociatedWikisRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAssociatedWikisRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListAssociatedWikisRequest::getIssueId() const
{
    return issueId_;
}

void ListAssociatedWikisRequest::setIssueId(int32_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListAssociatedWikisRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListAssociatedWikisRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

int32_t ListAssociatedWikisRequest::getLimit() const
{
    return limit_;
}

void ListAssociatedWikisRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssociatedWikisRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssociatedWikisRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAssociatedWikisRequest::getOffset() const
{
    return offset_;
}

void ListAssociatedWikisRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssociatedWikisRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssociatedWikisRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}



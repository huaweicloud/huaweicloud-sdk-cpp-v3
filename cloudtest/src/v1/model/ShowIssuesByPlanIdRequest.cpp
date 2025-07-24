

#include "huaweicloud/cloudtest/v1/model/ShowIssuesByPlanIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIssuesByPlanIdRequest::ShowIssuesByPlanIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
}

ShowIssuesByPlanIdRequest::~ShowIssuesByPlanIdRequest() = default;

void ShowIssuesByPlanIdRequest::validate()
{
}

web::json::value ShowIssuesByPlanIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowIssuesByPlanIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowIssuesByPlanIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowIssuesByPlanIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssuesByPlanIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssuesByPlanIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIssuesByPlanIdRequest::getPlanId() const
{
    return planId_;
}

void ShowIssuesByPlanIdRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowIssuesByPlanIdRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowIssuesByPlanIdRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

int64_t ShowIssuesByPlanIdRequest::getOffset() const
{
    return offset_;
}

void ShowIssuesByPlanIdRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowIssuesByPlanIdRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowIssuesByPlanIdRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ShowIssuesByPlanIdRequest::getLimit() const
{
    return limit_;
}

void ShowIssuesByPlanIdRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowIssuesByPlanIdRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowIssuesByPlanIdRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



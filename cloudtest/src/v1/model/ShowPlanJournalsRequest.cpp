

#include "huaweicloud/cloudtest/v1/model/ShowPlanJournalsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlanJournalsRequest::ShowPlanJournalsRequest()
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

ShowPlanJournalsRequest::~ShowPlanJournalsRequest() = default;

void ShowPlanJournalsRequest::validate()
{
}

web::json::value ShowPlanJournalsRequest::toJson() const
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
bool ShowPlanJournalsRequest::fromJson(const web::json::value& val)
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


std::string ShowPlanJournalsRequest::getProjectId() const
{
    return projectId_;
}

void ShowPlanJournalsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPlanJournalsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPlanJournalsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPlanJournalsRequest::getPlanId() const
{
    return planId_;
}

void ShowPlanJournalsRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowPlanJournalsRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowPlanJournalsRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

int64_t ShowPlanJournalsRequest::getOffset() const
{
    return offset_;
}

void ShowPlanJournalsRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowPlanJournalsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowPlanJournalsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ShowPlanJournalsRequest::getLimit() const
{
    return limit_;
}

void ShowPlanJournalsRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowPlanJournalsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowPlanJournalsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



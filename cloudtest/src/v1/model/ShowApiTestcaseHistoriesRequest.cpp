

#include "huaweicloud/cloudtest/v1/model/ShowApiTestcaseHistoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowApiTestcaseHistoriesRequest::ShowApiTestcaseHistoriesRequest()
{
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowApiTestcaseHistoriesRequest::~ShowApiTestcaseHistoriesRequest() = default;

void ShowApiTestcaseHistoriesRequest::validate()
{
}

web::json::value ShowApiTestcaseHistoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowApiTestcaseHistoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowApiTestcaseHistoriesRequest::getTestcaseId() const
{
    return testcaseId_;
}

void ShowApiTestcaseHistoriesRequest::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowApiTestcaseHistoriesRequest::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowApiTestcaseHistoriesRequest::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

int32_t ShowApiTestcaseHistoriesRequest::getOffset() const
{
    return offset_;
}

void ShowApiTestcaseHistoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowApiTestcaseHistoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowApiTestcaseHistoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowApiTestcaseHistoriesRequest::getLimit() const
{
    return limit_;
}

void ShowApiTestcaseHistoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowApiTestcaseHistoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowApiTestcaseHistoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowApiTestcaseHistoriesRequest::getPlanId() const
{
    return planId_;
}

void ShowApiTestcaseHistoriesRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowApiTestcaseHistoriesRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowApiTestcaseHistoriesRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string ShowApiTestcaseHistoriesRequest::getProjectId() const
{
    return projectId_;
}

void ShowApiTestcaseHistoriesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowApiTestcaseHistoriesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowApiTestcaseHistoriesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ShowApiTestcaseHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowApiTestcaseHistoriesResponse::ShowApiTestcaseHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    testcaseName_ = "";
    testcaseNameIsSet_ = false;
    testcaseResultsIsSet_ = false;
}

ShowApiTestcaseHistoriesResponse::~ShowApiTestcaseHistoriesResponse() = default;

void ShowApiTestcaseHistoriesResponse::validate()
{
}

web::json::value ShowApiTestcaseHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(testcaseNameIsSet_) {
        val[utility::conversions::to_string_t("testcase_name")] = ModelBase::toJson(testcaseName_);
    }
    if(testcaseResultsIsSet_) {
        val[utility::conversions::to_string_t("testcase_results")] = ModelBase::toJson(testcaseResults_);
    }

    return val;
}
bool ShowApiTestcaseHistoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_results"));
        if(!fieldValue.is_null())
        {
            std::vector<TestcaseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseResults(refVal);
        }
    }
    return ok;
}


int32_t ShowApiTestcaseHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowApiTestcaseHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowApiTestcaseHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowApiTestcaseHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ShowApiTestcaseHistoriesResponse::getProjectId() const
{
    return projectId_;
}

void ShowApiTestcaseHistoriesResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowApiTestcaseHistoriesResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowApiTestcaseHistoriesResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowApiTestcaseHistoriesResponse::getTestcaseId() const
{
    return testcaseId_;
}

void ShowApiTestcaseHistoriesResponse::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ShowApiTestcaseHistoriesResponse::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ShowApiTestcaseHistoriesResponse::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

std::string ShowApiTestcaseHistoriesResponse::getTestcaseName() const
{
    return testcaseName_;
}

void ShowApiTestcaseHistoriesResponse::setTestcaseName(const std::string& value)
{
    testcaseName_ = value;
    testcaseNameIsSet_ = true;
}

bool ShowApiTestcaseHistoriesResponse::testcaseNameIsSet() const
{
    return testcaseNameIsSet_;
}

void ShowApiTestcaseHistoriesResponse::unsettestcaseName()
{
    testcaseNameIsSet_ = false;
}

std::vector<TestcaseResult>& ShowApiTestcaseHistoriesResponse::getTestcaseResults()
{
    return testcaseResults_;
}

void ShowApiTestcaseHistoriesResponse::setTestcaseResults(const std::vector<TestcaseResult>& value)
{
    testcaseResults_ = value;
    testcaseResultsIsSet_ = true;
}

bool ShowApiTestcaseHistoriesResponse::testcaseResultsIsSet() const
{
    return testcaseResultsIsSet_;
}

void ShowApiTestcaseHistoriesResponse::unsettestcaseResults()
{
    testcaseResultsIsSet_ = false;
}

}
}
}
}
}



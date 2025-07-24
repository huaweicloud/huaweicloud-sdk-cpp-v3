

#include "huaweicloud/cloudtest/v1/model/TestPlanDetail_design_stage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail_design_stage::TestPlanDetail_design_stage()
{
    caseCount_ = 0;
    caseCountIsSet_ = false;
    issueCount_ = 0;
    issueCountIsSet_ = false;
    issueCoveredCount_ = "";
    issueCoveredCountIsSet_ = false;
}

TestPlanDetail_design_stage::~TestPlanDetail_design_stage() = default;

void TestPlanDetail_design_stage::validate()
{
}

web::json::value TestPlanDetail_design_stage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseCountIsSet_) {
        val[utility::conversions::to_string_t("case_count")] = ModelBase::toJson(caseCount_);
    }
    if(issueCountIsSet_) {
        val[utility::conversions::to_string_t("issue_count")] = ModelBase::toJson(issueCount_);
    }
    if(issueCoveredCountIsSet_) {
        val[utility::conversions::to_string_t("issue_covered_count")] = ModelBase::toJson(issueCoveredCount_);
    }

    return val;
}
bool TestPlanDetail_design_stage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_covered_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_covered_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCoveredCount(refVal);
        }
    }
    return ok;
}


int32_t TestPlanDetail_design_stage::getCaseCount() const
{
    return caseCount_;
}

void TestPlanDetail_design_stage::setCaseCount(int32_t value)
{
    caseCount_ = value;
    caseCountIsSet_ = true;
}

bool TestPlanDetail_design_stage::caseCountIsSet() const
{
    return caseCountIsSet_;
}

void TestPlanDetail_design_stage::unsetcaseCount()
{
    caseCountIsSet_ = false;
}

int32_t TestPlanDetail_design_stage::getIssueCount() const
{
    return issueCount_;
}

void TestPlanDetail_design_stage::setIssueCount(int32_t value)
{
    issueCount_ = value;
    issueCountIsSet_ = true;
}

bool TestPlanDetail_design_stage::issueCountIsSet() const
{
    return issueCountIsSet_;
}

void TestPlanDetail_design_stage::unsetissueCount()
{
    issueCountIsSet_ = false;
}

std::string TestPlanDetail_design_stage::getIssueCoveredCount() const
{
    return issueCoveredCount_;
}

void TestPlanDetail_design_stage::setIssueCoveredCount(const std::string& value)
{
    issueCoveredCount_ = value;
    issueCoveredCountIsSet_ = true;
}

bool TestPlanDetail_design_stage::issueCoveredCountIsSet() const
{
    return issueCoveredCountIsSet_;
}

void TestPlanDetail_design_stage::unsetissueCoveredCount()
{
    issueCoveredCountIsSet_ = false;
}

}
}
}
}
}



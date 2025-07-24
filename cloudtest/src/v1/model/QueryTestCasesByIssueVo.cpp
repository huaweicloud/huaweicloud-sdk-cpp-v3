

#include "huaweicloud/cloudtest/v1/model/QueryTestCasesByIssueVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTestCasesByIssueVo::QueryTestCasesByIssueVo()
{
    caseStatusMapIsSet_ = false;
    newCreate_ = 0;
    newCreateIsSet_ = false;
    designing_ = 0;
    designingIsSet_ = false;
    finished_ = 0;
    finishedIsSet_ = false;
    testing_ = 0;
    testingIsSet_ = false;
    testCaseNum_ = 0;
    testCaseNumIsSet_ = false;
    testcasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

QueryTestCasesByIssueVo::~QueryTestCasesByIssueVo() = default;

void QueryTestCasesByIssueVo::validate()
{
}

web::json::value QueryTestCasesByIssueVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseStatusMapIsSet_) {
        val[utility::conversions::to_string_t("case_status_map")] = ModelBase::toJson(caseStatusMap_);
    }
    if(newCreateIsSet_) {
        val[utility::conversions::to_string_t("new_create")] = ModelBase::toJson(newCreate_);
    }
    if(designingIsSet_) {
        val[utility::conversions::to_string_t("designing")] = ModelBase::toJson(designing_);
    }
    if(finishedIsSet_) {
        val[utility::conversions::to_string_t("finished")] = ModelBase::toJson(finished_);
    }
    if(testingIsSet_) {
        val[utility::conversions::to_string_t("testing")] = ModelBase::toJson(testing_);
    }
    if(testCaseNumIsSet_) {
        val[utility::conversions::to_string_t("test_case_num")] = ModelBase::toJson(testCaseNum_);
    }
    if(testcasesIsSet_) {
        val[utility::conversions::to_string_t("testcases")] = ModelBase::toJson(testcases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool QueryTestCasesByIssueVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_status_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_status_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseStatusMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_create"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_create"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewCreate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("designing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("designing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesigning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinished(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTesting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcases"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::map<std::string, int32_t>& QueryTestCasesByIssueVo::getCaseStatusMap()
{
    return caseStatusMap_;
}

void QueryTestCasesByIssueVo::setCaseStatusMap(std::map<std::string, int32_t> value)
{
    caseStatusMap_ = value;
    caseStatusMapIsSet_ = true;
}

bool QueryTestCasesByIssueVo::caseStatusMapIsSet() const
{
    return caseStatusMapIsSet_;
}

void QueryTestCasesByIssueVo::unsetcaseStatusMap()
{
    caseStatusMapIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getNewCreate() const
{
    return newCreate_;
}

void QueryTestCasesByIssueVo::setNewCreate(int32_t value)
{
    newCreate_ = value;
    newCreateIsSet_ = true;
}

bool QueryTestCasesByIssueVo::newCreateIsSet() const
{
    return newCreateIsSet_;
}

void QueryTestCasesByIssueVo::unsetnewCreate()
{
    newCreateIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getDesigning() const
{
    return designing_;
}

void QueryTestCasesByIssueVo::setDesigning(int32_t value)
{
    designing_ = value;
    designingIsSet_ = true;
}

bool QueryTestCasesByIssueVo::designingIsSet() const
{
    return designingIsSet_;
}

void QueryTestCasesByIssueVo::unsetdesigning()
{
    designingIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getFinished() const
{
    return finished_;
}

void QueryTestCasesByIssueVo::setFinished(int32_t value)
{
    finished_ = value;
    finishedIsSet_ = true;
}

bool QueryTestCasesByIssueVo::finishedIsSet() const
{
    return finishedIsSet_;
}

void QueryTestCasesByIssueVo::unsetfinished()
{
    finishedIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getTesting() const
{
    return testing_;
}

void QueryTestCasesByIssueVo::setTesting(int32_t value)
{
    testing_ = value;
    testingIsSet_ = true;
}

bool QueryTestCasesByIssueVo::testingIsSet() const
{
    return testingIsSet_;
}

void QueryTestCasesByIssueVo::unsettesting()
{
    testingIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getTestCaseNum() const
{
    return testCaseNum_;
}

void QueryTestCasesByIssueVo::setTestCaseNum(int32_t value)
{
    testCaseNum_ = value;
    testCaseNumIsSet_ = true;
}

bool QueryTestCasesByIssueVo::testCaseNumIsSet() const
{
    return testCaseNumIsSet_;
}

void QueryTestCasesByIssueVo::unsettestCaseNum()
{
    testCaseNumIsSet_ = false;
}

std::vector<TestCaseVo>& QueryTestCasesByIssueVo::getTestcases()
{
    return testcases_;
}

void QueryTestCasesByIssueVo::setTestcases(const std::vector<TestCaseVo>& value)
{
    testcases_ = value;
    testcasesIsSet_ = true;
}

bool QueryTestCasesByIssueVo::testcasesIsSet() const
{
    return testcasesIsSet_;
}

void QueryTestCasesByIssueVo::unsettestcases()
{
    testcasesIsSet_ = false;
}

int32_t QueryTestCasesByIssueVo::getTotalCount() const
{
    return totalCount_;
}

void QueryTestCasesByIssueVo::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool QueryTestCasesByIssueVo::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void QueryTestCasesByIssueVo::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}



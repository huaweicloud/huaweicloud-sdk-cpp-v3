

#include "huaweicloud/cloudtest/v1/model/TestcasePlanVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestcasePlanVo::TestcasePlanVo()
{
    testcaseUri_ = "";
    testcaseUriIsSet_ = false;
    testcaseNumber_ = "";
    testcaseNumberIsSet_ = false;
    plansIsSet_ = false;
}

TestcasePlanVo::~TestcasePlanVo() = default;

void TestcasePlanVo::validate()
{
}

web::json::value TestcasePlanVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcaseUriIsSet_) {
        val[utility::conversions::to_string_t("testcase_uri")] = ModelBase::toJson(testcaseUri_);
    }
    if(testcaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testcase_number")] = ModelBase::toJson(testcaseNumber_);
    }
    if(plansIsSet_) {
        val[utility::conversions::to_string_t("plans")] = ModelBase::toJson(plans_);
    }

    return val;
}
bool TestcasePlanVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcase_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plans"));
        if(!fieldValue.is_null())
        {
            std::vector<TestPlanVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlans(refVal);
        }
    }
    return ok;
}


std::string TestcasePlanVo::getTestcaseUri() const
{
    return testcaseUri_;
}

void TestcasePlanVo::setTestcaseUri(const std::string& value)
{
    testcaseUri_ = value;
    testcaseUriIsSet_ = true;
}

bool TestcasePlanVo::testcaseUriIsSet() const
{
    return testcaseUriIsSet_;
}

void TestcasePlanVo::unsettestcaseUri()
{
    testcaseUriIsSet_ = false;
}

std::string TestcasePlanVo::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void TestcasePlanVo::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool TestcasePlanVo::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void TestcasePlanVo::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

std::vector<TestPlanVo>& TestcasePlanVo::getPlans()
{
    return plans_;
}

void TestcasePlanVo::setPlans(const std::vector<TestPlanVo>& value)
{
    plans_ = value;
    plansIsSet_ = true;
}

bool TestcasePlanVo::plansIsSet() const
{
    return plansIsSet_;
}

void TestcasePlanVo::unsetplans()
{
    plansIsSet_ = false;
}

}
}
}
}
}



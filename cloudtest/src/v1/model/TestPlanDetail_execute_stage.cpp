

#include "huaweicloud/cloudtest/v1/model/TestPlanDetail_execute_stage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanDetail_execute_stage::TestPlanDetail_execute_stage()
{
    defectCount_ = 0;
    defectCountIsSet_ = false;
    completedDefectCount_ = 0;
    completedDefectCountIsSet_ = false;
    casePassRate_ = "";
    casePassRateIsSet_ = false;
    executedCaseCount_ = 0;
    executedCaseCountIsSet_ = false;
}

TestPlanDetail_execute_stage::~TestPlanDetail_execute_stage() = default;

void TestPlanDetail_execute_stage::validate()
{
}

web::json::value TestPlanDetail_execute_stage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectCountIsSet_) {
        val[utility::conversions::to_string_t("defect_count")] = ModelBase::toJson(defectCount_);
    }
    if(completedDefectCountIsSet_) {
        val[utility::conversions::to_string_t("completed_defect_count")] = ModelBase::toJson(completedDefectCount_);
    }
    if(casePassRateIsSet_) {
        val[utility::conversions::to_string_t("case_pass_rate")] = ModelBase::toJson(casePassRate_);
    }
    if(executedCaseCountIsSet_) {
        val[utility::conversions::to_string_t("executed_case_count")] = ModelBase::toJson(executedCaseCount_);
    }

    return val;
}
bool TestPlanDetail_execute_stage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defect_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_defect_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_defect_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedDefectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executed_case_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executed_case_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutedCaseCount(refVal);
        }
    }
    return ok;
}


int32_t TestPlanDetail_execute_stage::getDefectCount() const
{
    return defectCount_;
}

void TestPlanDetail_execute_stage::setDefectCount(int32_t value)
{
    defectCount_ = value;
    defectCountIsSet_ = true;
}

bool TestPlanDetail_execute_stage::defectCountIsSet() const
{
    return defectCountIsSet_;
}

void TestPlanDetail_execute_stage::unsetdefectCount()
{
    defectCountIsSet_ = false;
}

int32_t TestPlanDetail_execute_stage::getCompletedDefectCount() const
{
    return completedDefectCount_;
}

void TestPlanDetail_execute_stage::setCompletedDefectCount(int32_t value)
{
    completedDefectCount_ = value;
    completedDefectCountIsSet_ = true;
}

bool TestPlanDetail_execute_stage::completedDefectCountIsSet() const
{
    return completedDefectCountIsSet_;
}

void TestPlanDetail_execute_stage::unsetcompletedDefectCount()
{
    completedDefectCountIsSet_ = false;
}

std::string TestPlanDetail_execute_stage::getCasePassRate() const
{
    return casePassRate_;
}

void TestPlanDetail_execute_stage::setCasePassRate(const std::string& value)
{
    casePassRate_ = value;
    casePassRateIsSet_ = true;
}

bool TestPlanDetail_execute_stage::casePassRateIsSet() const
{
    return casePassRateIsSet_;
}

void TestPlanDetail_execute_stage::unsetcasePassRate()
{
    casePassRateIsSet_ = false;
}

int32_t TestPlanDetail_execute_stage::getExecutedCaseCount() const
{
    return executedCaseCount_;
}

void TestPlanDetail_execute_stage::setExecutedCaseCount(int32_t value)
{
    executedCaseCount_ = value;
    executedCaseCountIsSet_ = true;
}

bool TestPlanDetail_execute_stage::executedCaseCountIsSet() const
{
    return executedCaseCountIsSet_;
}

void TestPlanDetail_execute_stage::unsetexecutedCaseCount()
{
    executedCaseCountIsSet_ = false;
}

}
}
}
}
}



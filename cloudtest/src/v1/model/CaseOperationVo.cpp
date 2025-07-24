

#include "huaweicloud/cloudtest/v1/model/CaseOperationVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseOperationVo::CaseOperationVo()
{
    testCasesInfoIsSet_ = false;
    setUpCasesInfoIsSet_ = false;
    tearDownCasesInfoIsSet_ = false;
}

CaseOperationVo::~CaseOperationVo() = default;

void CaseOperationVo::validate()
{
}

web::json::value CaseOperationVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("test_cases_info")] = ModelBase::toJson(testCasesInfo_);
    }
    if(setUpCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("set_up_cases_info")] = ModelBase::toJson(setUpCasesInfo_);
    }
    if(tearDownCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("tear_down_cases_info")] = ModelBase::toJson(tearDownCasesInfo_);
    }

    return val;
}
bool CaseOperationVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskAssignCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_up_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_up_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskAssignCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetUpCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tear_down_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tear_down_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskAssignCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTearDownCasesInfo(refVal);
        }
    }
    return ok;
}


std::vector<TaskAssignCaseVo>& CaseOperationVo::getTestCasesInfo()
{
    return testCasesInfo_;
}

void CaseOperationVo::setTestCasesInfo(const std::vector<TaskAssignCaseVo>& value)
{
    testCasesInfo_ = value;
    testCasesInfoIsSet_ = true;
}

bool CaseOperationVo::testCasesInfoIsSet() const
{
    return testCasesInfoIsSet_;
}

void CaseOperationVo::unsettestCasesInfo()
{
    testCasesInfoIsSet_ = false;
}

std::vector<TaskAssignCaseVo>& CaseOperationVo::getSetUpCasesInfo()
{
    return setUpCasesInfo_;
}

void CaseOperationVo::setSetUpCasesInfo(const std::vector<TaskAssignCaseVo>& value)
{
    setUpCasesInfo_ = value;
    setUpCasesInfoIsSet_ = true;
}

bool CaseOperationVo::setUpCasesInfoIsSet() const
{
    return setUpCasesInfoIsSet_;
}

void CaseOperationVo::unsetsetUpCasesInfo()
{
    setUpCasesInfoIsSet_ = false;
}

std::vector<TaskAssignCaseVo>& CaseOperationVo::getTearDownCasesInfo()
{
    return tearDownCasesInfo_;
}

void CaseOperationVo::setTearDownCasesInfo(const std::vector<TaskAssignCaseVo>& value)
{
    tearDownCasesInfo_ = value;
    tearDownCasesInfoIsSet_ = true;
}

bool CaseOperationVo::tearDownCasesInfoIsSet() const
{
    return tearDownCasesInfoIsSet_;
}

void CaseOperationVo::unsettearDownCasesInfo()
{
    tearDownCasesInfoIsSet_ = false;
}

}
}
}
}
}



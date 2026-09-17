

#include "huaweicloud/cloudtest/v1/model/CaseOperationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseOperationInfo::CaseOperationInfo()
{
    testCasesInfoIsSet_ = false;
    setUpCasesInfoIsSet_ = false;
    tearDownCasesInfoIsSet_ = false;
}

CaseOperationInfo::~CaseOperationInfo() = default;

void CaseOperationInfo::validate()
{
}

web::json::value CaseOperationInfo::toJson() const
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
bool CaseOperationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<AssignCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_up_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_up_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<AssignCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetUpCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tear_down_cases_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tear_down_cases_info"));
        if(!fieldValue.is_null())
        {
            std::vector<AssignCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTearDownCasesInfo(refVal);
        }
    }
    return ok;
}


std::vector<AssignCaseInfo>& CaseOperationInfo::getTestCasesInfo()
{
    return testCasesInfo_;
}

void CaseOperationInfo::setTestCasesInfo(const std::vector<AssignCaseInfo>& value)
{
    testCasesInfo_ = value;
    testCasesInfoIsSet_ = true;
}

bool CaseOperationInfo::testCasesInfoIsSet() const
{
    return testCasesInfoIsSet_;
}

void CaseOperationInfo::unsettestCasesInfo()
{
    testCasesInfoIsSet_ = false;
}

std::vector<AssignCaseInfo>& CaseOperationInfo::getSetUpCasesInfo()
{
    return setUpCasesInfo_;
}

void CaseOperationInfo::setSetUpCasesInfo(const std::vector<AssignCaseInfo>& value)
{
    setUpCasesInfo_ = value;
    setUpCasesInfoIsSet_ = true;
}

bool CaseOperationInfo::setUpCasesInfoIsSet() const
{
    return setUpCasesInfoIsSet_;
}

void CaseOperationInfo::unsetsetUpCasesInfo()
{
    setUpCasesInfoIsSet_ = false;
}

std::vector<AssignCaseInfo>& CaseOperationInfo::getTearDownCasesInfo()
{
    return tearDownCasesInfo_;
}

void CaseOperationInfo::setTearDownCasesInfo(const std::vector<AssignCaseInfo>& value)
{
    tearDownCasesInfo_ = value;
    tearDownCasesInfoIsSet_ = true;
}

bool CaseOperationInfo::tearDownCasesInfoIsSet() const
{
    return tearDownCasesInfoIsSet_;
}

void CaseOperationInfo::unsettearDownCasesInfo()
{
    tearDownCasesInfoIsSet_ = false;
}

}
}
}
}
}



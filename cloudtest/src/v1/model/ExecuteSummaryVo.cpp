

#include "huaweicloud/cloudtest/v1/model/ExecuteSummaryVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecuteSummaryVo::ExecuteSummaryVo()
{
    executeCaseNum_ = 0;
    executeCaseNumIsSet_ = false;
    defectNum_ = 0;
    defectNumIsSet_ = false;
    completedDefectNum_ = 0;
    completedDefectNumIsSet_ = false;
    caseSuccessRate_ = "";
    caseSuccessRateIsSet_ = false;
    caseExecutionRate_ = "";
    caseExecutionRateIsSet_ = false;
}

ExecuteSummaryVo::~ExecuteSummaryVo() = default;

void ExecuteSummaryVo::validate()
{
}

web::json::value ExecuteSummaryVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executeCaseNumIsSet_) {
        val[utility::conversions::to_string_t("execute_case_num")] = ModelBase::toJson(executeCaseNum_);
    }
    if(defectNumIsSet_) {
        val[utility::conversions::to_string_t("defect_num")] = ModelBase::toJson(defectNum_);
    }
    if(completedDefectNumIsSet_) {
        val[utility::conversions::to_string_t("completed_defect_num")] = ModelBase::toJson(completedDefectNum_);
    }
    if(caseSuccessRateIsSet_) {
        val[utility::conversions::to_string_t("case_success_rate")] = ModelBase::toJson(caseSuccessRate_);
    }
    if(caseExecutionRateIsSet_) {
        val[utility::conversions::to_string_t("case_execution_rate")] = ModelBase::toJson(caseExecutionRate_);
    }

    return val;
}
bool ExecuteSummaryVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execute_case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_case_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteCaseNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("completed_defect_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("completed_defect_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompletedDefectNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_success_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_execution_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_execution_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseExecutionRate(refVal);
        }
    }
    return ok;
}


int32_t ExecuteSummaryVo::getExecuteCaseNum() const
{
    return executeCaseNum_;
}

void ExecuteSummaryVo::setExecuteCaseNum(int32_t value)
{
    executeCaseNum_ = value;
    executeCaseNumIsSet_ = true;
}

bool ExecuteSummaryVo::executeCaseNumIsSet() const
{
    return executeCaseNumIsSet_;
}

void ExecuteSummaryVo::unsetexecuteCaseNum()
{
    executeCaseNumIsSet_ = false;
}

int32_t ExecuteSummaryVo::getDefectNum() const
{
    return defectNum_;
}

void ExecuteSummaryVo::setDefectNum(int32_t value)
{
    defectNum_ = value;
    defectNumIsSet_ = true;
}

bool ExecuteSummaryVo::defectNumIsSet() const
{
    return defectNumIsSet_;
}

void ExecuteSummaryVo::unsetdefectNum()
{
    defectNumIsSet_ = false;
}

int32_t ExecuteSummaryVo::getCompletedDefectNum() const
{
    return completedDefectNum_;
}

void ExecuteSummaryVo::setCompletedDefectNum(int32_t value)
{
    completedDefectNum_ = value;
    completedDefectNumIsSet_ = true;
}

bool ExecuteSummaryVo::completedDefectNumIsSet() const
{
    return completedDefectNumIsSet_;
}

void ExecuteSummaryVo::unsetcompletedDefectNum()
{
    completedDefectNumIsSet_ = false;
}

std::string ExecuteSummaryVo::getCaseSuccessRate() const
{
    return caseSuccessRate_;
}

void ExecuteSummaryVo::setCaseSuccessRate(const std::string& value)
{
    caseSuccessRate_ = value;
    caseSuccessRateIsSet_ = true;
}

bool ExecuteSummaryVo::caseSuccessRateIsSet() const
{
    return caseSuccessRateIsSet_;
}

void ExecuteSummaryVo::unsetcaseSuccessRate()
{
    caseSuccessRateIsSet_ = false;
}

std::string ExecuteSummaryVo::getCaseExecutionRate() const
{
    return caseExecutionRate_;
}

void ExecuteSummaryVo::setCaseExecutionRate(const std::string& value)
{
    caseExecutionRate_ = value;
    caseExecutionRateIsSet_ = true;
}

bool ExecuteSummaryVo::caseExecutionRateIsSet() const
{
    return caseExecutionRateIsSet_;
}

void ExecuteSummaryVo::unsetcaseExecutionRate()
{
    caseExecutionRateIsSet_ = false;
}

}
}
}
}
}



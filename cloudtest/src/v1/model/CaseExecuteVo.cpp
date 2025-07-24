

#include "huaweicloud/cloudtest/v1/model/CaseExecuteVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseExecuteVo::CaseExecuteVo()
{
    executeRate_ = "";
    executeRateIsSet_ = false;
    executedNumber_ = 0;
    executedNumberIsSet_ = false;
    notExecutedNumber_ = 0;
    notExecutedNumberIsSet_ = false;
}

CaseExecuteVo::~CaseExecuteVo() = default;

void CaseExecuteVo::validate()
{
}

web::json::value CaseExecuteVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executeRateIsSet_) {
        val[utility::conversions::to_string_t("execute_rate")] = ModelBase::toJson(executeRate_);
    }
    if(executedNumberIsSet_) {
        val[utility::conversions::to_string_t("executed_number")] = ModelBase::toJson(executedNumber_);
    }
    if(notExecutedNumberIsSet_) {
        val[utility::conversions::to_string_t("not_executed_number")] = ModelBase::toJson(notExecutedNumber_);
    }

    return val;
}
bool CaseExecuteVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execute_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executed_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executed_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutedNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_executed_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_executed_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotExecutedNumber(refVal);
        }
    }
    return ok;
}


std::string CaseExecuteVo::getExecuteRate() const
{
    return executeRate_;
}

void CaseExecuteVo::setExecuteRate(const std::string& value)
{
    executeRate_ = value;
    executeRateIsSet_ = true;
}

bool CaseExecuteVo::executeRateIsSet() const
{
    return executeRateIsSet_;
}

void CaseExecuteVo::unsetexecuteRate()
{
    executeRateIsSet_ = false;
}

int32_t CaseExecuteVo::getExecutedNumber() const
{
    return executedNumber_;
}

void CaseExecuteVo::setExecutedNumber(int32_t value)
{
    executedNumber_ = value;
    executedNumberIsSet_ = true;
}

bool CaseExecuteVo::executedNumberIsSet() const
{
    return executedNumberIsSet_;
}

void CaseExecuteVo::unsetexecutedNumber()
{
    executedNumberIsSet_ = false;
}

int32_t CaseExecuteVo::getNotExecutedNumber() const
{
    return notExecutedNumber_;
}

void CaseExecuteVo::setNotExecutedNumber(int32_t value)
{
    notExecutedNumber_ = value;
    notExecutedNumberIsSet_ = true;
}

bool CaseExecuteVo::notExecutedNumberIsSet() const
{
    return notExecutedNumberIsSet_;
}

void CaseExecuteVo::unsetnotExecutedNumber()
{
    notExecutedNumberIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/drs/v5/model/QueryPreCheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryPreCheckResult::QueryPreCheckResult()
{
    result_ = false;
    resultIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    totalPassedRate_ = "";
    totalPassedRateIsSet_ = false;
    rdsInstanceId_ = "";
    rdsInstanceIdIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    precheckResultsIsSet_ = false;
}

QueryPreCheckResult::~QueryPreCheckResult() = default;

void QueryPreCheckResult::validate()
{
}

web::json::value QueryPreCheckResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(totalPassedRateIsSet_) {
        val[utility::conversions::to_string_t("total_passed_rate")] = ModelBase::toJson(totalPassedRate_);
    }
    if(rdsInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("rds_instance_id")] = ModelBase::toJson(rdsInstanceId_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(precheckResultsIsSet_) {
        val[utility::conversions::to_string_t("precheck_results")] = ModelBase::toJson(precheckResults_);
    }

    return val;
}
bool QueryPreCheckResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_passed_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_passed_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPassedRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("precheck_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("precheck_results"));
        if(!fieldValue.is_null())
        {
            std::vector<PrecheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrecheckResults(refVal);
        }
    }
    return ok;
}


bool QueryPreCheckResult::isResult() const
{
    return result_;
}

void QueryPreCheckResult::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool QueryPreCheckResult::resultIsSet() const
{
    return resultIsSet_;
}

void QueryPreCheckResult::unsetresult()
{
    resultIsSet_ = false;
}

std::string QueryPreCheckResult::getProcess() const
{
    return process_;
}

void QueryPreCheckResult::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool QueryPreCheckResult::processIsSet() const
{
    return processIsSet_;
}

void QueryPreCheckResult::unsetprocess()
{
    processIsSet_ = false;
}

std::string QueryPreCheckResult::getTotalPassedRate() const
{
    return totalPassedRate_;
}

void QueryPreCheckResult::setTotalPassedRate(const std::string& value)
{
    totalPassedRate_ = value;
    totalPassedRateIsSet_ = true;
}

bool QueryPreCheckResult::totalPassedRateIsSet() const
{
    return totalPassedRateIsSet_;
}

void QueryPreCheckResult::unsettotalPassedRate()
{
    totalPassedRateIsSet_ = false;
}

std::string QueryPreCheckResult::getRdsInstanceId() const
{
    return rdsInstanceId_;
}

void QueryPreCheckResult::setRdsInstanceId(const std::string& value)
{
    rdsInstanceId_ = value;
    rdsInstanceIdIsSet_ = true;
}

bool QueryPreCheckResult::rdsInstanceIdIsSet() const
{
    return rdsInstanceIdIsSet_;
}

void QueryPreCheckResult::unsetrdsInstanceId()
{
    rdsInstanceIdIsSet_ = false;
}

std::string QueryPreCheckResult::getJobDirection() const
{
    return jobDirection_;
}

void QueryPreCheckResult::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool QueryPreCheckResult::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void QueryPreCheckResult::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::vector<PrecheckResult>& QueryPreCheckResult::getPrecheckResults()
{
    return precheckResults_;
}

void QueryPreCheckResult::setPrecheckResults(const std::vector<PrecheckResult>& value)
{
    precheckResults_ = value;
    precheckResultsIsSet_ = true;
}

bool QueryPreCheckResult::precheckResultsIsSet() const
{
    return precheckResultsIsSet_;
}

void QueryPreCheckResult::unsetprecheckResults()
{
    precheckResultsIsSet_ = false;
}

}
}
}
}
}



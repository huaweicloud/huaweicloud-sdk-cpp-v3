

#include "huaweicloud/functiongraph/v2/model/ShowFunctionMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionMetricsResponse::ShowFunctionMetricsResponse()
{
    concurrencyNumIsSet_ = false;
    countIsSet_ = false;
    durationIsSet_ = false;
    failCountIsSet_ = false;
    functionErrorCountIsSet_ = false;
    systemErrorCountIsSet_ = false;
    instanceNumIsSet_ = false;
    maxDurationIsSet_ = false;
    minDurationIsSet_ = false;
    rejectCountIsSet_ = false;
    reservedInstanceNumIsSet_ = false;
}

ShowFunctionMetricsResponse::~ShowFunctionMetricsResponse() = default;

void ShowFunctionMetricsResponse::validate()
{
}

web::json::value ShowFunctionMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(concurrencyNumIsSet_) {
        val[utility::conversions::to_string_t("concurrency_num")] = ModelBase::toJson(concurrencyNum_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
    }
    if(functionErrorCountIsSet_) {
        val[utility::conversions::to_string_t("function_error_count")] = ModelBase::toJson(functionErrorCount_);
    }
    if(systemErrorCountIsSet_) {
        val[utility::conversions::to_string_t("system_error_count")] = ModelBase::toJson(systemErrorCount_);
    }
    if(instanceNumIsSet_) {
        val[utility::conversions::to_string_t("instance_num")] = ModelBase::toJson(instanceNum_);
    }
    if(maxDurationIsSet_) {
        val[utility::conversions::to_string_t("max_duration")] = ModelBase::toJson(maxDuration_);
    }
    if(minDurationIsSet_) {
        val[utility::conversions::to_string_t("min_duration")] = ModelBase::toJson(minDuration_);
    }
    if(rejectCountIsSet_) {
        val[utility::conversions::to_string_t("reject_count")] = ModelBase::toJson(rejectCount_);
    }
    if(reservedInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("reserved_instance_num")] = ModelBase::toJson(reservedInstanceNum_);
    }

    return val;
}
bool ShowFunctionMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("concurrency_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency_num"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrencyNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_error_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_error_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionErrorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_error_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_error_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemErrorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_num"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_duration"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_duration"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reject_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reject_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instance_num"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceNum(refVal);
        }
    }
    return ok;
}


std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getConcurrencyNum()
{
    return concurrencyNum_;
}

void ShowFunctionMetricsResponse::setConcurrencyNum(const std::vector<SlaReportsValue>& value)
{
    concurrencyNum_ = value;
    concurrencyNumIsSet_ = true;
}

bool ShowFunctionMetricsResponse::concurrencyNumIsSet() const
{
    return concurrencyNumIsSet_;
}

void ShowFunctionMetricsResponse::unsetconcurrencyNum()
{
    concurrencyNumIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getCount()
{
    return count_;
}

void ShowFunctionMetricsResponse::setCount(const std::vector<SlaReportsValue>& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowFunctionMetricsResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowFunctionMetricsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getDuration()
{
    return duration_;
}

void ShowFunctionMetricsResponse::setDuration(const std::vector<SlaReportsValue>& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowFunctionMetricsResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowFunctionMetricsResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getFailCount()
{
    return failCount_;
}

void ShowFunctionMetricsResponse::setFailCount(const std::vector<SlaReportsValue>& value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool ShowFunctionMetricsResponse::failCountIsSet() const
{
    return failCountIsSet_;
}

void ShowFunctionMetricsResponse::unsetfailCount()
{
    failCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getFunctionErrorCount()
{
    return functionErrorCount_;
}

void ShowFunctionMetricsResponse::setFunctionErrorCount(const std::vector<SlaReportsValue>& value)
{
    functionErrorCount_ = value;
    functionErrorCountIsSet_ = true;
}

bool ShowFunctionMetricsResponse::functionErrorCountIsSet() const
{
    return functionErrorCountIsSet_;
}

void ShowFunctionMetricsResponse::unsetfunctionErrorCount()
{
    functionErrorCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getSystemErrorCount()
{
    return systemErrorCount_;
}

void ShowFunctionMetricsResponse::setSystemErrorCount(const std::vector<SlaReportsValue>& value)
{
    systemErrorCount_ = value;
    systemErrorCountIsSet_ = true;
}

bool ShowFunctionMetricsResponse::systemErrorCountIsSet() const
{
    return systemErrorCountIsSet_;
}

void ShowFunctionMetricsResponse::unsetsystemErrorCount()
{
    systemErrorCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getInstanceNum()
{
    return instanceNum_;
}

void ShowFunctionMetricsResponse::setInstanceNum(const std::vector<SlaReportsValue>& value)
{
    instanceNum_ = value;
    instanceNumIsSet_ = true;
}

bool ShowFunctionMetricsResponse::instanceNumIsSet() const
{
    return instanceNumIsSet_;
}

void ShowFunctionMetricsResponse::unsetinstanceNum()
{
    instanceNumIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getMaxDuration()
{
    return maxDuration_;
}

void ShowFunctionMetricsResponse::setMaxDuration(const std::vector<SlaReportsValue>& value)
{
    maxDuration_ = value;
    maxDurationIsSet_ = true;
}

bool ShowFunctionMetricsResponse::maxDurationIsSet() const
{
    return maxDurationIsSet_;
}

void ShowFunctionMetricsResponse::unsetmaxDuration()
{
    maxDurationIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getMinDuration()
{
    return minDuration_;
}

void ShowFunctionMetricsResponse::setMinDuration(const std::vector<SlaReportsValue>& value)
{
    minDuration_ = value;
    minDurationIsSet_ = true;
}

bool ShowFunctionMetricsResponse::minDurationIsSet() const
{
    return minDurationIsSet_;
}

void ShowFunctionMetricsResponse::unsetminDuration()
{
    minDurationIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getRejectCount()
{
    return rejectCount_;
}

void ShowFunctionMetricsResponse::setRejectCount(const std::vector<SlaReportsValue>& value)
{
    rejectCount_ = value;
    rejectCountIsSet_ = true;
}

bool ShowFunctionMetricsResponse::rejectCountIsSet() const
{
    return rejectCountIsSet_;
}

void ShowFunctionMetricsResponse::unsetrejectCount()
{
    rejectCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowFunctionMetricsResponse::getReservedInstanceNum()
{
    return reservedInstanceNum_;
}

void ShowFunctionMetricsResponse::setReservedInstanceNum(const std::vector<SlaReportsValue>& value)
{
    reservedInstanceNum_ = value;
    reservedInstanceNumIsSet_ = true;
}

bool ShowFunctionMetricsResponse::reservedInstanceNumIsSet() const
{
    return reservedInstanceNumIsSet_;
}

void ShowFunctionMetricsResponse::unsetreservedInstanceNum()
{
    reservedInstanceNumIsSet_ = false;
}

}
}
}
}
}



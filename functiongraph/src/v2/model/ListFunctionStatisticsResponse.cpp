

#include "huaweicloud/functiongraph/v2/model/ListFunctionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionStatisticsResponse::ListFunctionStatisticsResponse()
{
    countIsSet_ = false;
    durationIsSet_ = false;
    failCountIsSet_ = false;
    maxDurationIsSet_ = false;
    minDurationIsSet_ = false;
    rejectCountIsSet_ = false;
    functionErrorCountIsSet_ = false;
    systemErrorCountIsSet_ = false;
    reservedInstanceNumIsSet_ = false;
    concurrencyNumIsSet_ = false;
}

ListFunctionStatisticsResponse::~ListFunctionStatisticsResponse() = default;

void ListFunctionStatisticsResponse::validate()
{
}

web::json::value ListFunctionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
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
    if(functionErrorCountIsSet_) {
        val[utility::conversions::to_string_t("function_error_count")] = ModelBase::toJson(functionErrorCount_);
    }
    if(systemErrorCountIsSet_) {
        val[utility::conversions::to_string_t("system_error_count")] = ModelBase::toJson(systemErrorCount_);
    }
    if(reservedInstanceNumIsSet_) {
        val[utility::conversions::to_string_t("reserved_instance_num")] = ModelBase::toJson(reservedInstanceNum_);
    }
    if(concurrencyNumIsSet_) {
        val[utility::conversions::to_string_t("concurrency_num")] = ModelBase::toJson(concurrencyNum_);
    }

    return val;
}
bool ListFunctionStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("reserved_instance_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instance_num"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency_num"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrencyNum(refVal);
        }
    }
    return ok;
}


std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getCount()
{
    return count_;
}

void ListFunctionStatisticsResponse::setCount(const std::vector<SlaReportsValue>& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionStatisticsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionStatisticsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getDuration()
{
    return duration_;
}

void ListFunctionStatisticsResponse::setDuration(const std::vector<SlaReportsValue>& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ListFunctionStatisticsResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ListFunctionStatisticsResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getFailCount()
{
    return failCount_;
}

void ListFunctionStatisticsResponse::setFailCount(const std::vector<SlaReportsValue>& value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool ListFunctionStatisticsResponse::failCountIsSet() const
{
    return failCountIsSet_;
}

void ListFunctionStatisticsResponse::unsetfailCount()
{
    failCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getMaxDuration()
{
    return maxDuration_;
}

void ListFunctionStatisticsResponse::setMaxDuration(const std::vector<SlaReportsValue>& value)
{
    maxDuration_ = value;
    maxDurationIsSet_ = true;
}

bool ListFunctionStatisticsResponse::maxDurationIsSet() const
{
    return maxDurationIsSet_;
}

void ListFunctionStatisticsResponse::unsetmaxDuration()
{
    maxDurationIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getMinDuration()
{
    return minDuration_;
}

void ListFunctionStatisticsResponse::setMinDuration(const std::vector<SlaReportsValue>& value)
{
    minDuration_ = value;
    minDurationIsSet_ = true;
}

bool ListFunctionStatisticsResponse::minDurationIsSet() const
{
    return minDurationIsSet_;
}

void ListFunctionStatisticsResponse::unsetminDuration()
{
    minDurationIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getRejectCount()
{
    return rejectCount_;
}

void ListFunctionStatisticsResponse::setRejectCount(const std::vector<SlaReportsValue>& value)
{
    rejectCount_ = value;
    rejectCountIsSet_ = true;
}

bool ListFunctionStatisticsResponse::rejectCountIsSet() const
{
    return rejectCountIsSet_;
}

void ListFunctionStatisticsResponse::unsetrejectCount()
{
    rejectCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getFunctionErrorCount()
{
    return functionErrorCount_;
}

void ListFunctionStatisticsResponse::setFunctionErrorCount(const std::vector<SlaReportsValue>& value)
{
    functionErrorCount_ = value;
    functionErrorCountIsSet_ = true;
}

bool ListFunctionStatisticsResponse::functionErrorCountIsSet() const
{
    return functionErrorCountIsSet_;
}

void ListFunctionStatisticsResponse::unsetfunctionErrorCount()
{
    functionErrorCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getSystemErrorCount()
{
    return systemErrorCount_;
}

void ListFunctionStatisticsResponse::setSystemErrorCount(const std::vector<SlaReportsValue>& value)
{
    systemErrorCount_ = value;
    systemErrorCountIsSet_ = true;
}

bool ListFunctionStatisticsResponse::systemErrorCountIsSet() const
{
    return systemErrorCountIsSet_;
}

void ListFunctionStatisticsResponse::unsetsystemErrorCount()
{
    systemErrorCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getReservedInstanceNum()
{
    return reservedInstanceNum_;
}

void ListFunctionStatisticsResponse::setReservedInstanceNum(const std::vector<SlaReportsValue>& value)
{
    reservedInstanceNum_ = value;
    reservedInstanceNumIsSet_ = true;
}

bool ListFunctionStatisticsResponse::reservedInstanceNumIsSet() const
{
    return reservedInstanceNumIsSet_;
}

void ListFunctionStatisticsResponse::unsetreservedInstanceNum()
{
    reservedInstanceNumIsSet_ = false;
}

std::vector<SlaReportsValue>& ListFunctionStatisticsResponse::getConcurrencyNum()
{
    return concurrencyNum_;
}

void ListFunctionStatisticsResponse::setConcurrencyNum(const std::vector<SlaReportsValue>& value)
{
    concurrencyNum_ = value;
    concurrencyNumIsSet_ = true;
}

bool ListFunctionStatisticsResponse::concurrencyNumIsSet() const
{
    return concurrencyNumIsSet_;
}

void ListFunctionStatisticsResponse::unsetconcurrencyNum()
{
    concurrencyNumIsSet_ = false;
}

}
}
}
}
}



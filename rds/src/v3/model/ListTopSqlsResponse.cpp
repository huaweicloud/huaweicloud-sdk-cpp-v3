

#include "huaweicloud/rds/v3/model/ListTopSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListTopSqlsResponse::ListTopSqlsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    listIsSet_ = false;
    avgCpuTimeTopValuesIsSet_ = false;
    avgDurationTimeTopValuesIsSet_ = false;
    avgRowsTopValuesIsSet_ = false;
    avgLogicalTopValuesIsSet_ = false;
    totalCpuTimeTopValuesIsSet_ = false;
    totalDurationTimeTopValuesIsSet_ = false;
    totalRowsTopValuesIsSet_ = false;
    totalLogicalReadsTopValuesIsSet_ = false;
}

ListTopSqlsResponse::~ListTopSqlsResponse() = default;

void ListTopSqlsResponse::validate()
{
}

web::json::value ListTopSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(avgCpuTimeTopValuesIsSet_) {
        val[utility::conversions::to_string_t("avg_cpu_time_top_values")] = ModelBase::toJson(avgCpuTimeTopValues_);
    }
    if(avgDurationTimeTopValuesIsSet_) {
        val[utility::conversions::to_string_t("avg_duration_time_top_values")] = ModelBase::toJson(avgDurationTimeTopValues_);
    }
    if(avgRowsTopValuesIsSet_) {
        val[utility::conversions::to_string_t("avg_rows_top_values")] = ModelBase::toJson(avgRowsTopValues_);
    }
    if(avgLogicalTopValuesIsSet_) {
        val[utility::conversions::to_string_t("avg_logical_top_values")] = ModelBase::toJson(avgLogicalTopValues_);
    }
    if(totalCpuTimeTopValuesIsSet_) {
        val[utility::conversions::to_string_t("total_cpu_time_top_values")] = ModelBase::toJson(totalCpuTimeTopValues_);
    }
    if(totalDurationTimeTopValuesIsSet_) {
        val[utility::conversions::to_string_t("total_duration_time_top_values")] = ModelBase::toJson(totalDurationTimeTopValues_);
    }
    if(totalRowsTopValuesIsSet_) {
        val[utility::conversions::to_string_t("total_rows_top_values")] = ModelBase::toJson(totalRowsTopValues_);
    }
    if(totalLogicalReadsTopValuesIsSet_) {
        val[utility::conversions::to_string_t("total_logical_reads_top_values")] = ModelBase::toJson(totalLogicalReadsTopValues_);
    }

    return val;
}
bool ListTopSqlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryTopSqlsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_cpu_time_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_cpu_time_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsTimeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgCpuTimeTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_duration_time_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_duration_time_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsTimeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgDurationTimeTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_rows_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_rows_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsRowResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgRowsTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_logical_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_logical_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsLogicalReadResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLogicalTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_cpu_time_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_cpu_time_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsTimeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCpuTimeTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_duration_time_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_duration_time_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsTimeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDurationTimeTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_rows_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_rows_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsRowResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRowsTopValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_logical_reads_top_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_logical_reads_top_values"));
        if(!fieldValue.is_null())
        {
            std::vector<TopSqlsLogicalReadResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLogicalReadsTopValues(refVal);
        }
    }
    return ok;
}


int32_t ListTopSqlsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTopSqlsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTopSqlsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTopSqlsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<QueryTopSqlsResult>& ListTopSqlsResponse::getList()
{
    return list_;
}

void ListTopSqlsResponse::setList(const std::vector<QueryTopSqlsResult>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListTopSqlsResponse::listIsSet() const
{
    return listIsSet_;
}

void ListTopSqlsResponse::unsetlist()
{
    listIsSet_ = false;
}

std::vector<TopSqlsTimeResult>& ListTopSqlsResponse::getAvgCpuTimeTopValues()
{
    return avgCpuTimeTopValues_;
}

void ListTopSqlsResponse::setAvgCpuTimeTopValues(const std::vector<TopSqlsTimeResult>& value)
{
    avgCpuTimeTopValues_ = value;
    avgCpuTimeTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::avgCpuTimeTopValuesIsSet() const
{
    return avgCpuTimeTopValuesIsSet_;
}

void ListTopSqlsResponse::unsetavgCpuTimeTopValues()
{
    avgCpuTimeTopValuesIsSet_ = false;
}

std::vector<TopSqlsTimeResult>& ListTopSqlsResponse::getAvgDurationTimeTopValues()
{
    return avgDurationTimeTopValues_;
}

void ListTopSqlsResponse::setAvgDurationTimeTopValues(const std::vector<TopSqlsTimeResult>& value)
{
    avgDurationTimeTopValues_ = value;
    avgDurationTimeTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::avgDurationTimeTopValuesIsSet() const
{
    return avgDurationTimeTopValuesIsSet_;
}

void ListTopSqlsResponse::unsetavgDurationTimeTopValues()
{
    avgDurationTimeTopValuesIsSet_ = false;
}

std::vector<TopSqlsRowResult>& ListTopSqlsResponse::getAvgRowsTopValues()
{
    return avgRowsTopValues_;
}

void ListTopSqlsResponse::setAvgRowsTopValues(const std::vector<TopSqlsRowResult>& value)
{
    avgRowsTopValues_ = value;
    avgRowsTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::avgRowsTopValuesIsSet() const
{
    return avgRowsTopValuesIsSet_;
}

void ListTopSqlsResponse::unsetavgRowsTopValues()
{
    avgRowsTopValuesIsSet_ = false;
}

std::vector<TopSqlsLogicalReadResult>& ListTopSqlsResponse::getAvgLogicalTopValues()
{
    return avgLogicalTopValues_;
}

void ListTopSqlsResponse::setAvgLogicalTopValues(const std::vector<TopSqlsLogicalReadResult>& value)
{
    avgLogicalTopValues_ = value;
    avgLogicalTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::avgLogicalTopValuesIsSet() const
{
    return avgLogicalTopValuesIsSet_;
}

void ListTopSqlsResponse::unsetavgLogicalTopValues()
{
    avgLogicalTopValuesIsSet_ = false;
}

std::vector<TopSqlsTimeResult>& ListTopSqlsResponse::getTotalCpuTimeTopValues()
{
    return totalCpuTimeTopValues_;
}

void ListTopSqlsResponse::setTotalCpuTimeTopValues(const std::vector<TopSqlsTimeResult>& value)
{
    totalCpuTimeTopValues_ = value;
    totalCpuTimeTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::totalCpuTimeTopValuesIsSet() const
{
    return totalCpuTimeTopValuesIsSet_;
}

void ListTopSqlsResponse::unsettotalCpuTimeTopValues()
{
    totalCpuTimeTopValuesIsSet_ = false;
}

std::vector<TopSqlsTimeResult>& ListTopSqlsResponse::getTotalDurationTimeTopValues()
{
    return totalDurationTimeTopValues_;
}

void ListTopSqlsResponse::setTotalDurationTimeTopValues(const std::vector<TopSqlsTimeResult>& value)
{
    totalDurationTimeTopValues_ = value;
    totalDurationTimeTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::totalDurationTimeTopValuesIsSet() const
{
    return totalDurationTimeTopValuesIsSet_;
}

void ListTopSqlsResponse::unsettotalDurationTimeTopValues()
{
    totalDurationTimeTopValuesIsSet_ = false;
}

std::vector<TopSqlsRowResult>& ListTopSqlsResponse::getTotalRowsTopValues()
{
    return totalRowsTopValues_;
}

void ListTopSqlsResponse::setTotalRowsTopValues(const std::vector<TopSqlsRowResult>& value)
{
    totalRowsTopValues_ = value;
    totalRowsTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::totalRowsTopValuesIsSet() const
{
    return totalRowsTopValuesIsSet_;
}

void ListTopSqlsResponse::unsettotalRowsTopValues()
{
    totalRowsTopValuesIsSet_ = false;
}

std::vector<TopSqlsLogicalReadResult>& ListTopSqlsResponse::getTotalLogicalReadsTopValues()
{
    return totalLogicalReadsTopValues_;
}

void ListTopSqlsResponse::setTotalLogicalReadsTopValues(const std::vector<TopSqlsLogicalReadResult>& value)
{
    totalLogicalReadsTopValues_ = value;
    totalLogicalReadsTopValuesIsSet_ = true;
}

bool ListTopSqlsResponse::totalLogicalReadsTopValuesIsSet() const
{
    return totalLogicalReadsTopValuesIsSet_;
}

void ListTopSqlsResponse::unsettotalLogicalReadsTopValues()
{
    totalLogicalReadsTopValuesIsSet_ = false;
}

}
}
}
}
}



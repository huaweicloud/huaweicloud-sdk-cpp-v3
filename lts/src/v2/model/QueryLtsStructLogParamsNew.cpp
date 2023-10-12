

#include "huaweicloud/lts/v2/model/QueryLtsStructLogParamsNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




QueryLtsStructLogParamsNew::QueryLtsStructLogParamsNew()
{
    query_ = "";
    queryIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    timeRangeIsSet_ = false;
    whetherToRows_ = false;
    whetherToRowsIsSet_ = false;
}

QueryLtsStructLogParamsNew::~QueryLtsStructLogParamsNew() = default;

void QueryLtsStructLogParamsNew::validate()
{
}

web::json::value QueryLtsStructLogParamsNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }
    if(whetherToRowsIsSet_) {
        val[utility::conversions::to_string_t("whether_to_rows")] = ModelBase::toJson(whetherToRows_);
    }

    return val;
}
bool QueryLtsStructLogParamsNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            TimeRange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whether_to_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whether_to_rows"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhetherToRows(refVal);
        }
    }
    return ok;
}


std::string QueryLtsStructLogParamsNew::getQuery() const
{
    return query_;
}

void QueryLtsStructLogParamsNew::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool QueryLtsStructLogParamsNew::queryIsSet() const
{
    return queryIsSet_;
}

void QueryLtsStructLogParamsNew::unsetquery()
{
    queryIsSet_ = false;
}

std::string QueryLtsStructLogParamsNew::getFormat() const
{
    return format_;
}

void QueryLtsStructLogParamsNew::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool QueryLtsStructLogParamsNew::formatIsSet() const
{
    return formatIsSet_;
}

void QueryLtsStructLogParamsNew::unsetformat()
{
    formatIsSet_ = false;
}

TimeRange QueryLtsStructLogParamsNew::getTimeRange() const
{
    return timeRange_;
}

void QueryLtsStructLogParamsNew::setTimeRange(const TimeRange& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool QueryLtsStructLogParamsNew::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void QueryLtsStructLogParamsNew::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

bool QueryLtsStructLogParamsNew::isWhetherToRows() const
{
    return whetherToRows_;
}

void QueryLtsStructLogParamsNew::setWhetherToRows(bool value)
{
    whetherToRows_ = value;
    whetherToRowsIsSet_ = true;
}

bool QueryLtsStructLogParamsNew::whetherToRowsIsSet() const
{
    return whetherToRowsIsSet_;
}

void QueryLtsStructLogParamsNew::unsetwhetherToRows()
{
    whetherToRowsIsSet_ = false;
}

}
}
}
}
}



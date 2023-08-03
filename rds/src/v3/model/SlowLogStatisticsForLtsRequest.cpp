

#include "huaweicloud/rds/v3/model/SlowLogStatisticsForLtsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SlowLogStatisticsForLtsRequest::SlowLogStatisticsForLtsRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

SlowLogStatisticsForLtsRequest::~SlowLogStatisticsForLtsRequest() = default;

void SlowLogStatisticsForLtsRequest::validate()
{
}

web::json::value SlowLogStatisticsForLtsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}

bool SlowLogStatisticsForLtsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}

std::string SlowLogStatisticsForLtsRequest::getStartTime() const
{
    return startTime_;
}

void SlowLogStatisticsForLtsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SlowLogStatisticsForLtsRequest::getEndTime() const
{
    return endTime_;
}

void SlowLogStatisticsForLtsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t SlowLogStatisticsForLtsRequest::getOffset() const
{
    return offset_;
}

void SlowLogStatisticsForLtsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SlowLogStatisticsForLtsRequest::getLimit() const
{
    return limit_;
}

void SlowLogStatisticsForLtsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SlowLogStatisticsForLtsRequest::getType() const
{
    return type_;
}

void SlowLogStatisticsForLtsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string SlowLogStatisticsForLtsRequest::getDatabase() const
{
    return database_;
}

void SlowLogStatisticsForLtsRequest::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string SlowLogStatisticsForLtsRequest::getSort() const
{
    return sort_;
}

void SlowLogStatisticsForLtsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string SlowLogStatisticsForLtsRequest::getOrder() const
{
    return order_;
}

void SlowLogStatisticsForLtsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool SlowLogStatisticsForLtsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void SlowLogStatisticsForLtsRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}



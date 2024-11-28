

#include "huaweicloud/gaussdb/v3/model/ShowSlowLogStatisticsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowLogStatisticsRequestBody::ShowSlowLogStatisticsRequestBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ShowSlowLogStatisticsRequestBody::~ShowSlowLogStatisticsRequestBody() = default;

void ShowSlowLogStatisticsRequestBody::validate()
{
}

web::json::value ShowSlowLogStatisticsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ShowSlowLogStatisticsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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


int32_t ShowSlowLogStatisticsRequestBody::getLimit() const
{
    return limit_;
}

void ShowSlowLogStatisticsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowSlowLogStatisticsRequestBody::getOffset() const
{
    return offset_;
}

void ShowSlowLogStatisticsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ShowSlowLogStatisticsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getType() const
{
    return type_;
}

void ShowSlowLogStatisticsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getDatabase() const
{
    return database_;
}

void ShowSlowLogStatisticsRequestBody::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::databaseIsSet() const
{
    return databaseIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getStartTime() const
{
    return startTime_;
}

void ShowSlowLogStatisticsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getEndTime() const
{
    return endTime_;
}

void ShowSlowLogStatisticsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getSort() const
{
    return sort_;
}

void ShowSlowLogStatisticsRequestBody::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::sortIsSet() const
{
    return sortIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetsort()
{
    sortIsSet_ = false;
}

std::string ShowSlowLogStatisticsRequestBody::getOrder() const
{
    return order_;
}

void ShowSlowLogStatisticsRequestBody::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowSlowLogStatisticsRequestBody::orderIsSet() const
{
    return orderIsSet_;
}

void ShowSlowLogStatisticsRequestBody::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}



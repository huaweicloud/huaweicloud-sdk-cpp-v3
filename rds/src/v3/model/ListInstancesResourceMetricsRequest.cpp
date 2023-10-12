

#include "huaweicloud/rds/v3/model/ListInstancesResourceMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesResourceMetricsRequest::ListInstancesResourceMetricsRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    searchField_ = "";
    searchFieldIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
}

ListInstancesResourceMetricsRequest::~ListInstancesResourceMetricsRequest() = default;

void ListInstancesResourceMetricsRequest::validate()
{
}

web::json::value ListInstancesResourceMetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(searchFieldIsSet_) {
        val[utility::conversions::to_string_t("search_field")] = ModelBase::toJson(searchField_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }

    return val;
}
bool ListInstancesResourceMetricsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    return ok;
}


std::string ListInstancesResourceMetricsRequest::getEngine() const
{
    return engine_;
}

void ListInstancesResourceMetricsRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListInstancesResourceMetricsRequest::getSearchField() const
{
    return searchField_;
}

void ListInstancesResourceMetricsRequest::setSearchField(const std::string& value)
{
    searchField_ = value;
    searchFieldIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::searchFieldIsSet() const
{
    return searchFieldIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetsearchField()
{
    searchFieldIsSet_ = false;
}

std::string ListInstancesResourceMetricsRequest::getOffset() const
{
    return offset_;
}

void ListInstancesResourceMetricsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInstancesResourceMetricsRequest::getLimit() const
{
    return limit_;
}

void ListInstancesResourceMetricsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesResourceMetricsRequest::getOrder() const
{
    return order_;
}

void ListInstancesResourceMetricsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListInstancesResourceMetricsRequest::getSortField() const
{
    return sortField_;
}

void ListInstancesResourceMetricsRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListInstancesResourceMetricsRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListInstancesResourceMetricsRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

}
}
}
}
}



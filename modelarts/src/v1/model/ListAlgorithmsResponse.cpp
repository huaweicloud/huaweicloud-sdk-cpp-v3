

#include "huaweicloud/modelarts/v1/model/ListAlgorithmsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAlgorithmsResponse::ListAlgorithmsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    itemsIsSet_ = false;
}

ListAlgorithmsResponse::~ListAlgorithmsResponse() = default;

void ListAlgorithmsResponse::validate()
{
}

web::json::value ListAlgorithmsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListAlgorithmsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListAlgorithmsResponse::getTotal() const
{
    return total_;
}

void ListAlgorithmsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAlgorithmsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAlgorithmsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListAlgorithmsResponse::getCount() const
{
    return count_;
}

void ListAlgorithmsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAlgorithmsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAlgorithmsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListAlgorithmsResponse::getLimit() const
{
    return limit_;
}

void ListAlgorithmsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAlgorithmsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListAlgorithmsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAlgorithmsResponse::getOffset() const
{
    return offset_;
}

void ListAlgorithmsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAlgorithmsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAlgorithmsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAlgorithmsResponse::getSortBy() const
{
    return sortBy_;
}

void ListAlgorithmsResponse::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListAlgorithmsResponse::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListAlgorithmsResponse::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListAlgorithmsResponse::getOrder() const
{
    return order_;
}

void ListAlgorithmsResponse::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListAlgorithmsResponse::orderIsSet() const
{
    return orderIsSet_;
}

void ListAlgorithmsResponse::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListAlgorithmsResponse::getGroupBy() const
{
    return groupBy_;
}

void ListAlgorithmsResponse::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListAlgorithmsResponse::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListAlgorithmsResponse::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::vector<AlgorithmResponse>& ListAlgorithmsResponse::getItems()
{
    return items_;
}

void ListAlgorithmsResponse::setItems(const std::vector<AlgorithmResponse>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAlgorithmsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAlgorithmsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/modelarts/v1/model/ListTrainingExperimentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingExperimentsResponse::ListTrainingExperimentsResponse()
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
    itemsIsSet_ = false;
}

ListTrainingExperimentsResponse::~ListTrainingExperimentsResponse() = default;

void ListTrainingExperimentsResponse::validate()
{
}

web::json::value ListTrainingExperimentsResponse::toJson() const
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
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListTrainingExperimentsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<TrainingExperimentResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListTrainingExperimentsResponse::getTotal() const
{
    return total_;
}

void ListTrainingExperimentsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTrainingExperimentsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTrainingExperimentsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListTrainingExperimentsResponse::getCount() const
{
    return count_;
}

void ListTrainingExperimentsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTrainingExperimentsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTrainingExperimentsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListTrainingExperimentsResponse::getLimit() const
{
    return limit_;
}

void ListTrainingExperimentsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingExperimentsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingExperimentsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingExperimentsResponse::getOffset() const
{
    return offset_;
}

void ListTrainingExperimentsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingExperimentsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingExperimentsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTrainingExperimentsResponse::getSortBy() const
{
    return sortBy_;
}

void ListTrainingExperimentsResponse::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListTrainingExperimentsResponse::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListTrainingExperimentsResponse::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListTrainingExperimentsResponse::getOrder() const
{
    return order_;
}

void ListTrainingExperimentsResponse::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListTrainingExperimentsResponse::orderIsSet() const
{
    return orderIsSet_;
}

void ListTrainingExperimentsResponse::unsetorder()
{
    orderIsSet_ = false;
}

std::vector<TrainingExperimentResponse>& ListTrainingExperimentsResponse::getItems()
{
    return items_;
}

void ListTrainingExperimentsResponse::setItems(const std::vector<TrainingExperimentResponse>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListTrainingExperimentsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListTrainingExperimentsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/modelarts/v1/model/ShowAutoSearchTrialsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchTrialsResponse::ShowAutoSearchTrialsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    itemsIsSet_ = false;
}

ShowAutoSearchTrialsResponse::~ShowAutoSearchTrialsResponse() = default;

void ShowAutoSearchTrialsResponse::validate()
{
}

web::json::value ShowAutoSearchTrialsResponse::toJson() const
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
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ShowAutoSearchTrialsResponse::fromJson(const web::json::value& val)
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
            ListAutoSearchTrials_items refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ShowAutoSearchTrialsResponse::getTotal() const
{
    return total_;
}

void ShowAutoSearchTrialsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowAutoSearchTrialsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ShowAutoSearchTrialsResponse::getCount() const
{
    return count_;
}

void ShowAutoSearchTrialsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowAutoSearchTrialsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ShowAutoSearchTrialsResponse::getLimit() const
{
    return limit_;
}

void ShowAutoSearchTrialsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAutoSearchTrialsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAutoSearchTrialsResponse::getOffset() const
{
    return offset_;
}

void ShowAutoSearchTrialsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAutoSearchTrialsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowAutoSearchTrialsResponse::getGroupBy() const
{
    return groupBy_;
}

void ShowAutoSearchTrialsResponse::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::groupByIsSet() const
{
    return groupByIsSet_;
}

void ShowAutoSearchTrialsResponse::unsetgroupBy()
{
    groupByIsSet_ = false;
}

ListAutoSearchTrials_items ShowAutoSearchTrialsResponse::getItems() const
{
    return items_;
}

void ShowAutoSearchTrialsResponse::setItems(const ListAutoSearchTrials_items& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ShowAutoSearchTrialsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ShowAutoSearchTrialsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}



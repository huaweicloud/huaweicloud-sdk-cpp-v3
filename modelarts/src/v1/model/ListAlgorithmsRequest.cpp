

#include "huaweicloud/modelarts/v1/model/ListAlgorithmsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAlgorithmsRequest::ListAlgorithmsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    searches_ = "";
    searchesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ListAlgorithmsRequest::~ListAlgorithmsRequest() = default;

void ListAlgorithmsRequest::validate()
{
}

web::json::value ListAlgorithmsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
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
    if(searchesIsSet_) {
        val[utility::conversions::to_string_t("searches")] = ModelBase::toJson(searches_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ListAlgorithmsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("searches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searches"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


int32_t ListAlgorithmsRequest::getOffset() const
{
    return offset_;
}

void ListAlgorithmsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAlgorithmsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAlgorithmsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAlgorithmsRequest::getLimit() const
{
    return limit_;
}

void ListAlgorithmsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAlgorithmsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAlgorithmsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAlgorithmsRequest::getSortBy() const
{
    return sortBy_;
}

void ListAlgorithmsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListAlgorithmsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListAlgorithmsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListAlgorithmsRequest::getOrder() const
{
    return order_;
}

void ListAlgorithmsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListAlgorithmsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListAlgorithmsRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListAlgorithmsRequest::getGroupBy() const
{
    return groupBy_;
}

void ListAlgorithmsRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListAlgorithmsRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListAlgorithmsRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ListAlgorithmsRequest::getSearches() const
{
    return searches_;
}

void ListAlgorithmsRequest::setSearches(const std::string& value)
{
    searches_ = value;
    searchesIsSet_ = true;
}

bool ListAlgorithmsRequest::searchesIsSet() const
{
    return searchesIsSet_;
}

void ListAlgorithmsRequest::unsetsearches()
{
    searchesIsSet_ = false;
}

std::string ListAlgorithmsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAlgorithmsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAlgorithmsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAlgorithmsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}



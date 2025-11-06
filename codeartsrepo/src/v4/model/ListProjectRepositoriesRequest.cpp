

#include "huaweicloud/codeartsrepo/v4/model/ListProjectRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectRepositoriesRequest::ListProjectRepositoriesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ListProjectRepositoriesRequest::~ListProjectRepositoriesRequest() = default;

void ListProjectRepositoriesRequest::validate()
{
}

web::json::value ListProjectRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool ListProjectRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
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
    return ok;
}


std::string ListProjectRepositoriesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectRepositoriesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectRepositoriesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectRepositoriesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListProjectRepositoriesRequest::getSearch() const
{
    return search_;
}

void ListProjectRepositoriesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectRepositoriesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectRepositoriesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListProjectRepositoriesRequest::getOffset() const
{
    return offset_;
}

void ListProjectRepositoriesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectRepositoriesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectRepositoriesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectRepositoriesRequest::getLimit() const
{
    return limit_;
}

void ListProjectRepositoriesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectRepositoriesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectRepositoriesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectRepositoriesRequest::getOrderBy() const
{
    return orderBy_;
}

void ListProjectRepositoriesRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListProjectRepositoriesRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListProjectRepositoriesRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListProjectRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListProjectRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListProjectRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListProjectRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}



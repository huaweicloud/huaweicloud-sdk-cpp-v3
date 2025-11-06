

#include "huaweicloud/codeartsrepo/v4/model/ListTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListTagsRequest::ListTagsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTagsRequest::~ListTagsRequest() = default;

void ListTagsRequest::validate()
{
}

web::json::value ListTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
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
    return ok;
}


int32_t ListTagsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListTagsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListTagsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListTagsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListTagsRequest::getCreator() const
{
    return creator_;
}

void ListTagsRequest::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListTagsRequest::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListTagsRequest::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ListTagsRequest::getSort() const
{
    return sort_;
}

void ListTagsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListTagsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListTagsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListTagsRequest::getSearch() const
{
    return search_;
}

void ListTagsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListTagsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListTagsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListTagsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListTagsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListTagsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListTagsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListTagsRequest::getView() const
{
    return view_;
}

void ListTagsRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListTagsRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListTagsRequest::unsetview()
{
    viewIsSet_ = false;
}

int32_t ListTagsRequest::getOffset() const
{
    return offset_;
}

void ListTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTagsRequest::getLimit() const
{
    return limit_;
}

void ListTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}



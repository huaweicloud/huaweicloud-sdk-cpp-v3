

#include "huaweicloud/codehub/v4/model/ListRepositoryLabelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryLabelsRequest::ListRepositoryLabelsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    includeExpired_ = false;
    includeExpiredIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
}

ListRepositoryLabelsRequest::~ListRepositoryLabelsRequest() = default;

void ListRepositoryLabelsRequest::validate()
{
}

web::json::value ListRepositoryLabelsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(includeExpiredIsSet_) {
        val[utility::conversions::to_string_t("include_expired")] = ModelBase::toJson(includeExpired_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }

    return val;
}
bool ListRepositoryLabelsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("include_expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_expired"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeExpired(refVal);
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
    return ok;
}


int32_t ListRepositoryLabelsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryLabelsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryLabelsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryLabelsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryLabelsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryLabelsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryLabelsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryLabelsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryLabelsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryLabelsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryLabelsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryLabelsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryLabelsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryLabelsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryLabelsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryLabelsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListRepositoryLabelsRequest::getSort() const
{
    return sort_;
}

void ListRepositoryLabelsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListRepositoryLabelsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListRepositoryLabelsRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListRepositoryLabelsRequest::isIncludeExpired() const
{
    return includeExpired_;
}

void ListRepositoryLabelsRequest::setIncludeExpired(bool value)
{
    includeExpired_ = value;
    includeExpiredIsSet_ = true;
}

bool ListRepositoryLabelsRequest::includeExpiredIsSet() const
{
    return includeExpiredIsSet_;
}

void ListRepositoryLabelsRequest::unsetincludeExpired()
{
    includeExpiredIsSet_ = false;
}

std::string ListRepositoryLabelsRequest::getView() const
{
    return view_;
}

void ListRepositoryLabelsRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListRepositoryLabelsRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListRepositoryLabelsRequest::unsetview()
{
    viewIsSet_ = false;
}

}
}
}
}
}



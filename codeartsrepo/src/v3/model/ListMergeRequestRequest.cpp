

#include "huaweicloud/codeartsrepo/v3/model/ListMergeRequestRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListMergeRequestRequest::ListMergeRequestRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
    perPage_ = "";
    perPageIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListMergeRequestRequest::~ListMergeRequestRequest() = default;

void ListMergeRequestRequest::validate()
{
}

web::json::value ListMergeRequestRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool ListMergeRequestRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
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
    return ok;
}


int32_t ListMergeRequestRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestRequest::getState() const
{
    return state_;
}

void ListMergeRequestRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListMergeRequestRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListMergeRequestRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListMergeRequestRequest::getPage() const
{
    return page_;
}

void ListMergeRequestRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListMergeRequestRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListMergeRequestRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListMergeRequestRequest::getPerPage() const
{
    return perPage_;
}

void ListMergeRequestRequest::setPerPage(const std::string& value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListMergeRequestRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListMergeRequestRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

std::string ListMergeRequestRequest::getSearch() const
{
    return search_;
}

void ListMergeRequestRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListMergeRequestRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListMergeRequestRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}



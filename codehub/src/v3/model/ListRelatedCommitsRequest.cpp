

#include "huaweicloud/codehub/v3/model/ListRelatedCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListRelatedCommitsRequest::ListRelatedCommitsRequest()
{
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
}

ListRelatedCommitsRequest::~ListRelatedCommitsRequest() = default;

void ListRelatedCommitsRequest::validate()
{
}

web::json::value ListRelatedCommitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repository_uuid")] = ModelBase::toJson(repositoryUuid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }

    return val;
}
bool ListRelatedCommitsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    return ok;
}


std::string ListRelatedCommitsRequest::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ListRelatedCommitsRequest::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ListRelatedCommitsRequest::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ListRelatedCommitsRequest::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

int32_t ListRelatedCommitsRequest::getType() const
{
    return type_;
}

void ListRelatedCommitsRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListRelatedCommitsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListRelatedCommitsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListRelatedCommitsRequest::getSearch() const
{
    return search_;
}

void ListRelatedCommitsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRelatedCommitsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRelatedCommitsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListRelatedCommitsRequest::getPage() const
{
    return page_;
}

void ListRelatedCommitsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListRelatedCommitsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListRelatedCommitsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListRelatedCommitsRequest::getPerPage() const
{
    return perPage_;
}

void ListRelatedCommitsRequest::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListRelatedCommitsRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListRelatedCommitsRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

}
}
}
}
}



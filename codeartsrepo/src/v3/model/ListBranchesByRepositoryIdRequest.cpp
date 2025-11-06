

#include "huaweicloud/codeartsrepo/v3/model/ListBranchesByRepositoryIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListBranchesByRepositoryIdRequest::ListBranchesByRepositoryIdRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
    perPage_ = "";
    perPageIsSet_ = false;
    match_ = "";
    matchIsSet_ = false;
}

ListBranchesByRepositoryIdRequest::~ListBranchesByRepositoryIdRequest() = default;

void ListBranchesByRepositoryIdRequest::validate()
{
}

web::json::value ListBranchesByRepositoryIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }
    if(matchIsSet_) {
        val[utility::conversions::to_string_t("match")] = ModelBase::toJson(match_);
    }

    return val;
}
bool ListBranchesByRepositoryIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatch(refVal);
        }
    }
    return ok;
}


int32_t ListBranchesByRepositoryIdRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListBranchesByRepositoryIdRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListBranchesByRepositoryIdRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListBranchesByRepositoryIdRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListBranchesByRepositoryIdRequest::getPage() const
{
    return page_;
}

void ListBranchesByRepositoryIdRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListBranchesByRepositoryIdRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListBranchesByRepositoryIdRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListBranchesByRepositoryIdRequest::getPerPage() const
{
    return perPage_;
}

void ListBranchesByRepositoryIdRequest::setPerPage(const std::string& value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListBranchesByRepositoryIdRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListBranchesByRepositoryIdRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

std::string ListBranchesByRepositoryIdRequest::getMatch() const
{
    return match_;
}

void ListBranchesByRepositoryIdRequest::setMatch(const std::string& value)
{
    match_ = value;
    matchIsSet_ = true;
}

bool ListBranchesByRepositoryIdRequest::matchIsSet() const
{
    return matchIsSet_;
}

void ListBranchesByRepositoryIdRequest::unsetmatch()
{
    matchIsSet_ = false;
}

}
}
}
}
}



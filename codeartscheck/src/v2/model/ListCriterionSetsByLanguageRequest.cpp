

#include "huaweicloud/codeartscheck/v2/model/ListCriterionSetsByLanguageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListCriterionSetsByLanguageRequest::ListCriterionSetsByLanguageRequest()
{
    language_ = "";
    languageIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    isReliable_ = "";
    isReliableIsSet_ = false;
}

ListCriterionSetsByLanguageRequest::~ListCriterionSetsByLanguageRequest() = default;

void ListCriterionSetsByLanguageRequest::validate()
{
}

web::json::value ListCriterionSetsByLanguageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(isReliableIsSet_) {
        val[utility::conversions::to_string_t("is_reliable")] = ModelBase::toJson(isReliable_);
    }

    return val;
}
bool ListCriterionSetsByLanguageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_reliable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reliable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReliable(refVal);
        }
    }
    return ok;
}


std::string ListCriterionSetsByLanguageRequest::getLanguage() const
{
    return language_;
}

void ListCriterionSetsByLanguageRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ListCriterionSetsByLanguageRequest::getSearch() const
{
    return search_;
}

void ListCriterionSetsByLanguageRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListCriterionSetsByLanguageRequest::getPageSize() const
{
    return pageSize_;
}

void ListCriterionSetsByLanguageRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListCriterionSetsByLanguageRequest::getPage() const
{
    return page_;
}

void ListCriterionSetsByLanguageRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListCriterionSetsByLanguageRequest::getProjectId() const
{
    return projectId_;
}

void ListCriterionSetsByLanguageRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListCriterionSetsByLanguageRequest::getIsReliable() const
{
    return isReliable_;
}

void ListCriterionSetsByLanguageRequest::setIsReliable(const std::string& value)
{
    isReliable_ = value;
    isReliableIsSet_ = true;
}

bool ListCriterionSetsByLanguageRequest::isReliableIsSet() const
{
    return isReliableIsSet_;
}

void ListCriterionSetsByLanguageRequest::unsetisReliable()
{
    isReliableIsSet_ = false;
}

}
}
}
}
}



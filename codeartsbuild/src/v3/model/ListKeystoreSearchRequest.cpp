

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreSearchRequest::ListKeystoreSearchRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListKeystoreSearchRequest::~ListKeystoreSearchRequest() = default;

void ListKeystoreSearchRequest::validate()
{
}

web::json::value ListKeystoreSearchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool ListKeystoreSearchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t ListKeystoreSearchRequest::getPageSize() const
{
    return pageSize_;
}

void ListKeystoreSearchRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListKeystoreSearchRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListKeystoreSearchRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListKeystoreSearchRequest::getPage() const
{
    return page_;
}

void ListKeystoreSearchRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListKeystoreSearchRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListKeystoreSearchRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListKeystoreSearchRequest::getSearch() const
{
    return search_;
}

void ListKeystoreSearchRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListKeystoreSearchRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListKeystoreSearchRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}



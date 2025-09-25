

#include "huaweicloud/codehub/v3/model/ListUserAllRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListUserAllRepositoriesRequest::ListUserAllRepositoriesRequest()
{
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListUserAllRepositoriesRequest::~ListUserAllRepositoriesRequest() = default;

void ListUserAllRepositoriesRequest::validate()
{
}

web::json::value ListUserAllRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool ListUserAllRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
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


int32_t ListUserAllRepositoriesRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListUserAllRepositoriesRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListUserAllRepositoriesRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListUserAllRepositoriesRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListUserAllRepositoriesRequest::getPageSize() const
{
    return pageSize_;
}

void ListUserAllRepositoriesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListUserAllRepositoriesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListUserAllRepositoriesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListUserAllRepositoriesRequest::getSearch() const
{
    return search_;
}

void ListUserAllRepositoriesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListUserAllRepositoriesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListUserAllRepositoriesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}



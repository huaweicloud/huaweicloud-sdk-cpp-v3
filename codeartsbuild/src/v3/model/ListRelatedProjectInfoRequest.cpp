

#include "huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRelatedProjectInfoRequest::ListRelatedProjectInfoRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListRelatedProjectInfoRequest::~ListRelatedProjectInfoRequest() = default;

void ListRelatedProjectInfoRequest::validate()
{
}

web::json::value ListRelatedProjectInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }

    return val;
}
bool ListRelatedProjectInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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


int32_t ListRelatedProjectInfoRequest::getPageSize() const
{
    return pageSize_;
}

void ListRelatedProjectInfoRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListRelatedProjectInfoRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListRelatedProjectInfoRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListRelatedProjectInfoRequest::getPageNo() const
{
    return pageNo_;
}

void ListRelatedProjectInfoRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListRelatedProjectInfoRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListRelatedProjectInfoRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListRelatedProjectInfoRequest::getSearch() const
{
    return search_;
}

void ListRelatedProjectInfoRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRelatedProjectInfoRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRelatedProjectInfoRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}



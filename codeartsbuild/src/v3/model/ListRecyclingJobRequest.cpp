

#include "huaweicloud/codeartsbuild/v3/model/ListRecyclingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecyclingJobRequest::ListRecyclingJobRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListRecyclingJobRequest::~ListRecyclingJobRequest() = default;

void ListRecyclingJobRequest::validate()
{
}

web::json::value ListRecyclingJobRequest::toJson() const
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
bool ListRecyclingJobRequest::fromJson(const web::json::value& val)
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


int32_t ListRecyclingJobRequest::getPageSize() const
{
    return pageSize_;
}

void ListRecyclingJobRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListRecyclingJobRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListRecyclingJobRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListRecyclingJobRequest::getPageNo() const
{
    return pageNo_;
}

void ListRecyclingJobRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListRecyclingJobRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListRecyclingJobRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListRecyclingJobRequest::getSearch() const
{
    return search_;
}

void ListRecyclingJobRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRecyclingJobRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRecyclingJobRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ListOwnTestCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListOwnTestCasesRequest::ListOwnTestCasesRequest()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
}

ListOwnTestCasesRequest::~ListOwnTestCasesRequest() = default;

void ListOwnTestCasesRequest::validate()
{
}

web::json::value ListOwnTestCasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }

    return val;
}
bool ListOwnTestCasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    return ok;
}


int32_t ListOwnTestCasesRequest::getPageNo() const
{
    return pageNo_;
}

void ListOwnTestCasesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListOwnTestCasesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListOwnTestCasesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListOwnTestCasesRequest::getPageSize() const
{
    return pageSize_;
}

void ListOwnTestCasesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListOwnTestCasesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListOwnTestCasesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListOwnTestCasesRequest::getSortField() const
{
    return sortField_;
}

void ListOwnTestCasesRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListOwnTestCasesRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListOwnTestCasesRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListOwnTestCasesRequest::getSortType() const
{
    return sortType_;
}

void ListOwnTestCasesRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListOwnTestCasesRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListOwnTestCasesRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string ListOwnTestCasesRequest::getKeyword() const
{
    return keyword_;
}

void ListOwnTestCasesRequest::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool ListOwnTestCasesRequest::keywordIsSet() const
{
    return keywordIsSet_;
}

void ListOwnTestCasesRequest::unsetkeyword()
{
    keywordIsSet_ = false;
}

}
}
}
}
}



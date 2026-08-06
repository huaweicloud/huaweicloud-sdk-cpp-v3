

#include "huaweicloud/cloudtest/v1/model/ListSubTasksByPostUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTasksByPostUsingResponse::ListSubTasksByPostUsingResponse()
{
    listIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    totalPage_ = 0;
    totalPageIsSet_ = false;
    totalSize_ = 0L;
    totalSizeIsSet_ = false;
}

ListSubTasksByPostUsingResponse::~ListSubTasksByPostUsingResponse() = default;

void ListSubTasksByPostUsingResponse::validate()
{
}

web::json::value ListSubTasksByPostUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(totalPageIsSet_) {
        val[utility::conversions::to_string_t("total_page")] = ModelBase::toJson(totalPage_);
    }
    if(totalSizeIsSet_) {
        val[utility::conversions::to_string_t("total_size")] = ModelBase::toJson(totalSize_);
    }

    return val;
}
bool ListSubTasksByPostUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
        }
    }
    return ok;
}


std::vector<Object>& ListSubTasksByPostUsingResponse::getList()
{
    return list_;
}

void ListSubTasksByPostUsingResponse::setList(const std::vector<Object>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListSubTasksByPostUsingResponse::listIsSet() const
{
    return listIsSet_;
}

void ListSubTasksByPostUsingResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t ListSubTasksByPostUsingResponse::getPageNum() const
{
    return pageNum_;
}

void ListSubTasksByPostUsingResponse::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListSubTasksByPostUsingResponse::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListSubTasksByPostUsingResponse::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListSubTasksByPostUsingResponse::getPageSize() const
{
    return pageSize_;
}

void ListSubTasksByPostUsingResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSubTasksByPostUsingResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSubTasksByPostUsingResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListSubTasksByPostUsingResponse::getTotalPage() const
{
    return totalPage_;
}

void ListSubTasksByPostUsingResponse::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool ListSubTasksByPostUsingResponse::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void ListSubTasksByPostUsingResponse::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int64_t ListSubTasksByPostUsingResponse::getTotalSize() const
{
    return totalSize_;
}

void ListSubTasksByPostUsingResponse::setTotalSize(int64_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool ListSubTasksByPostUsingResponse::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void ListSubTasksByPostUsingResponse::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

}
}
}
}
}



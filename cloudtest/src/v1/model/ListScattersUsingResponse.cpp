

#include "huaweicloud/cloudtest/v1/model/ListScattersUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListScattersUsingResponse::ListScattersUsingResponse()
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

ListScattersUsingResponse::~ListScattersUsingResponse() = default;

void ListScattersUsingResponse::validate()
{
}

web::json::value ListScattersUsingResponse::toJson() const
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
bool ListScattersUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskCaseResponseTimeDetailVo> refVal;
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


std::vector<TaskCaseResponseTimeDetailVo>& ListScattersUsingResponse::getList()
{
    return list_;
}

void ListScattersUsingResponse::setList(const std::vector<TaskCaseResponseTimeDetailVo>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListScattersUsingResponse::listIsSet() const
{
    return listIsSet_;
}

void ListScattersUsingResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t ListScattersUsingResponse::getPageNum() const
{
    return pageNum_;
}

void ListScattersUsingResponse::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListScattersUsingResponse::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListScattersUsingResponse::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListScattersUsingResponse::getPageSize() const
{
    return pageSize_;
}

void ListScattersUsingResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListScattersUsingResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListScattersUsingResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListScattersUsingResponse::getTotalPage() const
{
    return totalPage_;
}

void ListScattersUsingResponse::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool ListScattersUsingResponse::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void ListScattersUsingResponse::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int64_t ListScattersUsingResponse::getTotalSize() const
{
    return totalSize_;
}

void ListScattersUsingResponse::setTotalSize(int64_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool ListScattersUsingResponse::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void ListScattersUsingResponse::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

}
}
}
}
}



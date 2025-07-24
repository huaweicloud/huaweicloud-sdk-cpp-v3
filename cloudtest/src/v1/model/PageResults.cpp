

#include "huaweicloud/cloudtest/v1/model/PageResults.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PageResults::PageResults()
{
    pageListIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    totalPage_ = 0;
    totalPageIsSet_ = false;
    totalSize_ = 0L;
    totalSizeIsSet_ = false;
}

PageResults::~PageResults() = default;

void PageResults::validate()
{
}

web::json::value PageResults::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageListIsSet_) {
        val[utility::conversions::to_string_t("page_list")] = ModelBase::toJson(pageList_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
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
bool PageResults::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_list"));
        if(!fieldValue.is_null())
        {
            std::vector<VariableRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageList(refVal);
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


std::vector<VariableRes>& PageResults::getPageList()
{
    return pageList_;
}

void PageResults::setPageList(const std::vector<VariableRes>& value)
{
    pageList_ = value;
    pageListIsSet_ = true;
}

bool PageResults::pageListIsSet() const
{
    return pageListIsSet_;
}

void PageResults::unsetpageList()
{
    pageListIsSet_ = false;
}

int32_t PageResults::getPageNo() const
{
    return pageNo_;
}

void PageResults::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool PageResults::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void PageResults::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t PageResults::getPageSize() const
{
    return pageSize_;
}

void PageResults::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool PageResults::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void PageResults::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t PageResults::getTotalPage() const
{
    return totalPage_;
}

void PageResults::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool PageResults::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void PageResults::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int64_t PageResults::getTotalSize() const
{
    return totalSize_;
}

void PageResults::setTotalSize(int64_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool PageResults::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void PageResults::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/PageResultBasicAWInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PageResultBasicAWInfo::PageResultBasicAWInfo()
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

PageResultBasicAWInfo::~PageResultBasicAWInfo() = default;

void PageResultBasicAWInfo::validate()
{
}

web::json::value PageResultBasicAWInfo::toJson() const
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
bool PageResultBasicAWInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BasicAWInfo> refVal;
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


std::vector<BasicAWInfo>& PageResultBasicAWInfo::getPageList()
{
    return pageList_;
}

void PageResultBasicAWInfo::setPageList(const std::vector<BasicAWInfo>& value)
{
    pageList_ = value;
    pageListIsSet_ = true;
}

bool PageResultBasicAWInfo::pageListIsSet() const
{
    return pageListIsSet_;
}

void PageResultBasicAWInfo::unsetpageList()
{
    pageListIsSet_ = false;
}

int32_t PageResultBasicAWInfo::getPageNo() const
{
    return pageNo_;
}

void PageResultBasicAWInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool PageResultBasicAWInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void PageResultBasicAWInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t PageResultBasicAWInfo::getPageSize() const
{
    return pageSize_;
}

void PageResultBasicAWInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool PageResultBasicAWInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void PageResultBasicAWInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t PageResultBasicAWInfo::getTotalPage() const
{
    return totalPage_;
}

void PageResultBasicAWInfo::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool PageResultBasicAWInfo::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void PageResultBasicAWInfo::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int64_t PageResultBasicAWInfo::getTotalSize() const
{
    return totalSize_;
}

void PageResultBasicAWInfo::setTotalSize(int64_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool PageResultBasicAWInfo::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void PageResultBasicAWInfo::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

}
}
}
}
}



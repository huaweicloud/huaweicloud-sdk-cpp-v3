

#include "huaweicloud/cloudtest/v1/model/ShowIfTaskNameRepeatResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIfTaskNameRepeatResponse::ShowIfTaskNameRepeatResponse()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    totalPage_ = 0;
    totalPageIsSet_ = false;
    totalSize_ = 0;
    totalSizeIsSet_ = false;
    pageListIsSet_ = false;
}

ShowIfTaskNameRepeatResponse::~ShowIfTaskNameRepeatResponse() = default;

void ShowIfTaskNameRepeatResponse::validate()
{
}

web::json::value ShowIfTaskNameRepeatResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("pageNo")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("pageSize")] = ModelBase::toJson(pageSize_);
    }
    if(totalPageIsSet_) {
        val[utility::conversions::to_string_t("totalPage")] = ModelBase::toJson(totalPage_);
    }
    if(totalSizeIsSet_) {
        val[utility::conversions::to_string_t("totalSize")] = ModelBase::toJson(totalSize_);
    }
    if(pageListIsSet_) {
        val[utility::conversions::to_string_t("pageList")] = ModelBase::toJson(pageList_);
    }

    return val;
}
bool ShowIfTaskNameRepeatResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pageNo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageNo"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalPage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageList"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmTemplateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageList(refVal);
        }
    }
    return ok;
}


int32_t ShowIfTaskNameRepeatResponse::getPageNo() const
{
    return pageNo_;
}

void ShowIfTaskNameRepeatResponse::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ShowIfTaskNameRepeatResponse::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ShowIfTaskNameRepeatResponse::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ShowIfTaskNameRepeatResponse::getPageSize() const
{
    return pageSize_;
}

void ShowIfTaskNameRepeatResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowIfTaskNameRepeatResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowIfTaskNameRepeatResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowIfTaskNameRepeatResponse::getTotalPage() const
{
    return totalPage_;
}

void ShowIfTaskNameRepeatResponse::setTotalPage(int32_t value)
{
    totalPage_ = value;
    totalPageIsSet_ = true;
}

bool ShowIfTaskNameRepeatResponse::totalPageIsSet() const
{
    return totalPageIsSet_;
}

void ShowIfTaskNameRepeatResponse::unsettotalPage()
{
    totalPageIsSet_ = false;
}

int32_t ShowIfTaskNameRepeatResponse::getTotalSize() const
{
    return totalSize_;
}

void ShowIfTaskNameRepeatResponse::setTotalSize(int32_t value)
{
    totalSize_ = value;
    totalSizeIsSet_ = true;
}

bool ShowIfTaskNameRepeatResponse::totalSizeIsSet() const
{
    return totalSizeIsSet_;
}

void ShowIfTaskNameRepeatResponse::unsettotalSize()
{
    totalSizeIsSet_ = false;
}

std::vector<AlarmTemplateInfo>& ShowIfTaskNameRepeatResponse::getPageList()
{
    return pageList_;
}

void ShowIfTaskNameRepeatResponse::setPageList(const std::vector<AlarmTemplateInfo>& value)
{
    pageList_ = value;
    pageListIsSet_ = true;
}

bool ShowIfTaskNameRepeatResponse::pageListIsSet() const
{
    return pageListIsSet_;
}

void ShowIfTaskNameRepeatResponse::unsetpageList()
{
    pageListIsSet_ = false;
}

}
}
}
}
}



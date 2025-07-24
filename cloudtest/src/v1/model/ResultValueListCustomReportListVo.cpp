

#include "huaweicloud/cloudtest/v1/model/ResultValueListCustomReportListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListCustomReportListVo::ResultValueListCustomReportListVo()
{
    total_ = 0;
    totalIsSet_ = false;
    valueIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    hasMore_ = false;
    hasMoreIsSet_ = false;
}

ResultValueListCustomReportListVo::~ResultValueListCustomReportListVo() = default;

void ResultValueListCustomReportListVo::validate()
{
}

web::json::value ResultValueListCustomReportListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(hasMoreIsSet_) {
        val[utility::conversions::to_string_t("has_more")] = ModelBase::toJson(hasMore_);
    }

    return val;
}
bool ResultValueListCustomReportListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomReportListVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_more"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_more"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasMore(refVal);
        }
    }
    return ok;
}


int32_t ResultValueListCustomReportListVo::getTotal() const
{
    return total_;
}

void ResultValueListCustomReportListVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListCustomReportListVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListCustomReportListVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CustomReportListVo>& ResultValueListCustomReportListVo::getValue()
{
    return value_;
}

void ResultValueListCustomReportListVo::setValue(const std::vector<CustomReportListVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListCustomReportListVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListCustomReportListVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueListCustomReportListVo::getReason() const
{
    return reason_;
}

void ResultValueListCustomReportListVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListCustomReportListVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListCustomReportListVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListCustomReportListVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListCustomReportListVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListCustomReportListVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListCustomReportListVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListCustomReportListVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListCustomReportListVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListCustomReportListVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListCustomReportListVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueListCustomReportListVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueListCustomReportListVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueListCustomReportListVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueListCustomReportListVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



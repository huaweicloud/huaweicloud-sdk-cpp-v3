

#include "huaweicloud/cloudtest/v1/model/ResultValueListTestReportVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListTestReportVo::ResultValueListTestReportVo()
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

ResultValueListTestReportVo::~ResultValueListTestReportVo() = default;

void ResultValueListTestReportVo::validate()
{
}

web::json::value ResultValueListTestReportVo::toJson() const
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
bool ResultValueListTestReportVo::fromJson(const web::json::value& val)
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
            std::vector<TestReportVo> refVal;
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


int32_t ResultValueListTestReportVo::getTotal() const
{
    return total_;
}

void ResultValueListTestReportVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListTestReportVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListTestReportVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TestReportVo>& ResultValueListTestReportVo::getValue()
{
    return value_;
}

void ResultValueListTestReportVo::setValue(const std::vector<TestReportVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListTestReportVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListTestReportVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueListTestReportVo::getReason() const
{
    return reason_;
}

void ResultValueListTestReportVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListTestReportVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListTestReportVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListTestReportVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListTestReportVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListTestReportVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListTestReportVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListTestReportVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListTestReportVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListTestReportVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListTestReportVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueListTestReportVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueListTestReportVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueListTestReportVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueListTestReportVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



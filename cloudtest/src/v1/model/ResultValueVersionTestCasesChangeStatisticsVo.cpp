

#include "huaweicloud/cloudtest/v1/model/ResultValueVersionTestCasesChangeStatisticsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueVersionTestCasesChangeStatisticsVo::ResultValueVersionTestCasesChangeStatisticsVo()
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

ResultValueVersionTestCasesChangeStatisticsVo::~ResultValueVersionTestCasesChangeStatisticsVo() = default;

void ResultValueVersionTestCasesChangeStatisticsVo::validate()
{
}

web::json::value ResultValueVersionTestCasesChangeStatisticsVo::toJson() const
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
bool ResultValueVersionTestCasesChangeStatisticsVo::fromJson(const web::json::value& val)
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
            VersionTestCasesChangeStatisticsVo refVal;
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


int32_t ResultValueVersionTestCasesChangeStatisticsVo::getTotal() const
{
    return total_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsettotal()
{
    totalIsSet_ = false;
}

VersionTestCasesChangeStatisticsVo ResultValueVersionTestCasesChangeStatisticsVo::getValue() const
{
    return value_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setValue(const VersionTestCasesChangeStatisticsVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueVersionTestCasesChangeStatisticsVo::getReason() const
{
    return reason_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueVersionTestCasesChangeStatisticsVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueVersionTestCasesChangeStatisticsVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueVersionTestCasesChangeStatisticsVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueVersionTestCasesChangeStatisticsVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



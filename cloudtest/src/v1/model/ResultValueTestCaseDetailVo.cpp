

#include "huaweicloud/cloudtest/v1/model/ResultValueTestCaseDetailVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueTestCaseDetailVo::ResultValueTestCaseDetailVo()
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

ResultValueTestCaseDetailVo::~ResultValueTestCaseDetailVo() = default;

void ResultValueTestCaseDetailVo::validate()
{
}

web::json::value ResultValueTestCaseDetailVo::toJson() const
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
bool ResultValueTestCaseDetailVo::fromJson(const web::json::value& val)
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
            TestCaseDetailVo refVal;
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


int32_t ResultValueTestCaseDetailVo::getTotal() const
{
    return total_;
}

void ResultValueTestCaseDetailVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueTestCaseDetailVo::unsettotal()
{
    totalIsSet_ = false;
}

TestCaseDetailVo ResultValueTestCaseDetailVo::getValue() const
{
    return value_;
}

void ResultValueTestCaseDetailVo::setValue(const TestCaseDetailVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueTestCaseDetailVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueTestCaseDetailVo::getReason() const
{
    return reason_;
}

void ResultValueTestCaseDetailVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueTestCaseDetailVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueTestCaseDetailVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueTestCaseDetailVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueTestCaseDetailVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueTestCaseDetailVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueTestCaseDetailVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueTestCaseDetailVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueTestCaseDetailVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueTestCaseDetailVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueTestCaseDetailVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueTestCaseDetailVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



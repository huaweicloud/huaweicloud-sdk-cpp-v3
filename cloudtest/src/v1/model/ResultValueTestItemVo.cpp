

#include "huaweicloud/cloudtest/v1/model/ResultValueTestItemVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueTestItemVo::ResultValueTestItemVo()
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

ResultValueTestItemVo::~ResultValueTestItemVo() = default;

void ResultValueTestItemVo::validate()
{
}

web::json::value ResultValueTestItemVo::toJson() const
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
bool ResultValueTestItemVo::fromJson(const web::json::value& val)
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
            TestItemVo refVal;
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


int32_t ResultValueTestItemVo::getTotal() const
{
    return total_;
}

void ResultValueTestItemVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueTestItemVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueTestItemVo::unsettotal()
{
    totalIsSet_ = false;
}

TestItemVo ResultValueTestItemVo::getValue() const
{
    return value_;
}

void ResultValueTestItemVo::setValue(const TestItemVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueTestItemVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueTestItemVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueTestItemVo::getReason() const
{
    return reason_;
}

void ResultValueTestItemVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueTestItemVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueTestItemVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueTestItemVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueTestItemVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueTestItemVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueTestItemVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueTestItemVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueTestItemVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueTestItemVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueTestItemVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueTestItemVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueTestItemVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueTestItemVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueTestItemVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



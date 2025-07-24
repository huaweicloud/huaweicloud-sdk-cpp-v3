

#include "huaweicloud/cloudtest/v1/model/ResultValueIteratorDeleteCaseVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueIteratorDeleteCaseVo::ResultValueIteratorDeleteCaseVo()
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

ResultValueIteratorDeleteCaseVo::~ResultValueIteratorDeleteCaseVo() = default;

void ResultValueIteratorDeleteCaseVo::validate()
{
}

web::json::value ResultValueIteratorDeleteCaseVo::toJson() const
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
bool ResultValueIteratorDeleteCaseVo::fromJson(const web::json::value& val)
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
            IteratorDeleteCaseVo refVal;
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


int32_t ResultValueIteratorDeleteCaseVo::getTotal() const
{
    return total_;
}

void ResultValueIteratorDeleteCaseVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsettotal()
{
    totalIsSet_ = false;
}

IteratorDeleteCaseVo ResultValueIteratorDeleteCaseVo::getValue() const
{
    return value_;
}

void ResultValueIteratorDeleteCaseVo::setValue(const IteratorDeleteCaseVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueIteratorDeleteCaseVo::getReason() const
{
    return reason_;
}

void ResultValueIteratorDeleteCaseVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueIteratorDeleteCaseVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueIteratorDeleteCaseVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueIteratorDeleteCaseVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueIteratorDeleteCaseVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueIteratorDeleteCaseVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueIteratorDeleteCaseVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueIteratorDeleteCaseVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueIteratorDeleteCaseVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



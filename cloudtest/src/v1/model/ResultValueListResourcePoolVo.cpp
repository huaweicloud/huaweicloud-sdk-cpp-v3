

#include "huaweicloud/cloudtest/v1/model/ResultValueListResourcePoolVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListResourcePoolVo::ResultValueListResourcePoolVo()
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

ResultValueListResourcePoolVo::~ResultValueListResourcePoolVo() = default;

void ResultValueListResourcePoolVo::validate()
{
}

web::json::value ResultValueListResourcePoolVo::toJson() const
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
bool ResultValueListResourcePoolVo::fromJson(const web::json::value& val)
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
            std::vector<ResourcePoolVo> refVal;
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


int32_t ResultValueListResourcePoolVo::getTotal() const
{
    return total_;
}

void ResultValueListResourcePoolVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListResourcePoolVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListResourcePoolVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ResourcePoolVo>& ResultValueListResourcePoolVo::getValue()
{
    return value_;
}

void ResultValueListResourcePoolVo::setValue(const std::vector<ResourcePoolVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListResourcePoolVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListResourcePoolVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueListResourcePoolVo::getReason() const
{
    return reason_;
}

void ResultValueListResourcePoolVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListResourcePoolVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListResourcePoolVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListResourcePoolVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListResourcePoolVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListResourcePoolVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListResourcePoolVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListResourcePoolVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListResourcePoolVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListResourcePoolVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListResourcePoolVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueListResourcePoolVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueListResourcePoolVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueListResourcePoolVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueListResourcePoolVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



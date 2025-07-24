

#include "huaweicloud/cloudtest/v1/model/ResultValueTaskResultVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueTaskResultVo::ResultValueTaskResultVo()
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

ResultValueTaskResultVo::~ResultValueTaskResultVo() = default;

void ResultValueTaskResultVo::validate()
{
}

web::json::value ResultValueTaskResultVo::toJson() const
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
bool ResultValueTaskResultVo::fromJson(const web::json::value& val)
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
            TaskResultVo refVal;
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


int32_t ResultValueTaskResultVo::getTotal() const
{
    return total_;
}

void ResultValueTaskResultVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueTaskResultVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueTaskResultVo::unsettotal()
{
    totalIsSet_ = false;
}

TaskResultVo ResultValueTaskResultVo::getValue() const
{
    return value_;
}

void ResultValueTaskResultVo::setValue(const TaskResultVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueTaskResultVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueTaskResultVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueTaskResultVo::getReason() const
{
    return reason_;
}

void ResultValueTaskResultVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueTaskResultVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueTaskResultVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueTaskResultVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueTaskResultVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueTaskResultVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueTaskResultVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueTaskResultVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueTaskResultVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueTaskResultVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueTaskResultVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueTaskResultVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueTaskResultVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueTaskResultVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueTaskResultVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



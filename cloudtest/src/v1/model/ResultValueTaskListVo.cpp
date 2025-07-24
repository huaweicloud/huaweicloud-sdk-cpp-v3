

#include "huaweicloud/cloudtest/v1/model/ResultValueTaskListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueTaskListVo::ResultValueTaskListVo()
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

ResultValueTaskListVo::~ResultValueTaskListVo() = default;

void ResultValueTaskListVo::validate()
{
}

web::json::value ResultValueTaskListVo::toJson() const
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
bool ResultValueTaskListVo::fromJson(const web::json::value& val)
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
            TaskListVo refVal;
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


int32_t ResultValueTaskListVo::getTotal() const
{
    return total_;
}

void ResultValueTaskListVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueTaskListVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueTaskListVo::unsettotal()
{
    totalIsSet_ = false;
}

TaskListVo ResultValueTaskListVo::getValue() const
{
    return value_;
}

void ResultValueTaskListVo::setValue(const TaskListVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueTaskListVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueTaskListVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueTaskListVo::getReason() const
{
    return reason_;
}

void ResultValueTaskListVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueTaskListVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueTaskListVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueTaskListVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueTaskListVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueTaskListVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueTaskListVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueTaskListVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueTaskListVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueTaskListVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueTaskListVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueTaskListVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueTaskListVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueTaskListVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueTaskListVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



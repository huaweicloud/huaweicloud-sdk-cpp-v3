

#include "huaweicloud/cloudtest/v1/model/ResultValueListTaskResulDetailtVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListTaskResulDetailtVo::ResultValueListTaskResulDetailtVo()
{
    total_ = 0;
    totalIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    valueIsSet_ = false;
}

ResultValueListTaskResulDetailtVo::~ResultValueListTaskResulDetailtVo() = default;

void ResultValueListTaskResulDetailtVo::validate()
{
}

web::json::value ResultValueListTaskResulDetailtVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
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
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListTaskResulDetailtVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            TaskResultDetailVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


int32_t ResultValueListTaskResulDetailtVo::getTotal() const
{
    return total_;
}

void ResultValueListTaskResulDetailtVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListTaskResulDetailtVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListTaskResulDetailtVo::unsettotal()
{
    totalIsSet_ = false;
}

std::string ResultValueListTaskResulDetailtVo::getReason() const
{
    return reason_;
}

void ResultValueListTaskResulDetailtVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListTaskResulDetailtVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListTaskResulDetailtVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListTaskResulDetailtVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListTaskResulDetailtVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListTaskResulDetailtVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListTaskResulDetailtVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListTaskResulDetailtVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListTaskResulDetailtVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListTaskResulDetailtVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListTaskResulDetailtVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

TaskResultDetailVo ResultValueListTaskResulDetailtVo::getValue() const
{
    return value_;
}

void ResultValueListTaskResulDetailtVo::setValue(const TaskResultDetailVo& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListTaskResulDetailtVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListTaskResulDetailtVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cloudtest/v1/model/ResultValueListTaskResultVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListTaskResultVo::ResultValueListTaskResultVo()
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

ResultValueListTaskResultVo::~ResultValueListTaskResultVo() = default;

void ResultValueListTaskResultVo::validate()
{
}

web::json::value ResultValueListTaskResultVo::toJson() const
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
bool ResultValueListTaskResultVo::fromJson(const web::json::value& val)
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
            std::vector<TaskResultVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


int32_t ResultValueListTaskResultVo::getTotal() const
{
    return total_;
}

void ResultValueListTaskResultVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListTaskResultVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListTaskResultVo::unsettotal()
{
    totalIsSet_ = false;
}

std::string ResultValueListTaskResultVo::getReason() const
{
    return reason_;
}

void ResultValueListTaskResultVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListTaskResultVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListTaskResultVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListTaskResultVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListTaskResultVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListTaskResultVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListTaskResultVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListTaskResultVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListTaskResultVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListTaskResultVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListTaskResultVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::vector<TaskResultVo>& ResultValueListTaskResultVo::getValue()
{
    return value_;
}

void ResultValueListTaskResultVo::setValue(const std::vector<TaskResultVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListTaskResultVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListTaskResultVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}



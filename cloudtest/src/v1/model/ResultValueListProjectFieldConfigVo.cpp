

#include "huaweicloud/cloudtest/v1/model/ResultValueListProjectFieldConfigVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListProjectFieldConfigVo::ResultValueListProjectFieldConfigVo()
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

ResultValueListProjectFieldConfigVo::~ResultValueListProjectFieldConfigVo() = default;

void ResultValueListProjectFieldConfigVo::validate()
{
}

web::json::value ResultValueListProjectFieldConfigVo::toJson() const
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
bool ResultValueListProjectFieldConfigVo::fromJson(const web::json::value& val)
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
            std::vector<ProjectFieldConfigVo> refVal;
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


int32_t ResultValueListProjectFieldConfigVo::getTotal() const
{
    return total_;
}

void ResultValueListProjectFieldConfigVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::totalIsSet() const
{
    return totalIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ProjectFieldConfigVo>& ResultValueListProjectFieldConfigVo::getValue()
{
    return value_;
}

void ResultValueListProjectFieldConfigVo::setValue(const std::vector<ProjectFieldConfigVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ResultValueListProjectFieldConfigVo::getReason() const
{
    return reason_;
}

void ResultValueListProjectFieldConfigVo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::reasonIsSet() const
{
    return reasonIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsetreason()
{
    reasonIsSet_ = false;
}

int32_t ResultValueListProjectFieldConfigVo::getPageSize() const
{
    return pageSize_;
}

void ResultValueListProjectFieldConfigVo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ResultValueListProjectFieldConfigVo::getPageNo() const
{
    return pageNo_;
}

void ResultValueListProjectFieldConfigVo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

bool ResultValueListProjectFieldConfigVo::isHasMore() const
{
    return hasMore_;
}

void ResultValueListProjectFieldConfigVo::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool ResultValueListProjectFieldConfigVo::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void ResultValueListProjectFieldConfigVo::unsethasMore()
{
    hasMoreIsSet_ = false;
}

}
}
}
}
}



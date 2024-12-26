

#include "huaweicloud/cfw/v1/model/PageInfoCustomerIpsListVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PageInfoCustomerIpsListVO::PageInfoCustomerIpsListVO()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

PageInfoCustomerIpsListVO::~PageInfoCustomerIpsListVO() = default;

void PageInfoCustomerIpsListVO::validate()
{
}

web::json::value PageInfoCustomerIpsListVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool PageInfoCustomerIpsListVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomerIpsListVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t PageInfoCustomerIpsListVO::getLimit() const
{
    return limit_;
}

void PageInfoCustomerIpsListVO::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool PageInfoCustomerIpsListVO::limitIsSet() const
{
    return limitIsSet_;
}

void PageInfoCustomerIpsListVO::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t PageInfoCustomerIpsListVO::getOffset() const
{
    return offset_;
}

void PageInfoCustomerIpsListVO::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PageInfoCustomerIpsListVO::offsetIsSet() const
{
    return offsetIsSet_;
}

void PageInfoCustomerIpsListVO::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<CustomerIpsListVO>& PageInfoCustomerIpsListVO::getRecords()
{
    return records_;
}

void PageInfoCustomerIpsListVO::setRecords(const std::vector<CustomerIpsListVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool PageInfoCustomerIpsListVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void PageInfoCustomerIpsListVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t PageInfoCustomerIpsListVO::getTotal() const
{
    return total_;
}

void PageInfoCustomerIpsListVO::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PageInfoCustomerIpsListVO::totalIsSet() const
{
    return totalIsSet_;
}

void PageInfoCustomerIpsListVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



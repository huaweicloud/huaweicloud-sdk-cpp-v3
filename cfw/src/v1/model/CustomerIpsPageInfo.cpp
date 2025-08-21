

#include "huaweicloud/cfw/v1/model/CustomerIpsPageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CustomerIpsPageInfo::CustomerIpsPageInfo()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

CustomerIpsPageInfo::~CustomerIpsPageInfo() = default;

void CustomerIpsPageInfo::validate()
{
}

web::json::value CustomerIpsPageInfo::toJson() const
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
bool CustomerIpsPageInfo::fromJson(const web::json::value& val)
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


int32_t CustomerIpsPageInfo::getLimit() const
{
    return limit_;
}

void CustomerIpsPageInfo::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CustomerIpsPageInfo::limitIsSet() const
{
    return limitIsSet_;
}

void CustomerIpsPageInfo::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t CustomerIpsPageInfo::getOffset() const
{
    return offset_;
}

void CustomerIpsPageInfo::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CustomerIpsPageInfo::offsetIsSet() const
{
    return offsetIsSet_;
}

void CustomerIpsPageInfo::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<CustomerIpsListVO>& CustomerIpsPageInfo::getRecords()
{
    return records_;
}

void CustomerIpsPageInfo::setRecords(const std::vector<CustomerIpsListVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool CustomerIpsPageInfo::recordsIsSet() const
{
    return recordsIsSet_;
}

void CustomerIpsPageInfo::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t CustomerIpsPageInfo::getTotal() const
{
    return total_;
}

void CustomerIpsPageInfo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool CustomerIpsPageInfo::totalIsSet() const
{
    return totalIsSet_;
}

void CustomerIpsPageInfo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



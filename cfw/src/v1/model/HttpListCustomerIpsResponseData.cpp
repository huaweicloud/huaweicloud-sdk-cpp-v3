

#include "huaweicloud/cfw/v1/model/HttpListCustomerIpsResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpListCustomerIpsResponseData::HttpListCustomerIpsResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

HttpListCustomerIpsResponseData::~HttpListCustomerIpsResponseData() = default;

void HttpListCustomerIpsResponseData::validate()
{
}

web::json::value HttpListCustomerIpsResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool HttpListCustomerIpsResponseData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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
    return ok;
}


int32_t HttpListCustomerIpsResponseData::getLimit() const
{
    return limit_;
}

void HttpListCustomerIpsResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpListCustomerIpsResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void HttpListCustomerIpsResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t HttpListCustomerIpsResponseData::getOffset() const
{
    return offset_;
}

void HttpListCustomerIpsResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool HttpListCustomerIpsResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void HttpListCustomerIpsResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t HttpListCustomerIpsResponseData::getTotal() const
{
    return total_;
}

void HttpListCustomerIpsResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpListCustomerIpsResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void HttpListCustomerIpsResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CustomerIpsListVO>& HttpListCustomerIpsResponseData::getRecords()
{
    return records_;
}

void HttpListCustomerIpsResponseData::setRecords(const std::vector<CustomerIpsListVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpListCustomerIpsResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpListCustomerIpsResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/ServiceSetRecords.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceSetRecords::ServiceSetRecords()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

ServiceSetRecords::~ServiceSetRecords() = default;

void ServiceSetRecords::validate()
{
}

web::json::value ServiceSetRecords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}

bool ServiceSetRecords::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
            std::vector<ServiceSet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t ServiceSetRecords::getOffset() const
{
    return offset_;
}

void ServiceSetRecords::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ServiceSetRecords::offsetIsSet() const
{
    return offsetIsSet_;
}

void ServiceSetRecords::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ServiceSetRecords::getLimit() const
{
    return limit_;
}

void ServiceSetRecords::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ServiceSetRecords::limitIsSet() const
{
    return limitIsSet_;
}

void ServiceSetRecords::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ServiceSetRecords::getTotal() const
{
    return total_;
}

void ServiceSetRecords::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ServiceSetRecords::totalIsSet() const
{
    return totalIsSet_;
}

void ServiceSetRecords::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ServiceSet>& ServiceSetRecords::getRecords()
{
    return records_;
}

void ServiceSetRecords::setRecords(const std::vector<ServiceSet>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ServiceSetRecords::recordsIsSet() const
{
    return recordsIsSet_;
}

void ServiceSetRecords::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



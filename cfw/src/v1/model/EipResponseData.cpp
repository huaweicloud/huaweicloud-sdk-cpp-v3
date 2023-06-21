

#include "huaweicloud/cfw/v1/model/EipResponseData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipResponseData::EipResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

EipResponseData::~EipResponseData() = default;

void EipResponseData::validate()
{
}

web::json::value EipResponseData::toJson() const
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

bool EipResponseData::fromJson(const web::json::value& val)
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
            std::vector<EipResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t EipResponseData::getLimit() const
{
    return limit_;
}

void EipResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool EipResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void EipResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t EipResponseData::getOffset() const
{
    return offset_;
}

void EipResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool EipResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void EipResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t EipResponseData::getTotal() const
{
    return total_;
}

void EipResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool EipResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void EipResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EipResource>& EipResponseData::getRecords()
{
    return records_;
}

void EipResponseData::setRecords(const std::vector<EipResource>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool EipResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void EipResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



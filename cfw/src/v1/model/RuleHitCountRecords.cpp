

#include "huaweicloud/cfw/v1/model/RuleHitCountRecords.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleHitCountRecords::RuleHitCountRecords()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

RuleHitCountRecords::~RuleHitCountRecords() = default;

void RuleHitCountRecords::validate()
{
}

web::json::value RuleHitCountRecords::toJson() const
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

bool RuleHitCountRecords::fromJson(const web::json::value& val)
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
            std::vector<RuleHitCountObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t RuleHitCountRecords::getLimit() const
{
    return limit_;
}

void RuleHitCountRecords::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool RuleHitCountRecords::limitIsSet() const
{
    return limitIsSet_;
}

void RuleHitCountRecords::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t RuleHitCountRecords::getOffset() const
{
    return offset_;
}

void RuleHitCountRecords::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool RuleHitCountRecords::offsetIsSet() const
{
    return offsetIsSet_;
}

void RuleHitCountRecords::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t RuleHitCountRecords::getTotal() const
{
    return total_;
}

void RuleHitCountRecords::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RuleHitCountRecords::totalIsSet() const
{
    return totalIsSet_;
}

void RuleHitCountRecords::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RuleHitCountObject>& RuleHitCountRecords::getRecords()
{
    return records_;
}

void RuleHitCountRecords::setRecords(const std::vector<RuleHitCountObject>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool RuleHitCountRecords::recordsIsSet() const
{
    return recordsIsSet_;
}

void RuleHitCountRecords::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



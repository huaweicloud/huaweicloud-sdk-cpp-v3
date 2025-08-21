

#include "huaweicloud/cfw/v1/model/PageDataAccountVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PageDataAccountVO::PageDataAccountVO()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

PageDataAccountVO::~PageDataAccountVO() = default;

void PageDataAccountVO::validate()
{
}

web::json::value PageDataAccountVO::toJson() const
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
bool PageDataAccountVO::fromJson(const web::json::value& val)
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
            std::vector<AccountVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t PageDataAccountVO::getLimit() const
{
    return limit_;
}

void PageDataAccountVO::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool PageDataAccountVO::limitIsSet() const
{
    return limitIsSet_;
}

void PageDataAccountVO::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t PageDataAccountVO::getOffset() const
{
    return offset_;
}

void PageDataAccountVO::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PageDataAccountVO::offsetIsSet() const
{
    return offsetIsSet_;
}

void PageDataAccountVO::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<AccountVO>& PageDataAccountVO::getRecords()
{
    return records_;
}

void PageDataAccountVO::setRecords(const std::vector<AccountVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool PageDataAccountVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void PageDataAccountVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t PageDataAccountVO::getTotal() const
{
    return total_;
}

void PageDataAccountVO::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PageDataAccountVO::totalIsSet() const
{
    return totalIsSet_;
}

void PageDataAccountVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/PageDataScheduleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PageDataScheduleVO::PageDataScheduleVO()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

PageDataScheduleVO::~PageDataScheduleVO() = default;

void PageDataScheduleVO::validate()
{
}

web::json::value PageDataScheduleVO::toJson() const
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
bool PageDataScheduleVO::fromJson(const web::json::value& val)
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
            std::vector<ScheduleVO> refVal;
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


int32_t PageDataScheduleVO::getLimit() const
{
    return limit_;
}

void PageDataScheduleVO::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool PageDataScheduleVO::limitIsSet() const
{
    return limitIsSet_;
}

void PageDataScheduleVO::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t PageDataScheduleVO::getOffset() const
{
    return offset_;
}

void PageDataScheduleVO::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PageDataScheduleVO::offsetIsSet() const
{
    return offsetIsSet_;
}

void PageDataScheduleVO::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<ScheduleVO>& PageDataScheduleVO::getRecords()
{
    return records_;
}

void PageDataScheduleVO::setRecords(const std::vector<ScheduleVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool PageDataScheduleVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void PageDataScheduleVO::unsetrecords()
{
    recordsIsSet_ = false;
}

int64_t PageDataScheduleVO::getTotal() const
{
    return total_;
}

void PageDataScheduleVO::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PageDataScheduleVO::totalIsSet() const
{
    return totalIsSet_;
}

void PageDataScheduleVO::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



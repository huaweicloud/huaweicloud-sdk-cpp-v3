

#include "huaweicloud/cfw/v1/model/AccessTopStatisticsVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessTopStatisticsVO::AccessTopStatisticsVO()
{
    aggTime_ = 0L;
    aggTimeIsSet_ = false;
    denyAccessTopCounts_ = 0L;
    denyAccessTopCountsIsSet_ = false;
    permitAccessTopCounts_ = 0L;
    permitAccessTopCountsIsSet_ = false;
    totalAccessTopCounts_ = 0L;
    totalAccessTopCountsIsSet_ = false;
}

AccessTopStatisticsVO::~AccessTopStatisticsVO() = default;

void AccessTopStatisticsVO::validate()
{
}

web::json::value AccessTopStatisticsVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aggTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_time")] = ModelBase::toJson(aggTime_);
    }
    if(denyAccessTopCountsIsSet_) {
        val[utility::conversions::to_string_t("deny_access_top_counts")] = ModelBase::toJson(denyAccessTopCounts_);
    }
    if(permitAccessTopCountsIsSet_) {
        val[utility::conversions::to_string_t("permit_access_top_counts")] = ModelBase::toJson(permitAccessTopCounts_);
    }
    if(totalAccessTopCountsIsSet_) {
        val[utility::conversions::to_string_t("total_access_top_counts")] = ModelBase::toJson(totalAccessTopCounts_);
    }

    return val;
}
bool AccessTopStatisticsVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agg_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_access_top_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_access_top_counts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyAccessTopCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_access_top_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_access_top_counts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitAccessTopCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_access_top_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_access_top_counts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAccessTopCounts(refVal);
        }
    }
    return ok;
}


int64_t AccessTopStatisticsVO::getAggTime() const
{
    return aggTime_;
}

void AccessTopStatisticsVO::setAggTime(int64_t value)
{
    aggTime_ = value;
    aggTimeIsSet_ = true;
}

bool AccessTopStatisticsVO::aggTimeIsSet() const
{
    return aggTimeIsSet_;
}

void AccessTopStatisticsVO::unsetaggTime()
{
    aggTimeIsSet_ = false;
}

int64_t AccessTopStatisticsVO::getDenyAccessTopCounts() const
{
    return denyAccessTopCounts_;
}

void AccessTopStatisticsVO::setDenyAccessTopCounts(int64_t value)
{
    denyAccessTopCounts_ = value;
    denyAccessTopCountsIsSet_ = true;
}

bool AccessTopStatisticsVO::denyAccessTopCountsIsSet() const
{
    return denyAccessTopCountsIsSet_;
}

void AccessTopStatisticsVO::unsetdenyAccessTopCounts()
{
    denyAccessTopCountsIsSet_ = false;
}

int64_t AccessTopStatisticsVO::getPermitAccessTopCounts() const
{
    return permitAccessTopCounts_;
}

void AccessTopStatisticsVO::setPermitAccessTopCounts(int64_t value)
{
    permitAccessTopCounts_ = value;
    permitAccessTopCountsIsSet_ = true;
}

bool AccessTopStatisticsVO::permitAccessTopCountsIsSet() const
{
    return permitAccessTopCountsIsSet_;
}

void AccessTopStatisticsVO::unsetpermitAccessTopCounts()
{
    permitAccessTopCountsIsSet_ = false;
}

int64_t AccessTopStatisticsVO::getTotalAccessTopCounts() const
{
    return totalAccessTopCounts_;
}

void AccessTopStatisticsVO::setTotalAccessTopCounts(int64_t value)
{
    totalAccessTopCounts_ = value;
    totalAccessTopCountsIsSet_ = true;
}

bool AccessTopStatisticsVO::totalAccessTopCountsIsSet() const
{
    return totalAccessTopCountsIsSet_;
}

void AccessTopStatisticsVO::unsettotalAccessTopCounts()
{
    totalAccessTopCountsIsSet_ = false;
}

}
}
}
}
}



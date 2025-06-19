

#include "huaweicloud/cfw/v1/model/PageDataIpBlacklistsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PageDataIpBlacklistsVo::PageDataIpBlacklistsVo()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    recordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

PageDataIpBlacklistsVo::~PageDataIpBlacklistsVo() = default;

void PageDataIpBlacklistsVo::validate()
{
}

web::json::value PageDataIpBlacklistsVo::toJson() const
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
bool PageDataIpBlacklistsVo::fromJson(const web::json::value& val)
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
            std::vector<IpBlacklistVO> refVal;
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


int32_t PageDataIpBlacklistsVo::getLimit() const
{
    return limit_;
}

void PageDataIpBlacklistsVo::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool PageDataIpBlacklistsVo::limitIsSet() const
{
    return limitIsSet_;
}

void PageDataIpBlacklistsVo::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t PageDataIpBlacklistsVo::getOffset() const
{
    return offset_;
}

void PageDataIpBlacklistsVo::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PageDataIpBlacklistsVo::offsetIsSet() const
{
    return offsetIsSet_;
}

void PageDataIpBlacklistsVo::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<IpBlacklistVO>& PageDataIpBlacklistsVo::getRecords()
{
    return records_;
}

void PageDataIpBlacklistsVo::setRecords(const std::vector<IpBlacklistVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool PageDataIpBlacklistsVo::recordsIsSet() const
{
    return recordsIsSet_;
}

void PageDataIpBlacklistsVo::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t PageDataIpBlacklistsVo::getTotal() const
{
    return total_;
}

void PageDataIpBlacklistsVo::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PageDataIpBlacklistsVo::totalIsSet() const
{
    return totalIsSet_;
}

void PageDataIpBlacklistsVo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}



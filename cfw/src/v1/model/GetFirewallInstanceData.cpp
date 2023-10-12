

#include "huaweicloud/cfw/v1/model/GetFirewallInstanceData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




GetFirewallInstanceData::GetFirewallInstanceData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

GetFirewallInstanceData::~GetFirewallInstanceData() = default;

void GetFirewallInstanceData::validate()
{
}

web::json::value GetFirewallInstanceData::toJson() const
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
bool GetFirewallInstanceData::fromJson(const web::json::value& val)
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
            std::vector<GetFirewallInstanceResponseRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t GetFirewallInstanceData::getLimit() const
{
    return limit_;
}

void GetFirewallInstanceData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GetFirewallInstanceData::limitIsSet() const
{
    return limitIsSet_;
}

void GetFirewallInstanceData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t GetFirewallInstanceData::getOffset() const
{
    return offset_;
}

void GetFirewallInstanceData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool GetFirewallInstanceData::offsetIsSet() const
{
    return offsetIsSet_;
}

void GetFirewallInstanceData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t GetFirewallInstanceData::getTotal() const
{
    return total_;
}

void GetFirewallInstanceData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool GetFirewallInstanceData::totalIsSet() const
{
    return totalIsSet_;
}

void GetFirewallInstanceData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<GetFirewallInstanceResponseRecord>& GetFirewallInstanceData::getRecords()
{
    return records_;
}

void GetFirewallInstanceData::setRecords(const std::vector<GetFirewallInstanceResponseRecord>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool GetFirewallInstanceData::recordsIsSet() const
{
    return recordsIsSet_;
}

void GetFirewallInstanceData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



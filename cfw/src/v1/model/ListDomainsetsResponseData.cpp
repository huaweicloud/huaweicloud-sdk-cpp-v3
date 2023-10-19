

#include "huaweicloud/cfw/v1/model/ListDomainsetsResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainsetsResponseData::ListDomainsetsResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

ListDomainsetsResponseData::~ListDomainsetsResponseData() = default;

void ListDomainsetsResponseData::validate()
{
}

web::json::value ListDomainsetsResponseData::toJson() const
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
bool ListDomainsetsResponseData::fromJson(const web::json::value& val)
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
            std::vector<DomainSetVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t ListDomainsetsResponseData::getLimit() const
{
    return limit_;
}

void ListDomainsetsResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainsetsResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainsetsResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDomainsetsResponseData::getOffset() const
{
    return offset_;
}

void ListDomainsetsResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainsetsResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainsetsResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDomainsetsResponseData::getTotal() const
{
    return total_;
}

void ListDomainsetsResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDomainsetsResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void ListDomainsetsResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DomainSetVo>& ListDomainsetsResponseData::getRecords()
{
    return records_;
}

void ListDomainsetsResponseData::setRecords(const std::vector<DomainSetVo>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListDomainsetsResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListDomainsetsResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/cfw/v1/model/HttpGetAclTagResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpGetAclTagResponseData::HttpGetAclTagResponseData()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

HttpGetAclTagResponseData::~HttpGetAclTagResponseData() = default;

void HttpGetAclTagResponseData::validate()
{
}

web::json::value HttpGetAclTagResponseData::toJson() const
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
bool HttpGetAclTagResponseData::fromJson(const web::json::value& val)
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
            std::vector<TagsVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t HttpGetAclTagResponseData::getOffset() const
{
    return offset_;
}

void HttpGetAclTagResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool HttpGetAclTagResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void HttpGetAclTagResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t HttpGetAclTagResponseData::getLimit() const
{
    return limit_;
}

void HttpGetAclTagResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpGetAclTagResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void HttpGetAclTagResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t HttpGetAclTagResponseData::getTotal() const
{
    return total_;
}

void HttpGetAclTagResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpGetAclTagResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void HttpGetAclTagResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TagsVO>& HttpGetAclTagResponseData::getRecords()
{
    return records_;
}

void HttpGetAclTagResponseData::setRecords(const std::vector<TagsVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpGetAclTagResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpGetAclTagResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



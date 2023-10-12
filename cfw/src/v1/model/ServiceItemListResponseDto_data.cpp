

#include "huaweicloud/cfw/v1/model/ServiceItemListResponseDto_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceItemListResponseDto_data::ServiceItemListResponseDto_data()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
    recordsIsSet_ = false;
}

ServiceItemListResponseDto_data::~ServiceItemListResponseDto_data() = default;

void ServiceItemListResponseDto_data::validate()
{
}

web::json::value ServiceItemListResponseDto_data::toJson() const
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
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool ServiceItemListResponseDto_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceItemListResponseDto_data_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t ServiceItemListResponseDto_data::getOffset() const
{
    return offset_;
}

void ServiceItemListResponseDto_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ServiceItemListResponseDto_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void ServiceItemListResponseDto_data::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ServiceItemListResponseDto_data::getLimit() const
{
    return limit_;
}

void ServiceItemListResponseDto_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ServiceItemListResponseDto_data::limitIsSet() const
{
    return limitIsSet_;
}

void ServiceItemListResponseDto_data::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ServiceItemListResponseDto_data::getTotal() const
{
    return total_;
}

void ServiceItemListResponseDto_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ServiceItemListResponseDto_data::totalIsSet() const
{
    return totalIsSet_;
}

void ServiceItemListResponseDto_data::unsettotal()
{
    totalIsSet_ = false;
}

std::string ServiceItemListResponseDto_data::getSetId() const
{
    return setId_;
}

void ServiceItemListResponseDto_data::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ServiceItemListResponseDto_data::setIdIsSet() const
{
    return setIdIsSet_;
}

void ServiceItemListResponseDto_data::unsetsetId()
{
    setIdIsSet_ = false;
}

std::vector<ServiceItemListResponseDto_data_records>& ServiceItemListResponseDto_data::getRecords()
{
    return records_;
}

void ServiceItemListResponseDto_data::setRecords(const std::vector<ServiceItemListResponseDto_data_records>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ServiceItemListResponseDto_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void ServiceItemListResponseDto_data::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



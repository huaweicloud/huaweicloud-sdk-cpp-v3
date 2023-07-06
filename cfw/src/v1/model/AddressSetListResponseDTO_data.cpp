

#include "huaweicloud/cfw/v1/model/AddressSetListResponseDTO_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressSetListResponseDTO_data::AddressSetListResponseDTO_data()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

AddressSetListResponseDTO_data::~AddressSetListResponseDTO_data() = default;

void AddressSetListResponseDTO_data::validate()
{
}

web::json::value AddressSetListResponseDTO_data::toJson() const
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

bool AddressSetListResponseDTO_data::fromJson(const web::json::value& val)
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
            std::vector<AddressSetListResponseDTO_data_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}

int32_t AddressSetListResponseDTO_data::getOffset() const
{
    return offset_;
}

void AddressSetListResponseDTO_data::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool AddressSetListResponseDTO_data::offsetIsSet() const
{
    return offsetIsSet_;
}

void AddressSetListResponseDTO_data::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t AddressSetListResponseDTO_data::getLimit() const
{
    return limit_;
}

void AddressSetListResponseDTO_data::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool AddressSetListResponseDTO_data::limitIsSet() const
{
    return limitIsSet_;
}

void AddressSetListResponseDTO_data::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t AddressSetListResponseDTO_data::getTotal() const
{
    return total_;
}

void AddressSetListResponseDTO_data::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AddressSetListResponseDTO_data::totalIsSet() const
{
    return totalIsSet_;
}

void AddressSetListResponseDTO_data::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AddressSetListResponseDTO_data_records>& AddressSetListResponseDTO_data::getRecords()
{
    return records_;
}

void AddressSetListResponseDTO_data::setRecords(const std::vector<AddressSetListResponseDTO_data_records>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool AddressSetListResponseDTO_data::recordsIsSet() const
{
    return recordsIsSet_;
}

void AddressSetListResponseDTO_data::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}



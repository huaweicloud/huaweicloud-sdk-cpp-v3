

#include "huaweicloud/meeting/v1/model/SearchDevicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchDevicesResponse::SearchDevicesResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchDevicesResponse::~SearchDevicesResponse() = default;

void SearchDevicesResponse::validate()
{
}

web::json::value SearchDevicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SearchDevicesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeviceResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchDevicesResponse::getOffset() const
{
    return offset_;
}

void SearchDevicesResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchDevicesResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchDevicesResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchDevicesResponse::getLimit() const
{
    return limit_;
}

void SearchDevicesResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchDevicesResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchDevicesResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchDevicesResponse::getCount() const
{
    return count_;
}

void SearchDevicesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchDevicesResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchDevicesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<QueryDeviceResultDTO>& SearchDevicesResponse::getData()
{
    return data_;
}

void SearchDevicesResponse::setData(const std::vector<QueryDeviceResultDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchDevicesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchDevicesResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



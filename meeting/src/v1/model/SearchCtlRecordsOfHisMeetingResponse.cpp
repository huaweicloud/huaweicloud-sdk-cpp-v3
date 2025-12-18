

#include "huaweicloud/meeting/v1/model/SearchCtlRecordsOfHisMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCtlRecordsOfHisMeetingResponse::SearchCtlRecordsOfHisMeetingResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchCtlRecordsOfHisMeetingResponse::~SearchCtlRecordsOfHisMeetingResponse() = default;

void SearchCtlRecordsOfHisMeetingResponse::validate()
{
}

web::json::value SearchCtlRecordsOfHisMeetingResponse::toJson() const
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
bool SearchCtlRecordsOfHisMeetingResponse::fromJson(const web::json::value& val)
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
            std::vector<ConfCtlRecordInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchCtlRecordsOfHisMeetingResponse::getOffset() const
{
    return offset_;
}

void SearchCtlRecordsOfHisMeetingResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCtlRecordsOfHisMeetingResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCtlRecordsOfHisMeetingResponse::getLimit() const
{
    return limit_;
}

void SearchCtlRecordsOfHisMeetingResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCtlRecordsOfHisMeetingResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchCtlRecordsOfHisMeetingResponse::getCount() const
{
    return count_;
}

void SearchCtlRecordsOfHisMeetingResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchCtlRecordsOfHisMeetingResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConfCtlRecordInfo>& SearchCtlRecordsOfHisMeetingResponse::getData()
{
    return data_;
}

void SearchCtlRecordsOfHisMeetingResponse::setData(const std::vector<ConfCtlRecordInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchCtlRecordsOfHisMeetingResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



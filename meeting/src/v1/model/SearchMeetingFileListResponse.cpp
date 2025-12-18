

#include "huaweicloud/meeting/v1/model/SearchMeetingFileListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMeetingFileListResponse::SearchMeetingFileListResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataIsSet_ = false;
}

SearchMeetingFileListResponse::~SearchMeetingFileListResponse() = default;

void SearchMeetingFileListResponse::validate()
{
}

web::json::value SearchMeetingFileListResponse::toJson() const
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
bool SearchMeetingFileListResponse::fromJson(const web::json::value& val)
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
            std::vector<ListMeetingFileResponseDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t SearchMeetingFileListResponse::getOffset() const
{
    return offset_;
}

void SearchMeetingFileListResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMeetingFileListResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMeetingFileListResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMeetingFileListResponse::getLimit() const
{
    return limit_;
}

void SearchMeetingFileListResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMeetingFileListResponse::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMeetingFileListResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t SearchMeetingFileListResponse::getCount() const
{
    return count_;
}

void SearchMeetingFileListResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchMeetingFileListResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchMeetingFileListResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ListMeetingFileResponseDTO>& SearchMeetingFileListResponse::getData()
{
    return data_;
}

void SearchMeetingFileListResponse::setData(const std::vector<ListMeetingFileResponseDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SearchMeetingFileListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void SearchMeetingFileListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}



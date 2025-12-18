

#include "huaweicloud/meeting/v1/model/PageParticipant.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PageParticipant::PageParticipant()
{
    dataIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

PageParticipant::~PageParticipant() = default;

void PageParticipant::validate()
{
}

web::json::value PageParticipant::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool PageParticipant::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ParticipantInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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
    return ok;
}


std::vector<ParticipantInfo>& PageParticipant::getData()
{
    return data_;
}

void PageParticipant::setData(const std::vector<ParticipantInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool PageParticipant::dataIsSet() const
{
    return dataIsSet_;
}

void PageParticipant::unsetdata()
{
    dataIsSet_ = false;
}

int32_t PageParticipant::getOffset() const
{
    return offset_;
}

void PageParticipant::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PageParticipant::offsetIsSet() const
{
    return offsetIsSet_;
}

void PageParticipant::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t PageParticipant::getLimit() const
{
    return limit_;
}

void PageParticipant::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool PageParticipant::limitIsSet() const
{
    return limitIsSet_;
}

void PageParticipant::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t PageParticipant::getCount() const
{
    return count_;
}

void PageParticipant::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PageParticipant::countIsSet() const
{
    return countIsSet_;
}

void PageParticipant::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}



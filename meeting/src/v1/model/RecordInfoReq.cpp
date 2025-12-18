

#include "huaweicloud/meeting/v1/model/RecordInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RecordInfoReq::RecordInfoReq()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    segmentOffset_ = 0;
    segmentOffsetIsSet_ = false;
    segmentLimit_ = 0;
    segmentLimitIsSet_ = false;
}

RecordInfoReq::~RecordInfoReq() = default;

void RecordInfoReq::validate()
{
}

web::json::value RecordInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(segmentOffsetIsSet_) {
        val[utility::conversions::to_string_t("segmentOffset")] = ModelBase::toJson(segmentOffset_);
    }
    if(segmentLimitIsSet_) {
        val[utility::conversions::to_string_t("segmentLimit")] = ModelBase::toJson(segmentLimit_);
    }

    return val;
}
bool RecordInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentOffset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentOffset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentLimit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentLimit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentLimit(refVal);
        }
    }
    return ok;
}


std::string RecordInfoReq::getConfUUID() const
{
    return confUUID_;
}

void RecordInfoReq::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool RecordInfoReq::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void RecordInfoReq::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

int32_t RecordInfoReq::getSegmentOffset() const
{
    return segmentOffset_;
}

void RecordInfoReq::setSegmentOffset(int32_t value)
{
    segmentOffset_ = value;
    segmentOffsetIsSet_ = true;
}

bool RecordInfoReq::segmentOffsetIsSet() const
{
    return segmentOffsetIsSet_;
}

void RecordInfoReq::unsetsegmentOffset()
{
    segmentOffsetIsSet_ = false;
}

int32_t RecordInfoReq::getSegmentLimit() const
{
    return segmentLimit_;
}

void RecordInfoReq::setSegmentLimit(int32_t value)
{
    segmentLimit_ = value;
    segmentLimitIsSet_ = true;
}

bool RecordInfoReq::segmentLimitIsSet() const
{
    return segmentLimitIsSet_;
}

void RecordInfoReq::unsetsegmentLimit()
{
    segmentLimitIsSet_ = false;
}

}
}
}
}
}



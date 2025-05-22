

#include "huaweicloud/live/v1/model/SCTE35InfoItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SCTE35InfoItem::SCTE35InfoItem()
{
    type_ = "";
    typeIsSet_ = false;
    eventId_ = 0;
    eventIdIsSet_ = false;
    startDate_ = 0L;
    startDateIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    segmentationType_ = "";
    segmentationTypeIsSet_ = false;
    base64Data_ = "";
    base64DataIsSet_ = false;
    rawSplice_ = "";
    rawSpliceIsSet_ = false;
}

SCTE35InfoItem::~SCTE35InfoItem() = default;

void SCTE35InfoItem::validate()
{
}

web::json::value SCTE35InfoItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(segmentationTypeIsSet_) {
        val[utility::conversions::to_string_t("segmentation_type")] = ModelBase::toJson(segmentationType_);
    }
    if(base64DataIsSet_) {
        val[utility::conversions::to_string_t("base64_data")] = ModelBase::toJson(base64Data_);
    }
    if(rawSpliceIsSet_) {
        val[utility::conversions::to_string_t("raw_splice")] = ModelBase::toJson(rawSplice_);
    }

    return val;
}
bool SCTE35InfoItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base64_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base64_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBase64Data(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("raw_splice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_splice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRawSplice(refVal);
        }
    }
    return ok;
}


std::string SCTE35InfoItem::getType() const
{
    return type_;
}

void SCTE35InfoItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SCTE35InfoItem::typeIsSet() const
{
    return typeIsSet_;
}

void SCTE35InfoItem::unsettype()
{
    typeIsSet_ = false;
}

int32_t SCTE35InfoItem::getEventId() const
{
    return eventId_;
}

void SCTE35InfoItem::setEventId(int32_t value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool SCTE35InfoItem::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void SCTE35InfoItem::unseteventId()
{
    eventIdIsSet_ = false;
}

int64_t SCTE35InfoItem::getStartDate() const
{
    return startDate_;
}

void SCTE35InfoItem::setStartDate(int64_t value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool SCTE35InfoItem::startDateIsSet() const
{
    return startDateIsSet_;
}

void SCTE35InfoItem::unsetstartDate()
{
    startDateIsSet_ = false;
}

int32_t SCTE35InfoItem::getDuration() const
{
    return duration_;
}

void SCTE35InfoItem::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool SCTE35InfoItem::durationIsSet() const
{
    return durationIsSet_;
}

void SCTE35InfoItem::unsetduration()
{
    durationIsSet_ = false;
}

std::string SCTE35InfoItem::getSegmentationType() const
{
    return segmentationType_;
}

void SCTE35InfoItem::setSegmentationType(const std::string& value)
{
    segmentationType_ = value;
    segmentationTypeIsSet_ = true;
}

bool SCTE35InfoItem::segmentationTypeIsSet() const
{
    return segmentationTypeIsSet_;
}

void SCTE35InfoItem::unsetsegmentationType()
{
    segmentationTypeIsSet_ = false;
}

std::string SCTE35InfoItem::getBase64Data() const
{
    return base64Data_;
}

void SCTE35InfoItem::setBase64Data(const std::string& value)
{
    base64Data_ = value;
    base64DataIsSet_ = true;
}

bool SCTE35InfoItem::base64DataIsSet() const
{
    return base64DataIsSet_;
}

void SCTE35InfoItem::unsetbase64Data()
{
    base64DataIsSet_ = false;
}

std::string SCTE35InfoItem::getRawSplice() const
{
    return rawSplice_;
}

void SCTE35InfoItem::setRawSplice(const std::string& value)
{
    rawSplice_ = value;
    rawSpliceIsSet_ = true;
}

bool SCTE35InfoItem::rawSpliceIsSet() const
{
    return rawSpliceIsSet_;
}

void SCTE35InfoItem::unsetrawSplice()
{
    rawSpliceIsSet_ = false;
}

}
}
}
}
}



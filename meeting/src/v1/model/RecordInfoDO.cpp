

#include "huaweicloud/meeting/v1/model/RecordInfoDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RecordInfoDO::RecordInfoDO()
{
    subject_ = "";
    subjectIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    segmentOffset_ = 0;
    segmentOffsetIsSet_ = false;
    segmentLimit_ = 0;
    segmentLimitIsSet_ = false;
    segmentCount_ = 0L;
    segmentCountIsSet_ = false;
    segmentListIsSet_ = false;
}

RecordInfoDO::~RecordInfoDO() = default;

void RecordInfoDO::validate()
{
}

web::json::value RecordInfoDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("beginTime")] = ModelBase::toJson(beginTime_);
    }
    if(segmentOffsetIsSet_) {
        val[utility::conversions::to_string_t("segmentOffset")] = ModelBase::toJson(segmentOffset_);
    }
    if(segmentLimitIsSet_) {
        val[utility::conversions::to_string_t("segmentLimit")] = ModelBase::toJson(segmentLimit_);
    }
    if(segmentCountIsSet_) {
        val[utility::conversions::to_string_t("segmentCount")] = ModelBase::toJson(segmentCount_);
    }
    if(segmentListIsSet_) {
        val[utility::conversions::to_string_t("segmentList")] = ModelBase::toJson(segmentList_);
    }

    return val;
}
bool RecordInfoDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beginTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beginTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("segmentCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentCount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segmentList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segmentList"));
        if(!fieldValue.is_null())
        {
            std::vector<SegmentDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegmentList(refVal);
        }
    }
    return ok;
}


std::string RecordInfoDO::getSubject() const
{
    return subject_;
}

void RecordInfoDO::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool RecordInfoDO::subjectIsSet() const
{
    return subjectIsSet_;
}

void RecordInfoDO::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string RecordInfoDO::getBeginTime() const
{
    return beginTime_;
}

void RecordInfoDO::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool RecordInfoDO::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void RecordInfoDO::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int32_t RecordInfoDO::getSegmentOffset() const
{
    return segmentOffset_;
}

void RecordInfoDO::setSegmentOffset(int32_t value)
{
    segmentOffset_ = value;
    segmentOffsetIsSet_ = true;
}

bool RecordInfoDO::segmentOffsetIsSet() const
{
    return segmentOffsetIsSet_;
}

void RecordInfoDO::unsetsegmentOffset()
{
    segmentOffsetIsSet_ = false;
}

int32_t RecordInfoDO::getSegmentLimit() const
{
    return segmentLimit_;
}

void RecordInfoDO::setSegmentLimit(int32_t value)
{
    segmentLimit_ = value;
    segmentLimitIsSet_ = true;
}

bool RecordInfoDO::segmentLimitIsSet() const
{
    return segmentLimitIsSet_;
}

void RecordInfoDO::unsetsegmentLimit()
{
    segmentLimitIsSet_ = false;
}

int64_t RecordInfoDO::getSegmentCount() const
{
    return segmentCount_;
}

void RecordInfoDO::setSegmentCount(int64_t value)
{
    segmentCount_ = value;
    segmentCountIsSet_ = true;
}

bool RecordInfoDO::segmentCountIsSet() const
{
    return segmentCountIsSet_;
}

void RecordInfoDO::unsetsegmentCount()
{
    segmentCountIsSet_ = false;
}

std::vector<SegmentDO>& RecordInfoDO::getSegmentList()
{
    return segmentList_;
}

void RecordInfoDO::setSegmentList(const std::vector<SegmentDO>& value)
{
    segmentList_ = value;
    segmentListIsSet_ = true;
}

bool RecordInfoDO::segmentListIsSet() const
{
    return segmentListIsSet_;
}

void RecordInfoDO::unsetsegmentList()
{
    segmentListIsSet_ = false;
}

}
}
}
}
}



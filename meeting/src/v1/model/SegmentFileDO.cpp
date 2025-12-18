

#include "huaweicloud/meeting/v1/model/SegmentFileDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SegmentFileDO::SegmentFileDO()
{
    recordType_ = "";
    recordTypeIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
    playUrl_ = "";
    playUrlIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
}

SegmentFileDO::~SegmentFileDO() = default;

void SegmentFileDO::validate()
{
}

web::json::value SegmentFileDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(recordType_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("beginTime")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("fileSize")] = ModelBase::toJson(fileSize_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha256")] = ModelBase::toJson(sha256_);
    }
    if(playUrlIsSet_) {
        val[utility::conversions::to_string_t("playUrl")] = ModelBase::toJson(playUrl_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("downloadUrl")] = ModelBase::toJson(downloadUrl_);
    }

    return val;
}
bool SegmentFileDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recordType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beginTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beginTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileSize"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("playUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("playUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("downloadUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downloadUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string SegmentFileDO::getRecordType() const
{
    return recordType_;
}

void SegmentFileDO::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool SegmentFileDO::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void SegmentFileDO::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

int64_t SegmentFileDO::getBeginTime() const
{
    return beginTime_;
}

void SegmentFileDO::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SegmentFileDO::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SegmentFileDO::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t SegmentFileDO::getEndTime() const
{
    return endTime_;
}

void SegmentFileDO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SegmentFileDO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SegmentFileDO::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t SegmentFileDO::getDuration() const
{
    return duration_;
}

void SegmentFileDO::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool SegmentFileDO::durationIsSet() const
{
    return durationIsSet_;
}

void SegmentFileDO::unsetduration()
{
    durationIsSet_ = false;
}

int64_t SegmentFileDO::getFileSize() const
{
    return fileSize_;
}

void SegmentFileDO::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool SegmentFileDO::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void SegmentFileDO::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string SegmentFileDO::getSha256() const
{
    return sha256_;
}

void SegmentFileDO::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool SegmentFileDO::sha256IsSet() const
{
    return sha256IsSet_;
}

void SegmentFileDO::unsetsha256()
{
    sha256IsSet_ = false;
}

std::string SegmentFileDO::getPlayUrl() const
{
    return playUrl_;
}

void SegmentFileDO::setPlayUrl(const std::string& value)
{
    playUrl_ = value;
    playUrlIsSet_ = true;
}

bool SegmentFileDO::playUrlIsSet() const
{
    return playUrlIsSet_;
}

void SegmentFileDO::unsetplayUrl()
{
    playUrlIsSet_ = false;
}

std::string SegmentFileDO::getDownloadUrl() const
{
    return downloadUrl_;
}

void SegmentFileDO::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool SegmentFileDO::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void SegmentFileDO::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

}
}
}
}
}



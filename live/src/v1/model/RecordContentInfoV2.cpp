

#include "huaweicloud/live/v1/model/RecordContentInfoV2.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordContentInfoV2::RecordContentInfoV2()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    recordFormat_ = "";
    recordFormatIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    obsAddrIsSet_ = false;
    vodInfoIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
    startTimeIsSet_ = false;
    endTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
}

RecordContentInfoV2::~RecordContentInfoV2() = default;

void RecordContentInfoV2::validate()
{
}

web::json::value RecordContentInfoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(recordFormatIsSet_) {
        val[utility::conversions::to_string_t("record_format")] = ModelBase::toJson(recordFormat_);
    }
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("record_type")] = ModelBase::toJson(recordType_);
    }
    if(obsAddrIsSet_) {
        val[utility::conversions::to_string_t("obs_addr")] = ModelBase::toJson(obsAddr_);
    }
    if(vodInfoIsSet_) {
        val[utility::conversions::to_string_t("vod_info")] = ModelBase::toJson(vodInfo_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}

bool RecordContentInfoV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_addr"));
        if(!fieldValue.is_null())
        {
            RecordObsFileAddr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_info"));
        if(!fieldValue.is_null())
        {
            VodInfoV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    return ok;
}


std::string RecordContentInfoV2::getPublishDomain() const
{
    return publishDomain_;
}

void RecordContentInfoV2::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordContentInfoV2::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordContentInfoV2::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordContentInfoV2::getFileName() const
{
    return fileName_;
}

void RecordContentInfoV2::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool RecordContentInfoV2::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void RecordContentInfoV2::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string RecordContentInfoV2::getApp() const
{
    return app_;
}

void RecordContentInfoV2::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordContentInfoV2::appIsSet() const
{
    return appIsSet_;
}

void RecordContentInfoV2::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordContentInfoV2::getStream() const
{
    return stream_;
}

void RecordContentInfoV2::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool RecordContentInfoV2::streamIsSet() const
{
    return streamIsSet_;
}

void RecordContentInfoV2::unsetstream()
{
    streamIsSet_ = false;
}

std::string RecordContentInfoV2::getRecordFormat() const
{
    return recordFormat_;
}

void RecordContentInfoV2::setRecordFormat(const std::string& value)
{
    recordFormat_ = value;
    recordFormatIsSet_ = true;
}

bool RecordContentInfoV2::recordFormatIsSet() const
{
    return recordFormatIsSet_;
}

void RecordContentInfoV2::unsetrecordFormat()
{
    recordFormatIsSet_ = false;
}

std::string RecordContentInfoV2::getRecordType() const
{
    return recordType_;
}

void RecordContentInfoV2::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool RecordContentInfoV2::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void RecordContentInfoV2::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

RecordObsFileAddr RecordContentInfoV2::getObsAddr() const
{
    return obsAddr_;
}

void RecordContentInfoV2::setObsAddr(const RecordObsFileAddr& value)
{
    obsAddr_ = value;
    obsAddrIsSet_ = true;
}

bool RecordContentInfoV2::obsAddrIsSet() const
{
    return obsAddrIsSet_;
}

void RecordContentInfoV2::unsetobsAddr()
{
    obsAddrIsSet_ = false;
}

VodInfoV2 RecordContentInfoV2::getVodInfo() const
{
    return vodInfo_;
}

void RecordContentInfoV2::setVodInfo(const VodInfoV2& value)
{
    vodInfo_ = value;
    vodInfoIsSet_ = true;
}

bool RecordContentInfoV2::vodInfoIsSet() const
{
    return vodInfoIsSet_;
}

void RecordContentInfoV2::unsetvodInfo()
{
    vodInfoIsSet_ = false;
}

std::string RecordContentInfoV2::getDownloadUrl() const
{
    return downloadUrl_;
}

void RecordContentInfoV2::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool RecordContentInfoV2::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void RecordContentInfoV2::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

utility::datetime RecordContentInfoV2::getStartTime() const
{
    return startTime_;
}

void RecordContentInfoV2::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RecordContentInfoV2::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RecordContentInfoV2::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime RecordContentInfoV2::getEndTime() const
{
    return endTime_;
}

void RecordContentInfoV2::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RecordContentInfoV2::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RecordContentInfoV2::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t RecordContentInfoV2::getDuration() const
{
    return duration_;
}

void RecordContentInfoV2::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RecordContentInfoV2::durationIsSet() const
{
    return durationIsSet_;
}

void RecordContentInfoV2::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}



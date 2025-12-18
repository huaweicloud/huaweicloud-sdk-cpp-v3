

#include "huaweicloud/meeting/v1/model/CycleSubConf.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CycleSubConf::CycleSubConf()
{
    cycleSubConfID_ = "";
    cycleSubConfIDIsSet_ = false;
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    mediaType_ = "";
    mediaTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    isAutoRecord_ = 0;
    isAutoRecordIsSet_ = false;
    confConfigInfoIsSet_ = false;
    recordAuthType_ = 0;
    recordAuthTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CycleSubConf::~CycleSubConf() = default;

void CycleSubConf::validate()
{
}

web::json::value CycleSubConf::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cycleSubConfIDIsSet_) {
        val[utility::conversions::to_string_t("cycleSubConfID")] = ModelBase::toJson(cycleSubConfID_);
    }
    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(mediaTypeIsSet_) {
        val[utility::conversions::to_string_t("mediaType")] = ModelBase::toJson(mediaType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(isAutoRecordIsSet_) {
        val[utility::conversions::to_string_t("isAutoRecord")] = ModelBase::toJson(isAutoRecord_);
    }
    if(confConfigInfoIsSet_) {
        val[utility::conversions::to_string_t("confConfigInfo")] = ModelBase::toJson(confConfigInfo_);
    }
    if(recordAuthTypeIsSet_) {
        val[utility::conversions::to_string_t("recordAuthType")] = ModelBase::toJson(recordAuthType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CycleSubConf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cycleSubConfID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycleSubConfID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycleSubConfID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mediaType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confConfigInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confConfigInfo"));
        if(!fieldValue.is_null())
        {
            CycleSubConfConfigDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfConfigInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordAuthType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuthType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CycleSubConf::getCycleSubConfID() const
{
    return cycleSubConfID_;
}

void CycleSubConf::setCycleSubConfID(const std::string& value)
{
    cycleSubConfID_ = value;
    cycleSubConfIDIsSet_ = true;
}

bool CycleSubConf::cycleSubConfIDIsSet() const
{
    return cycleSubConfIDIsSet_;
}

void CycleSubConf::unsetcycleSubConfID()
{
    cycleSubConfIDIsSet_ = false;
}

std::string CycleSubConf::getConferenceID() const
{
    return conferenceID_;
}

void CycleSubConf::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CycleSubConf::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CycleSubConf::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string CycleSubConf::getMediaType() const
{
    return mediaType_;
}

void CycleSubConf::setMediaType(const std::string& value)
{
    mediaType_ = value;
    mediaTypeIsSet_ = true;
}

bool CycleSubConf::mediaTypeIsSet() const
{
    return mediaTypeIsSet_;
}

void CycleSubConf::unsetmediaType()
{
    mediaTypeIsSet_ = false;
}

std::string CycleSubConf::getStartTime() const
{
    return startTime_;
}

void CycleSubConf::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CycleSubConf::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CycleSubConf::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CycleSubConf::getEndTime() const
{
    return endTime_;
}

void CycleSubConf::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CycleSubConf::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CycleSubConf::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t CycleSubConf::getIsAutoRecord() const
{
    return isAutoRecord_;
}

void CycleSubConf::setIsAutoRecord(int32_t value)
{
    isAutoRecord_ = value;
    isAutoRecordIsSet_ = true;
}

bool CycleSubConf::isAutoRecordIsSet() const
{
    return isAutoRecordIsSet_;
}

void CycleSubConf::unsetisAutoRecord()
{
    isAutoRecordIsSet_ = false;
}

CycleSubConfConfigDTO CycleSubConf::getConfConfigInfo() const
{
    return confConfigInfo_;
}

void CycleSubConf::setConfConfigInfo(const CycleSubConfConfigDTO& value)
{
    confConfigInfo_ = value;
    confConfigInfoIsSet_ = true;
}

bool CycleSubConf::confConfigInfoIsSet() const
{
    return confConfigInfoIsSet_;
}

void CycleSubConf::unsetconfConfigInfo()
{
    confConfigInfoIsSet_ = false;
}

int32_t CycleSubConf::getRecordAuthType() const
{
    return recordAuthType_;
}

void CycleSubConf::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool CycleSubConf::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void CycleSubConf::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

std::string CycleSubConf::getDescription() const
{
    return description_;
}

void CycleSubConf::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CycleSubConf::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CycleSubConf::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



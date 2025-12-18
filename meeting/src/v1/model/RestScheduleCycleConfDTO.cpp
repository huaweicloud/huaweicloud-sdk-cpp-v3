

#include "huaweicloud/meeting/v1/model/RestScheduleCycleConfDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestScheduleCycleConfDTO::RestScheduleCycleConfDTO()
{
    cycleSubConfID_ = "";
    cycleSubConfIDIsSet_ = false;
    mediaTypes_ = "";
    mediaTypesIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
    isAutoRecord_ = 0;
    isAutoRecordIsSet_ = false;
    confConfigInfoIsSet_ = false;
    recordAuthType_ = 0;
    recordAuthTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

RestScheduleCycleConfDTO::~RestScheduleCycleConfDTO() = default;

void RestScheduleCycleConfDTO::validate()
{
}

web::json::value RestScheduleCycleConfDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cycleSubConfIDIsSet_) {
        val[utility::conversions::to_string_t("cycleSubConfID")] = ModelBase::toJson(cycleSubConfID_);
    }
    if(mediaTypesIsSet_) {
        val[utility::conversions::to_string_t("mediaTypes")] = ModelBase::toJson(mediaTypes_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
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
bool RestScheduleCycleConfDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mediaTypes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaTypes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaTypes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
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


std::string RestScheduleCycleConfDTO::getCycleSubConfID() const
{
    return cycleSubConfID_;
}

void RestScheduleCycleConfDTO::setCycleSubConfID(const std::string& value)
{
    cycleSubConfID_ = value;
    cycleSubConfIDIsSet_ = true;
}

bool RestScheduleCycleConfDTO::cycleSubConfIDIsSet() const
{
    return cycleSubConfIDIsSet_;
}

void RestScheduleCycleConfDTO::unsetcycleSubConfID()
{
    cycleSubConfIDIsSet_ = false;
}

std::string RestScheduleCycleConfDTO::getMediaTypes() const
{
    return mediaTypes_;
}

void RestScheduleCycleConfDTO::setMediaTypes(const std::string& value)
{
    mediaTypes_ = value;
    mediaTypesIsSet_ = true;
}

bool RestScheduleCycleConfDTO::mediaTypesIsSet() const
{
    return mediaTypesIsSet_;
}

void RestScheduleCycleConfDTO::unsetmediaTypes()
{
    mediaTypesIsSet_ = false;
}

std::string RestScheduleCycleConfDTO::getStartTime() const
{
    return startTime_;
}

void RestScheduleCycleConfDTO::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RestScheduleCycleConfDTO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RestScheduleCycleConfDTO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t RestScheduleCycleConfDTO::getLength() const
{
    return length_;
}

void RestScheduleCycleConfDTO::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool RestScheduleCycleConfDTO::lengthIsSet() const
{
    return lengthIsSet_;
}

void RestScheduleCycleConfDTO::unsetlength()
{
    lengthIsSet_ = false;
}

int32_t RestScheduleCycleConfDTO::getIsAutoRecord() const
{
    return isAutoRecord_;
}

void RestScheduleCycleConfDTO::setIsAutoRecord(int32_t value)
{
    isAutoRecord_ = value;
    isAutoRecordIsSet_ = true;
}

bool RestScheduleCycleConfDTO::isAutoRecordIsSet() const
{
    return isAutoRecordIsSet_;
}

void RestScheduleCycleConfDTO::unsetisAutoRecord()
{
    isAutoRecordIsSet_ = false;
}

CycleSubConfConfigDTO RestScheduleCycleConfDTO::getConfConfigInfo() const
{
    return confConfigInfo_;
}

void RestScheduleCycleConfDTO::setConfConfigInfo(const CycleSubConfConfigDTO& value)
{
    confConfigInfo_ = value;
    confConfigInfoIsSet_ = true;
}

bool RestScheduleCycleConfDTO::confConfigInfoIsSet() const
{
    return confConfigInfoIsSet_;
}

void RestScheduleCycleConfDTO::unsetconfConfigInfo()
{
    confConfigInfoIsSet_ = false;
}

int32_t RestScheduleCycleConfDTO::getRecordAuthType() const
{
    return recordAuthType_;
}

void RestScheduleCycleConfDTO::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool RestScheduleCycleConfDTO::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void RestScheduleCycleConfDTO::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

std::string RestScheduleCycleConfDTO::getDescription() const
{
    return description_;
}

void RestScheduleCycleConfDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RestScheduleCycleConfDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RestScheduleCycleConfDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}



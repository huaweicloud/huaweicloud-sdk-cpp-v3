

#include "huaweicloud/live/v1/model/StreamForbiddenList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




StreamForbiddenList::StreamForbiddenList()
{
    appName_ = "";
    appNameIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    resumeTime_ = "";
    resumeTimeIsSet_ = false;
}

StreamForbiddenList::~StreamForbiddenList() = default;

void StreamForbiddenList::validate()
{
}

web::json::value StreamForbiddenList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(resumeTimeIsSet_) {
        val[utility::conversions::to_string_t("resume_time")] = ModelBase::toJson(resumeTime_);
    }

    return val;
}

bool StreamForbiddenList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resume_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resume_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResumeTime(refVal);
        }
    }
    return ok;
}


std::string StreamForbiddenList::getAppName() const
{
    return appName_;
}

void StreamForbiddenList::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool StreamForbiddenList::appNameIsSet() const
{
    return appNameIsSet_;
}

void StreamForbiddenList::unsetappName()
{
    appNameIsSet_ = false;
}

std::string StreamForbiddenList::getStreamName() const
{
    return streamName_;
}

void StreamForbiddenList::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool StreamForbiddenList::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void StreamForbiddenList::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string StreamForbiddenList::getResumeTime() const
{
    return resumeTime_;
}

void StreamForbiddenList::setResumeTime(const std::string& value)
{
    resumeTime_ = value;
    resumeTimeIsSet_ = true;
}

bool StreamForbiddenList::resumeTimeIsSet() const
{
    return resumeTimeIsSet_;
}

void StreamForbiddenList::unsetresumeTime()
{
    resumeTimeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/live/v1/model/StreamForbiddenSetting.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




StreamForbiddenSetting::StreamForbiddenSetting()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    resumeTime_ = utility::datetime();
    resumeTimeIsSet_ = false;
}

StreamForbiddenSetting::~StreamForbiddenSetting() = default;

void StreamForbiddenSetting::validate()
{
}

web::json::value StreamForbiddenSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
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

bool StreamForbiddenSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
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
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResumeTime(refVal);
        }
    }
    return ok;
}


std::string StreamForbiddenSetting::getDomain() const
{
    return domain_;
}

void StreamForbiddenSetting::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool StreamForbiddenSetting::domainIsSet() const
{
    return domainIsSet_;
}

void StreamForbiddenSetting::unsetdomain()
{
    domainIsSet_ = false;
}

std::string StreamForbiddenSetting::getAppName() const
{
    return appName_;
}

void StreamForbiddenSetting::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool StreamForbiddenSetting::appNameIsSet() const
{
    return appNameIsSet_;
}

void StreamForbiddenSetting::unsetappName()
{
    appNameIsSet_ = false;
}

std::string StreamForbiddenSetting::getStreamName() const
{
    return streamName_;
}

void StreamForbiddenSetting::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool StreamForbiddenSetting::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void StreamForbiddenSetting::unsetstreamName()
{
    streamNameIsSet_ = false;
}

utility::datetime StreamForbiddenSetting::getResumeTime() const
{
    return resumeTime_;
}

void StreamForbiddenSetting::setResumeTime(const utility::datetime& value)
{
    resumeTime_ = value;
    resumeTimeIsSet_ = true;
}

bool StreamForbiddenSetting::resumeTimeIsSet() const
{
    return resumeTimeIsSet_;
}

void StreamForbiddenSetting::unsetresumeTime()
{
    resumeTimeIsSet_ = false;
}

}
}
}
}
}



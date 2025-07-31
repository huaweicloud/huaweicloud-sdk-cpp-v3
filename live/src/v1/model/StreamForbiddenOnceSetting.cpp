

#include "huaweicloud/live/v1/model/StreamForbiddenOnceSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




StreamForbiddenOnceSetting::StreamForbiddenOnceSetting()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
}

StreamForbiddenOnceSetting::~StreamForbiddenOnceSetting() = default;

void StreamForbiddenOnceSetting::validate()
{
}

web::json::value StreamForbiddenOnceSetting::toJson() const
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

    return val;
}
bool StreamForbiddenOnceSetting::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StreamForbiddenOnceSetting::getDomain() const
{
    return domain_;
}

void StreamForbiddenOnceSetting::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool StreamForbiddenOnceSetting::domainIsSet() const
{
    return domainIsSet_;
}

void StreamForbiddenOnceSetting::unsetdomain()
{
    domainIsSet_ = false;
}

std::string StreamForbiddenOnceSetting::getAppName() const
{
    return appName_;
}

void StreamForbiddenOnceSetting::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool StreamForbiddenOnceSetting::appNameIsSet() const
{
    return appNameIsSet_;
}

void StreamForbiddenOnceSetting::unsetappName()
{
    appNameIsSet_ = false;
}

std::string StreamForbiddenOnceSetting::getStreamName() const
{
    return streamName_;
}

void StreamForbiddenOnceSetting::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool StreamForbiddenOnceSetting::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void StreamForbiddenOnceSetting::unsetstreamName()
{
    streamNameIsSet_ = false;
}

}
}
}
}
}



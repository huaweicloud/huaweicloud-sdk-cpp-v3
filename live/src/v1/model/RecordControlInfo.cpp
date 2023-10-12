

#include "huaweicloud/live/v1/model/RecordControlInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordControlInfo::RecordControlInfo()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
}

RecordControlInfo::~RecordControlInfo() = default;

void RecordControlInfo::validate()
{
}

web::json::value RecordControlInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }

    return val;
}
bool RecordControlInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RecordControlInfo::getPublishDomain() const
{
    return publishDomain_;
}

void RecordControlInfo::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordControlInfo::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordControlInfo::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordControlInfo::getApp() const
{
    return app_;
}

void RecordControlInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordControlInfo::appIsSet() const
{
    return appIsSet_;
}

void RecordControlInfo::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordControlInfo::getStream() const
{
    return stream_;
}

void RecordControlInfo::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool RecordControlInfo::streamIsSet() const
{
    return streamIsSet_;
}

void RecordControlInfo::unsetstream()
{
    streamIsSet_ = false;
}

}
}
}
}
}



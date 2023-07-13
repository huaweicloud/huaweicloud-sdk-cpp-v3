

#include "huaweicloud/live/v1/model/RecordIndexRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordIndexRequestBody::RecordIndexRequestBody()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
}

RecordIndexRequestBody::~RecordIndexRequestBody() = default;

void RecordIndexRequestBody::validate()
{
}

web::json::value RecordIndexRequestBody::toJson() const
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }

    return val;
}

bool RecordIndexRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    return ok;
}

std::string RecordIndexRequestBody::getPublishDomain() const
{
    return publishDomain_;
}

void RecordIndexRequestBody::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordIndexRequestBody::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordIndexRequestBody::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordIndexRequestBody::getApp() const
{
    return app_;
}

void RecordIndexRequestBody::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordIndexRequestBody::appIsSet() const
{
    return appIsSet_;
}

void RecordIndexRequestBody::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordIndexRequestBody::getStream() const
{
    return stream_;
}

void RecordIndexRequestBody::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool RecordIndexRequestBody::streamIsSet() const
{
    return streamIsSet_;
}

void RecordIndexRequestBody::unsetstream()
{
    streamIsSet_ = false;
}

utility::datetime RecordIndexRequestBody::getStartTime() const
{
    return startTime_;
}

void RecordIndexRequestBody::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RecordIndexRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RecordIndexRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime RecordIndexRequestBody::getEndTime() const
{
    return endTime_;
}

void RecordIndexRequestBody::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RecordIndexRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RecordIndexRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string RecordIndexRequestBody::getObject() const
{
    return object_;
}

void RecordIndexRequestBody::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool RecordIndexRequestBody::objectIsSet() const
{
    return objectIsSet_;
}

void RecordIndexRequestBody::unsetobject()
{
    objectIsSet_ = false;
}

}
}
}
}
}



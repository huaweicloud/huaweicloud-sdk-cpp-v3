

#include "huaweicloud/live/v1/model/CreateRecordIndexResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordIndexResponse::CreateRecordIndexResponse()
{
    indexUrl_ = "";
    indexUrlIsSet_ = false;
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
    duration_ = 0;
    durationIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateRecordIndexResponse::~CreateRecordIndexResponse() = default;

void CreateRecordIndexResponse::validate()
{
}

web::json::value CreateRecordIndexResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(indexUrlIsSet_) {
        val[utility::conversions::to_string_t("index_url")] = ModelBase::toJson(indexUrl_);
    }
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
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool CreateRecordIndexResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("index_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexUrl(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateRecordIndexResponse::getIndexUrl() const
{
    return indexUrl_;
}

void CreateRecordIndexResponse::setIndexUrl(const std::string& value)
{
    indexUrl_ = value;
    indexUrlIsSet_ = true;
}

bool CreateRecordIndexResponse::indexUrlIsSet() const
{
    return indexUrlIsSet_;
}

void CreateRecordIndexResponse::unsetindexUrl()
{
    indexUrlIsSet_ = false;
}

std::string CreateRecordIndexResponse::getPublishDomain() const
{
    return publishDomain_;
}

void CreateRecordIndexResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool CreateRecordIndexResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void CreateRecordIndexResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string CreateRecordIndexResponse::getApp() const
{
    return app_;
}

void CreateRecordIndexResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateRecordIndexResponse::appIsSet() const
{
    return appIsSet_;
}

void CreateRecordIndexResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateRecordIndexResponse::getStream() const
{
    return stream_;
}

void CreateRecordIndexResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateRecordIndexResponse::streamIsSet() const
{
    return streamIsSet_;
}

void CreateRecordIndexResponse::unsetstream()
{
    streamIsSet_ = false;
}

utility::datetime CreateRecordIndexResponse::getStartTime() const
{
    return startTime_;
}

void CreateRecordIndexResponse::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateRecordIndexResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateRecordIndexResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime CreateRecordIndexResponse::getEndTime() const
{
    return endTime_;
}

void CreateRecordIndexResponse::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CreateRecordIndexResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CreateRecordIndexResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t CreateRecordIndexResponse::getDuration() const
{
    return duration_;
}

void CreateRecordIndexResponse::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CreateRecordIndexResponse::durationIsSet() const
{
    return durationIsSet_;
}

void CreateRecordIndexResponse::unsetduration()
{
    durationIsSet_ = false;
}

int32_t CreateRecordIndexResponse::getWidth() const
{
    return width_;
}

void CreateRecordIndexResponse::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool CreateRecordIndexResponse::widthIsSet() const
{
    return widthIsSet_;
}

void CreateRecordIndexResponse::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t CreateRecordIndexResponse::getHeight() const
{
    return height_;
}

void CreateRecordIndexResponse::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool CreateRecordIndexResponse::heightIsSet() const
{
    return heightIsSet_;
}

void CreateRecordIndexResponse::unsetheight()
{
    heightIsSet_ = false;
}

std::string CreateRecordIndexResponse::getLocation() const
{
    return location_;
}

void CreateRecordIndexResponse::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool CreateRecordIndexResponse::locationIsSet() const
{
    return locationIsSet_;
}

void CreateRecordIndexResponse::unsetlocation()
{
    locationIsSet_ = false;
}

std::string CreateRecordIndexResponse::getBucket() const
{
    return bucket_;
}

void CreateRecordIndexResponse::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool CreateRecordIndexResponse::bucketIsSet() const
{
    return bucketIsSet_;
}

void CreateRecordIndexResponse::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string CreateRecordIndexResponse::getObject() const
{
    return object_;
}

void CreateRecordIndexResponse::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool CreateRecordIndexResponse::objectIsSet() const
{
    return objectIsSet_;
}

void CreateRecordIndexResponse::unsetobject()
{
    objectIsSet_ = false;
}

std::string CreateRecordIndexResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateRecordIndexResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateRecordIndexResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateRecordIndexResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



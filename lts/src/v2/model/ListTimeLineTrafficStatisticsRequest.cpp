

#include "huaweicloud/lts/v2/model/ListTimeLineTrafficStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTimeLineTrafficStatisticsRequest::ListTimeLineTrafficStatisticsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    bodyIsSet_ = false;
}

ListTimeLineTrafficStatisticsRequest::~ListTimeLineTrafficStatisticsRequest() = default;

void ListTimeLineTrafficStatisticsRequest::validate()
{
}

web::json::value ListTimeLineTrafficStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTimeLineTrafficStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TimelineTrafficStatisticsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTimeLineTrafficStatisticsRequest::getContentType() const
{
    return contentType_;
}

void ListTimeLineTrafficStatisticsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListTimeLineTrafficStatisticsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListTimeLineTrafficStatisticsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListTimeLineTrafficStatisticsRequest::getTimezone() const
{
    return timezone_;
}

void ListTimeLineTrafficStatisticsRequest::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool ListTimeLineTrafficStatisticsRequest::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void ListTimeLineTrafficStatisticsRequest::unsettimezone()
{
    timezoneIsSet_ = false;
}

TimelineTrafficStatisticsRequestBody ListTimeLineTrafficStatisticsRequest::getBody() const
{
    return body_;
}

void ListTimeLineTrafficStatisticsRequest::setBody(const TimelineTrafficStatisticsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTimeLineTrafficStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTimeLineTrafficStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}



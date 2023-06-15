

#include "huaweicloud/live/v2/model/ShowStreamPortraitResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ShowStreamPortraitResponse::ShowStreamPortraitResponse()
{
    streamPortraitsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowStreamPortraitResponse::~ShowStreamPortraitResponse() = default;

void ShowStreamPortraitResponse::validate()
{
}

web::json::value ShowStreamPortraitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(streamPortraitsIsSet_) {
        val[utility::conversions::to_string_t("stream_portraits")] = ModelBase::toJson(streamPortraits_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ShowStreamPortraitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stream_portraits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_portraits"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamPortrait> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamPortraits(refVal);
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


std::vector<StreamPortrait>& ShowStreamPortraitResponse::getStreamPortraits()
{
    return streamPortraits_;
}

void ShowStreamPortraitResponse::setStreamPortraits(const std::vector<StreamPortrait>& value)
{
    streamPortraits_ = value;
    streamPortraitsIsSet_ = true;
}

bool ShowStreamPortraitResponse::streamPortraitsIsSet() const
{
    return streamPortraitsIsSet_;
}

void ShowStreamPortraitResponse::unsetstreamPortraits()
{
    streamPortraitsIsSet_ = false;
}

std::string ShowStreamPortraitResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowStreamPortraitResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowStreamPortraitResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowStreamPortraitResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/frs/v2/model/DetectLiveByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlResponse::DetectLiveByUrlResponse()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectLiveByUrlResponse::~DetectLiveByUrlResponse() = default;

void DetectLiveByUrlResponse::validate()
{
}

web::json::value DetectLiveByUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoResultIsSet_) {
        val[utility::conversions::to_string_t("video-result")] = ModelBase::toJson(videoResult_);
    }
    if(warningListIsSet_) {
        val[utility::conversions::to_string_t("warning-list")] = ModelBase::toJson(warningList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DetectLiveByUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video-result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video-result"));
        if(!fieldValue.is_null())
        {
            LiveDetectResp_videoresult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warning-list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning-list"));
        if(!fieldValue.is_null())
        {
            std::vector<WarningList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningList(refVal);
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


LiveDetectResp_videoresult DetectLiveByUrlResponse::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByUrlResponse::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByUrlResponse::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByUrlResponse::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByUrlResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveByUrlResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByUrlResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByUrlResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

std::string DetectLiveByUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectLiveByUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectLiveByUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectLiveByUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



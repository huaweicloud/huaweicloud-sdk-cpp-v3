

#include "huaweicloud/frs/v2/model/DetectLiveByUrlIntlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlIntlResponse::DetectLiveByUrlIntlResponse()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectLiveByUrlIntlResponse::~DetectLiveByUrlIntlResponse() = default;

void DetectLiveByUrlIntlResponse::validate()
{
}

web::json::value DetectLiveByUrlIntlResponse::toJson() const
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
bool DetectLiveByUrlIntlResponse::fromJson(const web::json::value& val)
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


LiveDetectResp_videoresult DetectLiveByUrlIntlResponse::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByUrlIntlResponse::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByUrlIntlResponse::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByUrlIntlResponse::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByUrlIntlResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveByUrlIntlResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByUrlIntlResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByUrlIntlResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

std::string DetectLiveByUrlIntlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectLiveByUrlIntlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectLiveByUrlIntlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectLiveByUrlIntlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



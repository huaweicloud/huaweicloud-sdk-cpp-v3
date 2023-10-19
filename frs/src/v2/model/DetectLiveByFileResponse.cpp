

#include "huaweicloud/frs/v2/model/DetectLiveByFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileResponse::DetectLiveByFileResponse()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectLiveByFileResponse::~DetectLiveByFileResponse() = default;

void DetectLiveByFileResponse::validate()
{
}

web::json::value DetectLiveByFileResponse::toJson() const
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
bool DetectLiveByFileResponse::fromJson(const web::json::value& val)
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


LiveDetectResp_videoresult DetectLiveByFileResponse::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByFileResponse::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByFileResponse::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByFileResponse::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByFileResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveByFileResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByFileResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByFileResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

std::string DetectLiveByFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectLiveByFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectLiveByFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectLiveByFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



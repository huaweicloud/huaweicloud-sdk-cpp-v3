

#include "huaweicloud/frs/v2/model/DetectLiveByBase64IntlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByBase64IntlResponse::DetectLiveByBase64IntlResponse()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectLiveByBase64IntlResponse::~DetectLiveByBase64IntlResponse() = default;

void DetectLiveByBase64IntlResponse::validate()
{
}

web::json::value DetectLiveByBase64IntlResponse::toJson() const
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
bool DetectLiveByBase64IntlResponse::fromJson(const web::json::value& val)
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


LiveDetectResp_videoresult DetectLiveByBase64IntlResponse::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByBase64IntlResponse::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByBase64IntlResponse::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByBase64IntlResponse::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByBase64IntlResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveByBase64IntlResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByBase64IntlResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByBase64IntlResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

std::string DetectLiveByBase64IntlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectLiveByBase64IntlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectLiveByBase64IntlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectLiveByBase64IntlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/frs/v2/model/DetectLiveByBase64Response.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByBase64Response::DetectLiveByBase64Response()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
}

DetectLiveByBase64Response::~DetectLiveByBase64Response() = default;

void DetectLiveByBase64Response::validate()
{
}

web::json::value DetectLiveByBase64Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoResultIsSet_) {
        val[utility::conversions::to_string_t("video-result")] = ModelBase::toJson(videoResult_);
    }
    if(warningListIsSet_) {
        val[utility::conversions::to_string_t("warning-list")] = ModelBase::toJson(warningList_);
    }

    return val;
}

bool DetectLiveByBase64Response::fromJson(const web::json::value& val)
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
    return ok;
}

LiveDetectResp_videoresult DetectLiveByBase64Response::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByBase64Response::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByBase64Response::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByBase64Response::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByBase64Response::getWarningList()
{
    return warningList_;
}

void DetectLiveByBase64Response::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByBase64Response::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByBase64Response::unsetwarningList()
{
    warningListIsSet_ = false;
}

}
}
}
}
}



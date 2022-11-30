

#include "huaweicloud/frs/v2/model/DetectLiveByFileIntlResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByFileIntlResponse::DetectLiveByFileIntlResponse()
{
    videoResultIsSet_ = false;
    warningListIsSet_ = false;
}

DetectLiveByFileIntlResponse::~DetectLiveByFileIntlResponse() = default;

void DetectLiveByFileIntlResponse::validate()
{
}

web::json::value DetectLiveByFileIntlResponse::toJson() const
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

bool DetectLiveByFileIntlResponse::fromJson(const web::json::value& val)
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


LiveDetectResp_videoresult DetectLiveByFileIntlResponse::getVideoResult() const
{
    return videoResult_;
}

void DetectLiveByFileIntlResponse::setVideoResult(const LiveDetectResp_videoresult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool DetectLiveByFileIntlResponse::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void DetectLiveByFileIntlResponse::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveByFileIntlResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveByFileIntlResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveByFileIntlResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveByFileIntlResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

}
}
}
}
}



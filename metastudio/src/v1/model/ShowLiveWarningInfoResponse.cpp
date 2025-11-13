

#include "huaweicloud/metastudio/v1/model/ShowLiveWarningInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowLiveWarningInfoResponse::ShowLiveWarningInfoResponse()
{
    liveWarningInfoIsSet_ = false;
    limitDuration_ = 0;
    limitDurationIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowLiveWarningInfoResponse::~ShowLiveWarningInfoResponse() = default;

void ShowLiveWarningInfoResponse::validate()
{
}

web::json::value ShowLiveWarningInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(liveWarningInfoIsSet_) {
        val[utility::conversions::to_string_t("live_warning_info")] = ModelBase::toJson(liveWarningInfo_);
    }
    if(limitDurationIsSet_) {
        val[utility::conversions::to_string_t("limit_duration")] = ModelBase::toJson(limitDuration_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowLiveWarningInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("live_warning_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_warning_info"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveWarningItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveWarningInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitDuration(refVal);
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


std::vector<LiveWarningItem>& ShowLiveWarningInfoResponse::getLiveWarningInfo()
{
    return liveWarningInfo_;
}

void ShowLiveWarningInfoResponse::setLiveWarningInfo(const std::vector<LiveWarningItem>& value)
{
    liveWarningInfo_ = value;
    liveWarningInfoIsSet_ = true;
}

bool ShowLiveWarningInfoResponse::liveWarningInfoIsSet() const
{
    return liveWarningInfoIsSet_;
}

void ShowLiveWarningInfoResponse::unsetliveWarningInfo()
{
    liveWarningInfoIsSet_ = false;
}

int32_t ShowLiveWarningInfoResponse::getLimitDuration() const
{
    return limitDuration_;
}

void ShowLiveWarningInfoResponse::setLimitDuration(int32_t value)
{
    limitDuration_ = value;
    limitDurationIsSet_ = true;
}

bool ShowLiveWarningInfoResponse::limitDurationIsSet() const
{
    return limitDurationIsSet_;
}

void ShowLiveWarningInfoResponse::unsetlimitDuration()
{
    limitDurationIsSet_ = false;
}

std::string ShowLiveWarningInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowLiveWarningInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowLiveWarningInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowLiveWarningInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



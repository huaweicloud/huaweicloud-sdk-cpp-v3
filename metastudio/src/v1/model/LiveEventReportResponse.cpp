

#include "huaweicloud/metastudio/v1/model/LiveEventReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveEventReportResponse::LiveEventReportResponse()
{
    liveEventReportUrl_ = "";
    liveEventReportUrlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

LiveEventReportResponse::~LiveEventReportResponse() = default;

void LiveEventReportResponse::validate()
{
}

web::json::value LiveEventReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(liveEventReportUrlIsSet_) {
        val[utility::conversions::to_string_t("live_event_report_url")] = ModelBase::toJson(liveEventReportUrl_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool LiveEventReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("live_event_report_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_report_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventReportUrl(refVal);
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


std::string LiveEventReportResponse::getLiveEventReportUrl() const
{
    return liveEventReportUrl_;
}

void LiveEventReportResponse::setLiveEventReportUrl(const std::string& value)
{
    liveEventReportUrl_ = value;
    liveEventReportUrlIsSet_ = true;
}

bool LiveEventReportResponse::liveEventReportUrlIsSet() const
{
    return liveEventReportUrlIsSet_;
}

void LiveEventReportResponse::unsetliveEventReportUrl()
{
    liveEventReportUrlIsSet_ = false;
}

std::string LiveEventReportResponse::getXRequestId() const
{
    return xRequestId_;
}

void LiveEventReportResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool LiveEventReportResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void LiveEventReportResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



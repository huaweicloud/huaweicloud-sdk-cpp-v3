

#include "huaweicloud/metastudio/v1/model/CreateVideoMotionCaptureJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateVideoMotionCaptureJobResponse::CreateVideoMotionCaptureJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    rtcRoomInfoIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateVideoMotionCaptureJobResponse::~CreateVideoMotionCaptureJobResponse() = default;

void CreateVideoMotionCaptureJobResponse::validate()
{
}

web::json::value CreateVideoMotionCaptureJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(rtcRoomInfoIsSet_) {
        val[utility::conversions::to_string_t("rtc_room_info")] = ModelBase::toJson(rtcRoomInfo_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateVideoMotionCaptureJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rtc_room_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_room_info"));
        if(!fieldValue.is_null())
        {
            RTCRoomInfoList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcRoomInfo(refVal);
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


std::string CreateVideoMotionCaptureJobResponse::getJobId() const
{
    return jobId_;
}

void CreateVideoMotionCaptureJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateVideoMotionCaptureJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateVideoMotionCaptureJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

RTCRoomInfoList CreateVideoMotionCaptureJobResponse::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void CreateVideoMotionCaptureJobResponse::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool CreateVideoMotionCaptureJobResponse::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void CreateVideoMotionCaptureJobResponse::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

std::string CreateVideoMotionCaptureJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateVideoMotionCaptureJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateVideoMotionCaptureJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateVideoMotionCaptureJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



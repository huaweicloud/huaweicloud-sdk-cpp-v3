

#include "huaweicloud/metastudio/v1/model/ListVideoMotionCaptureJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVideoMotionCaptureJobsResponse::ListVideoMotionCaptureJobsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    videoMotionCaptureJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListVideoMotionCaptureJobsResponse::~ListVideoMotionCaptureJobsResponse() = default;

void ListVideoMotionCaptureJobsResponse::validate()
{
}

web::json::value ListVideoMotionCaptureJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(videoMotionCaptureJobsIsSet_) {
        val[utility::conversions::to_string_t("video_motion_capture_jobs")] = ModelBase::toJson(videoMotionCaptureJobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListVideoMotionCaptureJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_motion_capture_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_motion_capture_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoMotionCaptureInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMotionCaptureJobs(refVal);
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


int32_t ListVideoMotionCaptureJobsResponse::getTotal() const
{
    return total_;
}

void ListVideoMotionCaptureJobsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListVideoMotionCaptureJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListVideoMotionCaptureJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<VideoMotionCaptureInfo>& ListVideoMotionCaptureJobsResponse::getVideoMotionCaptureJobs()
{
    return videoMotionCaptureJobs_;
}

void ListVideoMotionCaptureJobsResponse::setVideoMotionCaptureJobs(const std::vector<VideoMotionCaptureInfo>& value)
{
    videoMotionCaptureJobs_ = value;
    videoMotionCaptureJobsIsSet_ = true;
}

bool ListVideoMotionCaptureJobsResponse::videoMotionCaptureJobsIsSet() const
{
    return videoMotionCaptureJobsIsSet_;
}

void ListVideoMotionCaptureJobsResponse::unsetvideoMotionCaptureJobs()
{
    videoMotionCaptureJobsIsSet_ = false;
}

std::string ListVideoMotionCaptureJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListVideoMotionCaptureJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListVideoMotionCaptureJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListVideoMotionCaptureJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



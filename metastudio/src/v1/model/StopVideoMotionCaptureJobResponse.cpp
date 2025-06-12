

#include "huaweicloud/metastudio/v1/model/StopVideoMotionCaptureJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StopVideoMotionCaptureJobResponse::StopVideoMotionCaptureJobResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StopVideoMotionCaptureJobResponse::~StopVideoMotionCaptureJobResponse() = default;

void StopVideoMotionCaptureJobResponse::validate()
{
}

web::json::value StopVideoMotionCaptureJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StopVideoMotionCaptureJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string StopVideoMotionCaptureJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void StopVideoMotionCaptureJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StopVideoMotionCaptureJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StopVideoMotionCaptureJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



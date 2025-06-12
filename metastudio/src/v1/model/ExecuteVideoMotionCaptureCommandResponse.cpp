

#include "huaweicloud/metastudio/v1/model/ExecuteVideoMotionCaptureCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteVideoMotionCaptureCommandResponse::ExecuteVideoMotionCaptureCommandResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ExecuteVideoMotionCaptureCommandResponse::~ExecuteVideoMotionCaptureCommandResponse() = default;

void ExecuteVideoMotionCaptureCommandResponse::validate()
{
}

web::json::value ExecuteVideoMotionCaptureCommandResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ExecuteVideoMotionCaptureCommandResponse::fromJson(const web::json::value& val)
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


std::string ExecuteVideoMotionCaptureCommandResponse::getXRequestId() const
{
    return xRequestId_;
}

void ExecuteVideoMotionCaptureCommandResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ExecuteVideoMotionCaptureCommandResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



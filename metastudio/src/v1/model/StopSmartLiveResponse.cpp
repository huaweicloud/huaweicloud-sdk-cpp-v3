

#include "huaweicloud/metastudio/v1/model/StopSmartLiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StopSmartLiveResponse::StopSmartLiveResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StopSmartLiveResponse::~StopSmartLiveResponse() = default;

void StopSmartLiveResponse::validate()
{
}

web::json::value StopSmartLiveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StopSmartLiveResponse::fromJson(const web::json::value& val)
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


std::string StopSmartLiveResponse::getXRequestId() const
{
    return xRequestId_;
}

void StopSmartLiveResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StopSmartLiveResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StopSmartLiveResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/StopSmartChatJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StopSmartChatJobResponse::StopSmartChatJobResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StopSmartChatJobResponse::~StopSmartChatJobResponse() = default;

void StopSmartChatJobResponse::validate()
{
}

web::json::value StopSmartChatJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StopSmartChatJobResponse::fromJson(const web::json::value& val)
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


std::string StopSmartChatJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void StopSmartChatJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StopSmartChatJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StopSmartChatJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



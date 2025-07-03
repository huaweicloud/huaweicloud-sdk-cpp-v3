

#include "huaweicloud/ecs/v2/model/AcceptScheduledEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AcceptScheduledEventResponse::AcceptScheduledEventResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AcceptScheduledEventResponse::~AcceptScheduledEventResponse() = default;

void AcceptScheduledEventResponse::validate()
{
}

web::json::value AcceptScheduledEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AcceptScheduledEventResponse::fromJson(const web::json::value& val)
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


std::string AcceptScheduledEventResponse::getXRequestId() const
{
    return xRequestId_;
}

void AcceptScheduledEventResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AcceptScheduledEventResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AcceptScheduledEventResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



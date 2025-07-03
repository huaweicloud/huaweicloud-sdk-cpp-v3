

#include "huaweicloud/ecs/v2/model/UpdateScheduledEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateScheduledEventResponse::UpdateScheduledEventResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateScheduledEventResponse::~UpdateScheduledEventResponse() = default;

void UpdateScheduledEventResponse::validate()
{
}

web::json::value UpdateScheduledEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateScheduledEventResponse::fromJson(const web::json::value& val)
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


std::string UpdateScheduledEventResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateScheduledEventResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateScheduledEventResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateScheduledEventResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



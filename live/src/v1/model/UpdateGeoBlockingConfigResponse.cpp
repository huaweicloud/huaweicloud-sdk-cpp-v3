

#include "huaweicloud/live/v1/model/UpdateGeoBlockingConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateGeoBlockingConfigResponse::UpdateGeoBlockingConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateGeoBlockingConfigResponse::~UpdateGeoBlockingConfigResponse() = default;

void UpdateGeoBlockingConfigResponse::validate()
{
}

web::json::value UpdateGeoBlockingConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateGeoBlockingConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateGeoBlockingConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateGeoBlockingConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateGeoBlockingConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateGeoBlockingConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



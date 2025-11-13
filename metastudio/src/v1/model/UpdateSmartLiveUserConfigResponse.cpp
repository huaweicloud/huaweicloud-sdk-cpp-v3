

#include "huaweicloud/metastudio/v1/model/UpdateSmartLiveUserConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartLiveUserConfigResponse::UpdateSmartLiveUserConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateSmartLiveUserConfigResponse::~UpdateSmartLiveUserConfigResponse() = default;

void UpdateSmartLiveUserConfigResponse::validate()
{
}

web::json::value UpdateSmartLiveUserConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateSmartLiveUserConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateSmartLiveUserConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateSmartLiveUserConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateSmartLiveUserConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateSmartLiveUserConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



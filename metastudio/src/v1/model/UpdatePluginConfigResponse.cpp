

#include "huaweicloud/metastudio/v1/model/UpdatePluginConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePluginConfigResponse::UpdatePluginConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdatePluginConfigResponse::~UpdatePluginConfigResponse() = default;

void UpdatePluginConfigResponse::validate()
{
}

web::json::value UpdatePluginConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdatePluginConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdatePluginConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePluginConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePluginConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePluginConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



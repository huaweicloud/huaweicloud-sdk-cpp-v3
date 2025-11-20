

#include "huaweicloud/metastudio/v1/model/SetTenantUserConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantUserConfigurationResponse::SetTenantUserConfigurationResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SetTenantUserConfigurationResponse::~SetTenantUserConfigurationResponse() = default;

void SetTenantUserConfigurationResponse::validate()
{
}

web::json::value SetTenantUserConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SetTenantUserConfigurationResponse::fromJson(const web::json::value& val)
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


std::string SetTenantUserConfigurationResponse::getXRequestId() const
{
    return xRequestId_;
}

void SetTenantUserConfigurationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetTenantUserConfigurationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetTenantUserConfigurationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



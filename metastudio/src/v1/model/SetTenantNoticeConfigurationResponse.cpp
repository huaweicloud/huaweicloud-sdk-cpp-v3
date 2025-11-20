

#include "huaweicloud/metastudio/v1/model/SetTenantNoticeConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantNoticeConfigurationResponse::SetTenantNoticeConfigurationResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SetTenantNoticeConfigurationResponse::~SetTenantNoticeConfigurationResponse() = default;

void SetTenantNoticeConfigurationResponse::validate()
{
}

web::json::value SetTenantNoticeConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SetTenantNoticeConfigurationResponse::fromJson(const web::json::value& val)
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


std::string SetTenantNoticeConfigurationResponse::getXRequestId() const
{
    return xRequestId_;
}

void SetTenantNoticeConfigurationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetTenantNoticeConfigurationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetTenantNoticeConfigurationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



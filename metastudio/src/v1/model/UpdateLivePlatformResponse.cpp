

#include "huaweicloud/metastudio/v1/model/UpdateLivePlatformResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLivePlatformResponse::UpdateLivePlatformResponse()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateLivePlatformResponse::~UpdateLivePlatformResponse() = default;

void UpdateLivePlatformResponse::validate()
{
}

web::json::value UpdateLivePlatformResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateLivePlatformResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformId(refVal);
        }
    }
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


std::string UpdateLivePlatformResponse::getPlatformId() const
{
    return platformId_;
}

void UpdateLivePlatformResponse::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool UpdateLivePlatformResponse::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void UpdateLivePlatformResponse::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string UpdateLivePlatformResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateLivePlatformResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateLivePlatformResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateLivePlatformResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



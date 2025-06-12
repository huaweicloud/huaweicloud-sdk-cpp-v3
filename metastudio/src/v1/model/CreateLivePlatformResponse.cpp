

#include "huaweicloud/metastudio/v1/model/CreateLivePlatformResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateLivePlatformResponse::CreateLivePlatformResponse()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateLivePlatformResponse::~CreateLivePlatformResponse() = default;

void CreateLivePlatformResponse::validate()
{
}

web::json::value CreateLivePlatformResponse::toJson() const
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
bool CreateLivePlatformResponse::fromJson(const web::json::value& val)
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


std::string CreateLivePlatformResponse::getPlatformId() const
{
    return platformId_;
}

void CreateLivePlatformResponse::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool CreateLivePlatformResponse::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void CreateLivePlatformResponse::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string CreateLivePlatformResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateLivePlatformResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateLivePlatformResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateLivePlatformResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



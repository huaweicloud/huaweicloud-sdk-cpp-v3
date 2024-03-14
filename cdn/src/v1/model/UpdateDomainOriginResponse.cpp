

#include "huaweicloud/cdn/v1/model/UpdateDomainOriginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainOriginResponse::UpdateDomainOriginResponse()
{
    originIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDomainOriginResponse::~UpdateDomainOriginResponse() = default;

void UpdateDomainOriginResponse::validate()
{
}

web::json::value UpdateDomainOriginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originIsSet_) {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(origin_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDomainOriginResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            ResourceBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrigin(refVal);
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


ResourceBody UpdateDomainOriginResponse::getOrigin() const
{
    return origin_;
}

void UpdateDomainOriginResponse::setOrigin(const ResourceBody& value)
{
    origin_ = value;
    originIsSet_ = true;
}

bool UpdateDomainOriginResponse::originIsSet() const
{
    return originIsSet_;
}

void UpdateDomainOriginResponse::unsetorigin()
{
    originIsSet_ = false;
}

std::string UpdateDomainOriginResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDomainOriginResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDomainOriginResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDomainOriginResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



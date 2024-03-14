

#include "huaweicloud/cdn/v1/model/UpdateOriginHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateOriginHostResponse::UpdateOriginHostResponse()
{
    originHostIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateOriginHostResponse::~UpdateOriginHostResponse() = default;

void UpdateOriginHostResponse::validate()
{
}

web::json::value UpdateOriginHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originHostIsSet_) {
        val[utility::conversions::to_string_t("origin_host")] = ModelBase::toJson(originHost_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateOriginHostResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_host"));
        if(!fieldValue.is_null())
        {
            DomainOriginHost refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginHost(refVal);
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


DomainOriginHost UpdateOriginHostResponse::getOriginHost() const
{
    return originHost_;
}

void UpdateOriginHostResponse::setOriginHost(const DomainOriginHost& value)
{
    originHost_ = value;
    originHostIsSet_ = true;
}

bool UpdateOriginHostResponse::originHostIsSet() const
{
    return originHostIsSet_;
}

void UpdateOriginHostResponse::unsetoriginHost()
{
    originHostIsSet_ = false;
}

std::string UpdateOriginHostResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateOriginHostResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateOriginHostResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateOriginHostResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



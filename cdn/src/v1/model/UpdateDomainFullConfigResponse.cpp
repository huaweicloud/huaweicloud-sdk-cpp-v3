

#include "huaweicloud/cdn/v1/model/UpdateDomainFullConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainFullConfigResponse::UpdateDomainFullConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateDomainFullConfigResponse::~UpdateDomainFullConfigResponse() = default;

void UpdateDomainFullConfigResponse::validate()
{
}

web::json::value UpdateDomainFullConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateDomainFullConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateDomainFullConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateDomainFullConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateDomainFullConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateDomainFullConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



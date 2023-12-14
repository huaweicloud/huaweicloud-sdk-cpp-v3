

#include "huaweicloud/live/v1/model/UpdateIpAuthListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateIpAuthListResponse::UpdateIpAuthListResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateIpAuthListResponse::~UpdateIpAuthListResponse() = default;

void UpdateIpAuthListResponse::validate()
{
}

web::json::value UpdateIpAuthListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateIpAuthListResponse::fromJson(const web::json::value& val)
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


std::string UpdateIpAuthListResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateIpAuthListResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateIpAuthListResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateIpAuthListResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



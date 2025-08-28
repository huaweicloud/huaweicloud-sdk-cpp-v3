

#include "huaweicloud/metastudio/v1/model/UpdateRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRoleResponse::UpdateRoleResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateRoleResponse::~UpdateRoleResponse() = default;

void UpdateRoleResponse::validate()
{
}

web::json::value UpdateRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateRoleResponse::fromJson(const web::json::value& val)
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


std::string UpdateRoleResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateRoleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateRoleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateRoleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



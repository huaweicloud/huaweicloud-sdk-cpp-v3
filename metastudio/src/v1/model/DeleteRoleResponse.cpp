

#include "huaweicloud/metastudio/v1/model/DeleteRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteRoleResponse::DeleteRoleResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteRoleResponse::~DeleteRoleResponse() = default;

void DeleteRoleResponse::validate()
{
}

web::json::value DeleteRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteRoleResponse::fromJson(const web::json::value& val)
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


std::string DeleteRoleResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteRoleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteRoleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteRoleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



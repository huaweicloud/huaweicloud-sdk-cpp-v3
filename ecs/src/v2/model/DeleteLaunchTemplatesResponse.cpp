

#include "huaweicloud/ecs/v2/model/DeleteLaunchTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteLaunchTemplatesResponse::DeleteLaunchTemplatesResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteLaunchTemplatesResponse::~DeleteLaunchTemplatesResponse() = default;

void DeleteLaunchTemplatesResponse::validate()
{
}

web::json::value DeleteLaunchTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteLaunchTemplatesResponse::fromJson(const web::json::value& val)
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


std::string DeleteLaunchTemplatesResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteLaunchTemplatesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteLaunchTemplatesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteLaunchTemplatesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



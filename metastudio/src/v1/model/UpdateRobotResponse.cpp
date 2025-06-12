

#include "huaweicloud/metastudio/v1/model/UpdateRobotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRobotResponse::UpdateRobotResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateRobotResponse::~UpdateRobotResponse() = default;

void UpdateRobotResponse::validate()
{
}

web::json::value UpdateRobotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateRobotResponse::fromJson(const web::json::value& val)
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


std::string UpdateRobotResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateRobotResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateRobotResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateRobotResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



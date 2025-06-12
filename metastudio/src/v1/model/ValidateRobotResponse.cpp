

#include "huaweicloud/metastudio/v1/model/ValidateRobotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ValidateRobotResponse::ValidateRobotResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ValidateRobotResponse::~ValidateRobotResponse() = default;

void ValidateRobotResponse::validate()
{
}

web::json::value ValidateRobotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ValidateRobotResponse::fromJson(const web::json::value& val)
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


std::string ValidateRobotResponse::getXRequestId() const
{
    return xRequestId_;
}

void ValidateRobotResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ValidateRobotResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ValidateRobotResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



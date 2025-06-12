

#include "huaweicloud/metastudio/v1/model/DeleteRobotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteRobotResponse::DeleteRobotResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteRobotResponse::~DeleteRobotResponse() = default;

void DeleteRobotResponse::validate()
{
}

web::json::value DeleteRobotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteRobotResponse::fromJson(const web::json::value& val)
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


std::string DeleteRobotResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteRobotResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteRobotResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteRobotResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



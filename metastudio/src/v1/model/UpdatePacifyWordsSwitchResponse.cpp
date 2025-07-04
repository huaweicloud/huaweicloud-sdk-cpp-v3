

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsSwitchResponse::UpdatePacifyWordsSwitchResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdatePacifyWordsSwitchResponse::~UpdatePacifyWordsSwitchResponse() = default;

void UpdatePacifyWordsSwitchResponse::validate()
{
}

web::json::value UpdatePacifyWordsSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdatePacifyWordsSwitchResponse::fromJson(const web::json::value& val)
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


std::string UpdatePacifyWordsSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePacifyWordsSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePacifyWordsSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePacifyWordsSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



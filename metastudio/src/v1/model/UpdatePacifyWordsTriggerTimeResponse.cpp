

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsTriggerTimeResponse::UpdatePacifyWordsTriggerTimeResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdatePacifyWordsTriggerTimeResponse::~UpdatePacifyWordsTriggerTimeResponse() = default;

void UpdatePacifyWordsTriggerTimeResponse::validate()
{
}

web::json::value UpdatePacifyWordsTriggerTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdatePacifyWordsTriggerTimeResponse::fromJson(const web::json::value& val)
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


std::string UpdatePacifyWordsTriggerTimeResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdatePacifyWordsTriggerTimeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdatePacifyWordsTriggerTimeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



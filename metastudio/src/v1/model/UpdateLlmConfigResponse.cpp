

#include "huaweicloud/metastudio/v1/model/UpdateLlmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateLlmConfigResponse::UpdateLlmConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateLlmConfigResponse::~UpdateLlmConfigResponse() = default;

void UpdateLlmConfigResponse::validate()
{
}

web::json::value UpdateLlmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateLlmConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateLlmConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateLlmConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateLlmConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateLlmConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/UpdateInstructionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionResponse::UpdateInstructionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateInstructionResponse::~UpdateInstructionResponse() = default;

void UpdateInstructionResponse::validate()
{
}

web::json::value UpdateInstructionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateInstructionResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstructionResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateInstructionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateInstructionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateInstructionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/DeleteInstructionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInstructionResponse::DeleteInstructionResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInstructionResponse::~DeleteInstructionResponse() = default;

void DeleteInstructionResponse::validate()
{
}

web::json::value DeleteInstructionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInstructionResponse::fromJson(const web::json::value& val)
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


std::string DeleteInstructionResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInstructionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInstructionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInstructionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



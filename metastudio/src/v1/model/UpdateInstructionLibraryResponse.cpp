

#include "huaweicloud/metastudio/v1/model/UpdateInstructionLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInstructionLibraryResponse::UpdateInstructionLibraryResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateInstructionLibraryResponse::~UpdateInstructionLibraryResponse() = default;

void UpdateInstructionLibraryResponse::validate()
{
}

web::json::value UpdateInstructionLibraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateInstructionLibraryResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstructionLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateInstructionLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateInstructionLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateInstructionLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



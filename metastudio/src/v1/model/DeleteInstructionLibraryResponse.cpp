

#include "huaweicloud/metastudio/v1/model/DeleteInstructionLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteInstructionLibraryResponse::DeleteInstructionLibraryResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteInstructionLibraryResponse::~DeleteInstructionLibraryResponse() = default;

void DeleteInstructionLibraryResponse::validate()
{
}

web::json::value DeleteInstructionLibraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteInstructionLibraryResponse::fromJson(const web::json::value& val)
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


std::string DeleteInstructionLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteInstructionLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteInstructionLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteInstructionLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ConfirmFileUploadResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmFileUploadResponse::ConfirmFileUploadResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ConfirmFileUploadResponse::~ConfirmFileUploadResponse() = default;

void ConfirmFileUploadResponse::validate()
{
}

web::json::value ConfirmFileUploadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ConfirmFileUploadResponse::fromJson(const web::json::value& val)
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


std::string ConfirmFileUploadResponse::getXRequestId() const
{
    return xRequestId_;
}

void ConfirmFileUploadResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ConfirmFileUploadResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ConfirmFileUploadResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



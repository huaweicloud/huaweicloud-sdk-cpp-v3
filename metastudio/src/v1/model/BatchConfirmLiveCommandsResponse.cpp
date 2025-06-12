

#include "huaweicloud/metastudio/v1/model/BatchConfirmLiveCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchConfirmLiveCommandsResponse::BatchConfirmLiveCommandsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchConfirmLiveCommandsResponse::~BatchConfirmLiveCommandsResponse() = default;

void BatchConfirmLiveCommandsResponse::validate()
{
}

web::json::value BatchConfirmLiveCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchConfirmLiveCommandsResponse::fromJson(const web::json::value& val)
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


std::string BatchConfirmLiveCommandsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchConfirmLiveCommandsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchConfirmLiveCommandsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchConfirmLiveCommandsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmSmarLiveRoomResponse::ConfirmSmarLiveRoomResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ConfirmSmarLiveRoomResponse::~ConfirmSmarLiveRoomResponse() = default;

void ConfirmSmarLiveRoomResponse::validate()
{
}

web::json::value ConfirmSmarLiveRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ConfirmSmarLiveRoomResponse::fromJson(const web::json::value& val)
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


std::string ConfirmSmarLiveRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void ConfirmSmarLiveRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ConfirmSmarLiveRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ConfirmSmarLiveRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



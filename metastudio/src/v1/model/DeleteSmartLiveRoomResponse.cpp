

#include "huaweicloud/metastudio/v1/model/DeleteSmartLiveRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteSmartLiveRoomResponse::DeleteSmartLiveRoomResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteSmartLiveRoomResponse::~DeleteSmartLiveRoomResponse() = default;

void DeleteSmartLiveRoomResponse::validate()
{
}

web::json::value DeleteSmartLiveRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteSmartLiveRoomResponse::fromJson(const web::json::value& val)
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


std::string DeleteSmartLiveRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteSmartLiveRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteSmartLiveRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteSmartLiveRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



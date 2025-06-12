

#include "huaweicloud/metastudio/v1/model/DeleteSmartChatRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteSmartChatRoomResponse::DeleteSmartChatRoomResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteSmartChatRoomResponse::~DeleteSmartChatRoomResponse() = default;

void DeleteSmartChatRoomResponse::validate()
{
}

web::json::value DeleteSmartChatRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteSmartChatRoomResponse::fromJson(const web::json::value& val)
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


std::string DeleteSmartChatRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteSmartChatRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteSmartChatRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteSmartChatRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}



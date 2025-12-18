

#include "huaweicloud/meeting/v1/model/CreateWebSocketTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateWebSocketTokenResponse::CreateWebSocketTokenResponse()
{
    webSocketToken_ = "";
    webSocketTokenIsSet_ = false;
}

CreateWebSocketTokenResponse::~CreateWebSocketTokenResponse() = default;

void CreateWebSocketTokenResponse::validate()
{
}

web::json::value CreateWebSocketTokenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(webSocketTokenIsSet_) {
        val[utility::conversions::to_string_t("webSocketToken")] = ModelBase::toJson(webSocketToken_);
    }

    return val;
}
bool CreateWebSocketTokenResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("webSocketToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webSocketToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebSocketToken(refVal);
        }
    }
    return ok;
}


std::string CreateWebSocketTokenResponse::getWebSocketToken() const
{
    return webSocketToken_;
}

void CreateWebSocketTokenResponse::setWebSocketToken(const std::string& value)
{
    webSocketToken_ = value;
    webSocketTokenIsSet_ = true;
}

bool CreateWebSocketTokenResponse::webSocketTokenIsSet() const
{
    return webSocketTokenIsSet_;
}

void CreateWebSocketTokenResponse::unsetwebSocketToken()
{
    webSocketTokenIsSet_ = false;
}

}
}
}
}
}



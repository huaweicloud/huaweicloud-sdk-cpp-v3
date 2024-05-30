

#include "huaweicloud/organizations/v1/model/DeclineHandshakeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeclineHandshakeResponse::DeclineHandshakeResponse()
{
    handshakeIsSet_ = false;
}

DeclineHandshakeResponse::~DeclineHandshakeResponse() = default;

void DeclineHandshakeResponse::validate()
{
}

web::json::value DeclineHandshakeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIsSet_) {
        val[utility::conversions::to_string_t("handshake")] = ModelBase::toJson(handshake_);
    }

    return val;
}
bool DeclineHandshakeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("handshake"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handshake"));
        if(!fieldValue.is_null())
        {
            HandshakeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandshake(refVal);
        }
    }
    return ok;
}


HandshakeDto DeclineHandshakeResponse::getHandshake() const
{
    return handshake_;
}

void DeclineHandshakeResponse::setHandshake(const HandshakeDto& value)
{
    handshake_ = value;
    handshakeIsSet_ = true;
}

bool DeclineHandshakeResponse::handshakeIsSet() const
{
    return handshakeIsSet_;
}

void DeclineHandshakeResponse::unsethandshake()
{
    handshakeIsSet_ = false;
}

}
}
}
}
}



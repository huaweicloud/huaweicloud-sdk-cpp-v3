

#include "huaweicloud/organizations/v1/model/AcceptHandshakeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




AcceptHandshakeResponse::AcceptHandshakeResponse()
{
    handshakeIsSet_ = false;
}

AcceptHandshakeResponse::~AcceptHandshakeResponse() = default;

void AcceptHandshakeResponse::validate()
{
}

web::json::value AcceptHandshakeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIsSet_) {
        val[utility::conversions::to_string_t("handshake")] = ModelBase::toJson(handshake_);
    }

    return val;
}
bool AcceptHandshakeResponse::fromJson(const web::json::value& val)
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


HandshakeDto AcceptHandshakeResponse::getHandshake() const
{
    return handshake_;
}

void AcceptHandshakeResponse::setHandshake(const HandshakeDto& value)
{
    handshake_ = value;
    handshakeIsSet_ = true;
}

bool AcceptHandshakeResponse::handshakeIsSet() const
{
    return handshakeIsSet_;
}

void AcceptHandshakeResponse::unsethandshake()
{
    handshakeIsSet_ = false;
}

}
}
}
}
}



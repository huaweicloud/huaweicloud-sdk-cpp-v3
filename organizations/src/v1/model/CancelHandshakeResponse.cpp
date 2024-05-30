

#include "huaweicloud/organizations/v1/model/CancelHandshakeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CancelHandshakeResponse::CancelHandshakeResponse()
{
    handshakeIsSet_ = false;
}

CancelHandshakeResponse::~CancelHandshakeResponse() = default;

void CancelHandshakeResponse::validate()
{
}

web::json::value CancelHandshakeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIsSet_) {
        val[utility::conversions::to_string_t("handshake")] = ModelBase::toJson(handshake_);
    }

    return val;
}
bool CancelHandshakeResponse::fromJson(const web::json::value& val)
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


HandshakeDto CancelHandshakeResponse::getHandshake() const
{
    return handshake_;
}

void CancelHandshakeResponse::setHandshake(const HandshakeDto& value)
{
    handshake_ = value;
    handshakeIsSet_ = true;
}

bool CancelHandshakeResponse::handshakeIsSet() const
{
    return handshakeIsSet_;
}

void CancelHandshakeResponse::unsethandshake()
{
    handshakeIsSet_ = false;
}

}
}
}
}
}



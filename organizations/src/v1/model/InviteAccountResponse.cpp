

#include "huaweicloud/organizations/v1/model/InviteAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




InviteAccountResponse::InviteAccountResponse()
{
    handshakeIsSet_ = false;
}

InviteAccountResponse::~InviteAccountResponse() = default;

void InviteAccountResponse::validate()
{
}

web::json::value InviteAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIsSet_) {
        val[utility::conversions::to_string_t("handshake")] = ModelBase::toJson(handshake_);
    }

    return val;
}
bool InviteAccountResponse::fromJson(const web::json::value& val)
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


HandshakeDto InviteAccountResponse::getHandshake() const
{
    return handshake_;
}

void InviteAccountResponse::setHandshake(const HandshakeDto& value)
{
    handshake_ = value;
    handshakeIsSet_ = true;
}

bool InviteAccountResponse::handshakeIsSet() const
{
    return handshakeIsSet_;
}

void InviteAccountResponse::unsethandshake()
{
    handshakeIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/organizations/v1/model/ShowHandshakeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowHandshakeResponse::ShowHandshakeResponse()
{
    handshakeIsSet_ = false;
}

ShowHandshakeResponse::~ShowHandshakeResponse() = default;

void ShowHandshakeResponse::validate()
{
}

web::json::value ShowHandshakeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIsSet_) {
        val[utility::conversions::to_string_t("handshake")] = ModelBase::toJson(handshake_);
    }

    return val;
}
bool ShowHandshakeResponse::fromJson(const web::json::value& val)
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


HandshakeDto ShowHandshakeResponse::getHandshake() const
{
    return handshake_;
}

void ShowHandshakeResponse::setHandshake(const HandshakeDto& value)
{
    handshake_ = value;
    handshakeIsSet_ = true;
}

bool ShowHandshakeResponse::handshakeIsSet() const
{
    return handshakeIsSet_;
}

void ShowHandshakeResponse::unsethandshake()
{
    handshakeIsSet_ = false;
}

}
}
}
}
}



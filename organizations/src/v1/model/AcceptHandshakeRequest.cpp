

#include "huaweicloud/organizations/v1/model/AcceptHandshakeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




AcceptHandshakeRequest::AcceptHandshakeRequest()
{
    handshakeId_ = "";
    handshakeIdIsSet_ = false;
}

AcceptHandshakeRequest::~AcceptHandshakeRequest() = default;

void AcceptHandshakeRequest::validate()
{
}

web::json::value AcceptHandshakeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIdIsSet_) {
        val[utility::conversions::to_string_t("handshake_id")] = ModelBase::toJson(handshakeId_);
    }

    return val;
}
bool AcceptHandshakeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("handshake_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handshake_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandshakeId(refVal);
        }
    }
    return ok;
}


std::string AcceptHandshakeRequest::getHandshakeId() const
{
    return handshakeId_;
}

void AcceptHandshakeRequest::setHandshakeId(const std::string& value)
{
    handshakeId_ = value;
    handshakeIdIsSet_ = true;
}

bool AcceptHandshakeRequest::handshakeIdIsSet() const
{
    return handshakeIdIsSet_;
}

void AcceptHandshakeRequest::unsethandshakeId()
{
    handshakeIdIsSet_ = false;
}

}
}
}
}
}



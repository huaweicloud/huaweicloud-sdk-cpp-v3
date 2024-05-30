

#include "huaweicloud/organizations/v1/model/DeclineHandshakeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DeclineHandshakeRequest::DeclineHandshakeRequest()
{
    handshakeId_ = "";
    handshakeIdIsSet_ = false;
}

DeclineHandshakeRequest::~DeclineHandshakeRequest() = default;

void DeclineHandshakeRequest::validate()
{
}

web::json::value DeclineHandshakeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIdIsSet_) {
        val[utility::conversions::to_string_t("handshake_id")] = ModelBase::toJson(handshakeId_);
    }

    return val;
}
bool DeclineHandshakeRequest::fromJson(const web::json::value& val)
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


std::string DeclineHandshakeRequest::getHandshakeId() const
{
    return handshakeId_;
}

void DeclineHandshakeRequest::setHandshakeId(const std::string& value)
{
    handshakeId_ = value;
    handshakeIdIsSet_ = true;
}

bool DeclineHandshakeRequest::handshakeIdIsSet() const
{
    return handshakeIdIsSet_;
}

void DeclineHandshakeRequest::unsethandshakeId()
{
    handshakeIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/organizations/v1/model/CancelHandshakeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CancelHandshakeRequest::CancelHandshakeRequest()
{
    handshakeId_ = "";
    handshakeIdIsSet_ = false;
}

CancelHandshakeRequest::~CancelHandshakeRequest() = default;

void CancelHandshakeRequest::validate()
{
}

web::json::value CancelHandshakeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(handshakeIdIsSet_) {
        val[utility::conversions::to_string_t("handshake_id")] = ModelBase::toJson(handshakeId_);
    }

    return val;
}
bool CancelHandshakeRequest::fromJson(const web::json::value& val)
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


std::string CancelHandshakeRequest::getHandshakeId() const
{
    return handshakeId_;
}

void CancelHandshakeRequest::setHandshakeId(const std::string& value)
{
    handshakeId_ = value;
    handshakeIdIsSet_ = true;
}

bool CancelHandshakeRequest::handshakeIdIsSet() const
{
    return handshakeIdIsSet_;
}

void CancelHandshakeRequest::unsethandshakeId()
{
    handshakeIdIsSet_ = false;
}

}
}
}
}
}



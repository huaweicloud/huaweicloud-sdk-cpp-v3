

#include "huaweicloud/organizations/v1/model/ShowHandshakeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ShowHandshakeRequest::ShowHandshakeRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    handshakeId_ = "";
    handshakeIdIsSet_ = false;
}

ShowHandshakeRequest::~ShowHandshakeRequest() = default;

void ShowHandshakeRequest::validate()
{
}

web::json::value ShowHandshakeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(handshakeIdIsSet_) {
        val[utility::conversions::to_string_t("handshake_id")] = ModelBase::toJson(handshakeId_);
    }

    return val;
}
bool ShowHandshakeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
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


std::string ShowHandshakeRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ShowHandshakeRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ShowHandshakeRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ShowHandshakeRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ShowHandshakeRequest::getHandshakeId() const
{
    return handshakeId_;
}

void ShowHandshakeRequest::setHandshakeId(const std::string& value)
{
    handshakeId_ = value;
    handshakeIdIsSet_ = true;
}

bool ShowHandshakeRequest::handshakeIdIsSet() const
{
    return handshakeIdIsSet_;
}

void ShowHandshakeRequest::unsethandshakeId()
{
    handshakeIdIsSet_ = false;
}

}
}
}
}
}



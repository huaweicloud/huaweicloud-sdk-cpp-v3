

#include "huaweicloud/iotda/v5/model/AddTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddTunnelResponse::AddTunnelResponse()
{
    tunnelId_ = "";
    tunnelIdIsSet_ = false;
    tunnelAccessToken_ = "";
    tunnelAccessTokenIsSet_ = false;
    expiresIn_ = 0;
    expiresInIsSet_ = false;
    tunnelUri_ = "";
    tunnelUriIsSet_ = false;
}

AddTunnelResponse::~AddTunnelResponse() = default;

void AddTunnelResponse::validate()
{
}

web::json::value AddTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tunnelIdIsSet_) {
        val[utility::conversions::to_string_t("tunnel_id")] = ModelBase::toJson(tunnelId_);
    }
    if(tunnelAccessTokenIsSet_) {
        val[utility::conversions::to_string_t("tunnel_access_token")] = ModelBase::toJson(tunnelAccessToken_);
    }
    if(expiresInIsSet_) {
        val[utility::conversions::to_string_t("expires_in")] = ModelBase::toJson(expiresIn_);
    }
    if(tunnelUriIsSet_) {
        val[utility::conversions::to_string_t("tunnel_uri")] = ModelBase::toJson(tunnelUri_);
    }

    return val;
}
bool AddTunnelResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tunnel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tunnel_access_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_access_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelAccessToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_in"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresIn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tunnel_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelUri(refVal);
        }
    }
    return ok;
}


std::string AddTunnelResponse::getTunnelId() const
{
    return tunnelId_;
}

void AddTunnelResponse::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool AddTunnelResponse::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void AddTunnelResponse::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

std::string AddTunnelResponse::getTunnelAccessToken() const
{
    return tunnelAccessToken_;
}

void AddTunnelResponse::setTunnelAccessToken(const std::string& value)
{
    tunnelAccessToken_ = value;
    tunnelAccessTokenIsSet_ = true;
}

bool AddTunnelResponse::tunnelAccessTokenIsSet() const
{
    return tunnelAccessTokenIsSet_;
}

void AddTunnelResponse::unsettunnelAccessToken()
{
    tunnelAccessTokenIsSet_ = false;
}

int32_t AddTunnelResponse::getExpiresIn() const
{
    return expiresIn_;
}

void AddTunnelResponse::setExpiresIn(int32_t value)
{
    expiresIn_ = value;
    expiresInIsSet_ = true;
}

bool AddTunnelResponse::expiresInIsSet() const
{
    return expiresInIsSet_;
}

void AddTunnelResponse::unsetexpiresIn()
{
    expiresInIsSet_ = false;
}

std::string AddTunnelResponse::getTunnelUri() const
{
    return tunnelUri_;
}

void AddTunnelResponse::setTunnelUri(const std::string& value)
{
    tunnelUri_ = value;
    tunnelUriIsSet_ = true;
}

bool AddTunnelResponse::tunnelUriIsSet() const
{
    return tunnelUriIsSet_;
}

void AddTunnelResponse::unsettunnelUri()
{
    tunnelUriIsSet_ = false;
}

}
}
}
}
}



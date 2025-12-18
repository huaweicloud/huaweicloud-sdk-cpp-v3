

#include "huaweicloud/meeting/v1/model/CreateConfTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateConfTokenResponse::CreateConfTokenResponse()
{
    dataIsSet_ = false;
    addressToken_ = "";
    addressTokenIsSet_ = false;
    gloablPublicIP_ = "";
    gloablPublicIPIsSet_ = false;
}

CreateConfTokenResponse::~CreateConfTokenResponse() = default;

void CreateConfTokenResponse::validate()
{
}

web::json::value CreateConfTokenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(addressTokenIsSet_) {
        val[utility::conversions::to_string_t("addressToken")] = ModelBase::toJson(addressToken_);
    }
    if(gloablPublicIPIsSet_) {
        val[utility::conversions::to_string_t("gloablPublicIP")] = ModelBase::toJson(gloablPublicIP_);
    }

    return val;
}
bool CreateConfTokenResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            TokenInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addressToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addressToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gloablPublicIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gloablPublicIP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGloablPublicIP(refVal);
        }
    }
    return ok;
}


TokenInfo CreateConfTokenResponse::getData() const
{
    return data_;
}

void CreateConfTokenResponse::setData(const TokenInfo& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateConfTokenResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateConfTokenResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string CreateConfTokenResponse::getAddressToken() const
{
    return addressToken_;
}

void CreateConfTokenResponse::setAddressToken(const std::string& value)
{
    addressToken_ = value;
    addressTokenIsSet_ = true;
}

bool CreateConfTokenResponse::addressTokenIsSet() const
{
    return addressTokenIsSet_;
}

void CreateConfTokenResponse::unsetaddressToken()
{
    addressTokenIsSet_ = false;
}

std::string CreateConfTokenResponse::getGloablPublicIP() const
{
    return gloablPublicIP_;
}

void CreateConfTokenResponse::setGloablPublicIP(const std::string& value)
{
    gloablPublicIP_ = value;
    gloablPublicIPIsSet_ = true;
}

bool CreateConfTokenResponse::gloablPublicIPIsSet() const
{
    return gloablPublicIPIsSet_;
}

void CreateConfTokenResponse::unsetgloablPublicIP()
{
    gloablPublicIPIsSet_ = false;
}

}
}
}
}
}



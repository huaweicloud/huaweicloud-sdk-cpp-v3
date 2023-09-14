

#include "huaweicloud/smn/v2/model/CreateApplicationEndpointRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationEndpointRequestBody::CreateApplicationEndpointRequestBody()
{
    token_ = "";
    tokenIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

CreateApplicationEndpointRequestBody::~CreateApplicationEndpointRequestBody() = default;

void CreateApplicationEndpointRequestBody::validate()
{
}

web::json::value CreateApplicationEndpointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool CreateApplicationEndpointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}

std::string CreateApplicationEndpointRequestBody::getToken() const
{
    return token_;
}

void CreateApplicationEndpointRequestBody::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool CreateApplicationEndpointRequestBody::tokenIsSet() const
{
    return tokenIsSet_;
}

void CreateApplicationEndpointRequestBody::unsettoken()
{
    tokenIsSet_ = false;
}

std::string CreateApplicationEndpointRequestBody::getUserData() const
{
    return userData_;
}

void CreateApplicationEndpointRequestBody::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateApplicationEndpointRequestBody::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateApplicationEndpointRequestBody::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}



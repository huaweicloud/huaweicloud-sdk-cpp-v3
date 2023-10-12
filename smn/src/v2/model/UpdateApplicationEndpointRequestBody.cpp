

#include "huaweicloud/smn/v2/model/UpdateApplicationEndpointRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateApplicationEndpointRequestBody::UpdateApplicationEndpointRequestBody()
{
    enabled_ = "";
    enabledIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

UpdateApplicationEndpointRequestBody::~UpdateApplicationEndpointRequestBody() = default;

void UpdateApplicationEndpointRequestBody::validate()
{
}

web::json::value UpdateApplicationEndpointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}
bool UpdateApplicationEndpointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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


std::string UpdateApplicationEndpointRequestBody::getEnabled() const
{
    return enabled_;
}

void UpdateApplicationEndpointRequestBody::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateApplicationEndpointRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateApplicationEndpointRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string UpdateApplicationEndpointRequestBody::getUserData() const
{
    return userData_;
}

void UpdateApplicationEndpointRequestBody::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool UpdateApplicationEndpointRequestBody::userDataIsSet() const
{
    return userDataIsSet_;
}

void UpdateApplicationEndpointRequestBody::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}



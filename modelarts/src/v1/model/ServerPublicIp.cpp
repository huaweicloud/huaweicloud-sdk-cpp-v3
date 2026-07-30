

#include "huaweicloud/modelarts/v1/model/ServerPublicIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerPublicIp::ServerPublicIp()
{
    id_ = "";
    idIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
}

ServerPublicIp::~ServerPublicIp() = default;

void ServerPublicIp::validate()
{
}

web::json::value ServerPublicIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }

    return val;
}
bool ServerPublicIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    return ok;
}


std::string ServerPublicIp::getId() const
{
    return id_;
}

void ServerPublicIp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerPublicIp::idIsSet() const
{
    return idIsSet_;
}

void ServerPublicIp::unsetid()
{
    idIsSet_ = false;
}

std::string ServerPublicIp::getAddress() const
{
    return address_;
}

void ServerPublicIp::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ServerPublicIp::addressIsSet() const
{
    return addressIsSet_;
}

void ServerPublicIp::unsetaddress()
{
    addressIsSet_ = false;
}

}
}
}
}
}



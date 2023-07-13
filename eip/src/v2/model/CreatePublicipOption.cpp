

#include "huaweicloud/eip/v2/model/CreatePublicipOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipOption::CreatePublicipOption()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
}

CreatePublicipOption::~CreatePublicipOption() = default;

void CreatePublicipOption::validate()
{
}

web::json::value CreatePublicipOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool CreatePublicipOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    return ok;
}

std::string CreatePublicipOption::getIpAddress() const
{
    return ipAddress_;
}

void CreatePublicipOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CreatePublicipOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CreatePublicipOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string CreatePublicipOption::getType() const
{
    return type_;
}

void CreatePublicipOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreatePublicipOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreatePublicipOption::unsettype()
{
    typeIsSet_ = false;
}

int32_t CreatePublicipOption::getIpVersion() const
{
    return ipVersion_;
}

void CreatePublicipOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool CreatePublicipOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void CreatePublicipOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string CreatePublicipOption::getAlias() const
{
    return alias_;
}

void CreatePublicipOption::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool CreatePublicipOption::aliasIsSet() const
{
    return aliasIsSet_;
}

void CreatePublicipOption::unsetalias()
{
    aliasIsSet_ = false;
}

std::string CreatePublicipOption::getPortId() const
{
    return portId_;
}

void CreatePublicipOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool CreatePublicipOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void CreatePublicipOption::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}



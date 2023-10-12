

#include "huaweicloud/eip/v2/model/CreatePrePaidPublicipOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePrePaidPublicipOption::CreatePrePaidPublicipOption()
{
    type_ = "";
    typeIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
}

CreatePrePaidPublicipOption::~CreatePrePaidPublicipOption() = default;

void CreatePrePaidPublicipOption::validate()
{
}

web::json::value CreatePrePaidPublicipOption::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool CreatePrePaidPublicipOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreatePrePaidPublicipOption::getType() const
{
    return type_;
}

void CreatePrePaidPublicipOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreatePrePaidPublicipOption::typeIsSet() const
{
    return typeIsSet_;
}

void CreatePrePaidPublicipOption::unsettype()
{
    typeIsSet_ = false;
}

int32_t CreatePrePaidPublicipOption::getIpVersion() const
{
    return ipVersion_;
}

void CreatePrePaidPublicipOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool CreatePrePaidPublicipOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void CreatePrePaidPublicipOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string CreatePrePaidPublicipOption::getAlias() const
{
    return alias_;
}

void CreatePrePaidPublicipOption::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool CreatePrePaidPublicipOption::aliasIsSet() const
{
    return aliasIsSet_;
}

void CreatePrePaidPublicipOption::unsetalias()
{
    aliasIsSet_ = false;
}

std::string CreatePrePaidPublicipOption::getPortId() const
{
    return portId_;
}

void CreatePrePaidPublicipOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool CreatePrePaidPublicipOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void CreatePrePaidPublicipOption::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}



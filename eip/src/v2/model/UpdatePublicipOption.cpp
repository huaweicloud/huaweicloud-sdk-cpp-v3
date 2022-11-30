

#include "huaweicloud/eip/v2/model/UpdatePublicipOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePublicipOption::UpdatePublicipOption()
{
    portId_ = "";
    portIdIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

UpdatePublicipOption::~UpdatePublicipOption() = default;

void UpdatePublicipOption::validate()
{
}

web::json::value UpdatePublicipOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}

bool UpdatePublicipOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
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
    return ok;
}


std::string UpdatePublicipOption::getPortId() const
{
    return portId_;
}

void UpdatePublicipOption::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool UpdatePublicipOption::portIdIsSet() const
{
    return portIdIsSet_;
}

void UpdatePublicipOption::unsetportId()
{
    portIdIsSet_ = false;
}

int32_t UpdatePublicipOption::getIpVersion() const
{
    return ipVersion_;
}

void UpdatePublicipOption::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool UpdatePublicipOption::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void UpdatePublicipOption::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string UpdatePublicipOption::getAlias() const
{
    return alias_;
}

void UpdatePublicipOption::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool UpdatePublicipOption::aliasIsSet() const
{
    return aliasIsSet_;
}

void UpdatePublicipOption::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}



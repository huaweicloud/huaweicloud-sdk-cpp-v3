

#include "huaweicloud/ecs/v2/model/BatchRebootSeversOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchRebootSeversOption::BatchRebootSeversOption()
{
    serversIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

BatchRebootSeversOption::~BatchRebootSeversOption() = default;

void BatchRebootSeversOption::validate()
{
}

web::json::value BatchRebootSeversOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool BatchRebootSeversOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
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
    return ok;
}


std::vector<ServerId>& BatchRebootSeversOption::getServers()
{
    return servers_;
}

void BatchRebootSeversOption::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchRebootSeversOption::serversIsSet() const
{
    return serversIsSet_;
}

void BatchRebootSeversOption::unsetservers()
{
    serversIsSet_ = false;
}

std::string BatchRebootSeversOption::getType() const
{
    return type_;
}

void BatchRebootSeversOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchRebootSeversOption::typeIsSet() const
{
    return typeIsSet_;
}

void BatchRebootSeversOption::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



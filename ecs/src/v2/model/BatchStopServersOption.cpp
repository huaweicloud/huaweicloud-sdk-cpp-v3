

#include "huaweicloud/ecs/v2/model/BatchStopServersOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStopServersOption::BatchStopServersOption()
{
    serversIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

BatchStopServersOption::~BatchStopServersOption() = default;

void BatchStopServersOption::validate()
{
}

web::json::value BatchStopServersOption::toJson() const
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
bool BatchStopServersOption::fromJson(const web::json::value& val)
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


std::vector<ServerId>& BatchStopServersOption::getServers()
{
    return servers_;
}

void BatchStopServersOption::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchStopServersOption::serversIsSet() const
{
    return serversIsSet_;
}

void BatchStopServersOption::unsetservers()
{
    serversIsSet_ = false;
}

std::string BatchStopServersOption::getType() const
{
    return type_;
}

void BatchStopServersOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchStopServersOption::typeIsSet() const
{
    return typeIsSet_;
}

void BatchStopServersOption::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}



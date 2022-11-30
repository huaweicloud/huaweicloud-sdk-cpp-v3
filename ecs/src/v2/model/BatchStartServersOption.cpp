

#include "huaweicloud/ecs/v2/model/BatchStartServersOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStartServersOption::BatchStartServersOption()
{
    serversIsSet_ = false;
}

BatchStartServersOption::~BatchStartServersOption() = default;

void BatchStartServersOption::validate()
{
}

web::json::value BatchStartServersOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}

bool BatchStartServersOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<ServerId>& BatchStartServersOption::getServers()
{
    return servers_;
}

void BatchStartServersOption::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchStartServersOption::serversIsSet() const
{
    return serversIsSet_;
}

void BatchStartServersOption::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}



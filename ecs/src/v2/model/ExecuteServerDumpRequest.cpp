

#include "huaweicloud/ecs/v2/model/ExecuteServerDumpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ExecuteServerDumpRequest::ExecuteServerDumpRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ExecuteServerDumpRequest::~ExecuteServerDumpRequest() = default;

void ExecuteServerDumpRequest::validate()
{
}

web::json::value ExecuteServerDumpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ExecuteServerDumpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ExecuteServerDumpRequest::getServerId() const
{
    return serverId_;
}

void ExecuteServerDumpRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ExecuteServerDumpRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ExecuteServerDumpRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/ecs/v2/model/ShowServerAttachableNicNumRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerAttachableNicNumRequest::ShowServerAttachableNicNumRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerAttachableNicNumRequest::~ShowServerAttachableNicNumRequest() = default;

void ShowServerAttachableNicNumRequest::validate()
{
}

web::json::value ShowServerAttachableNicNumRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowServerAttachableNicNumRequest::fromJson(const web::json::value& val)
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


std::string ShowServerAttachableNicNumRequest::getServerId() const
{
    return serverId_;
}

void ShowServerAttachableNicNumRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerAttachableNicNumRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerAttachableNicNumRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}



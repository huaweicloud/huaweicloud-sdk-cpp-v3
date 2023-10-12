

#include "huaweicloud/ecs/v2/model/ShowServerTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerTagsRequest::ShowServerTagsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerTagsRequest::~ShowServerTagsRequest() = default;

void ShowServerTagsRequest::validate()
{
}

web::json::value ShowServerTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowServerTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowServerTagsRequest::getServerId() const
{
    return serverId_;
}

void ShowServerTagsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerTagsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerTagsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}



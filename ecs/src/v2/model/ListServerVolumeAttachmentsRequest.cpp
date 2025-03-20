

#include "huaweicloud/ecs/v2/model/ListServerVolumeAttachmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerVolumeAttachmentsRequest::ListServerVolumeAttachmentsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListServerVolumeAttachmentsRequest::~ListServerVolumeAttachmentsRequest() = default;

void ListServerVolumeAttachmentsRequest::validate()
{
}

web::json::value ListServerVolumeAttachmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ListServerVolumeAttachmentsRequest::fromJson(const web::json::value& val)
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


std::string ListServerVolumeAttachmentsRequest::getServerId() const
{
    return serverId_;
}

void ListServerVolumeAttachmentsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListServerVolumeAttachmentsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListServerVolumeAttachmentsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}



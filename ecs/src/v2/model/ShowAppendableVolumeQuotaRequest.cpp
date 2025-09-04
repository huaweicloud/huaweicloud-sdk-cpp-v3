

#include "huaweicloud/ecs/v2/model/ShowAppendableVolumeQuotaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowAppendableVolumeQuotaRequest::ShowAppendableVolumeQuotaRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowAppendableVolumeQuotaRequest::~ShowAppendableVolumeQuotaRequest() = default;

void ShowAppendableVolumeQuotaRequest::validate()
{
}

web::json::value ShowAppendableVolumeQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowAppendableVolumeQuotaRequest::fromJson(const web::json::value& val)
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


std::string ShowAppendableVolumeQuotaRequest::getServerId() const
{
    return serverId_;
}

void ShowAppendableVolumeQuotaRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowAppendableVolumeQuotaRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowAppendableVolumeQuotaRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}



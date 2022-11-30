

#include "huaweicloud/ecs/v2/model/ShowResetPasswordFlagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowResetPasswordFlagRequest::ShowResetPasswordFlagRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowResetPasswordFlagRequest::~ShowResetPasswordFlagRequest() = default;

void ShowResetPasswordFlagRequest::validate()
{
}

web::json::value ShowResetPasswordFlagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ShowResetPasswordFlagRequest::fromJson(const web::json::value& val)
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


std::string ShowResetPasswordFlagRequest::getServerId() const
{
    return serverId_;
}

void ShowResetPasswordFlagRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowResetPasswordFlagRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowResetPasswordFlagRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}





#include "huaweicloud/ecs/v2/model/NovaShowServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowServerRequest::NovaShowServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    openStackAPIVersion_ = "";
    openStackAPIVersionIsSet_ = false;
}

NovaShowServerRequest::~NovaShowServerRequest() = default;

void NovaShowServerRequest::validate()
{
}

web::json::value NovaShowServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(openStackAPIVersionIsSet_) {
        val[utility::conversions::to_string_t("OpenStack-API-Version")] = ModelBase::toJson(openStackAPIVersion_);
    }

    return val;
}
bool NovaShowServerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("OpenStack-API-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OpenStack-API-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenStackAPIVersion(refVal);
        }
    }
    return ok;
}


std::string NovaShowServerRequest::getServerId() const
{
    return serverId_;
}

void NovaShowServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaShowServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaShowServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string NovaShowServerRequest::getOpenStackAPIVersion() const
{
    return openStackAPIVersion_;
}

void NovaShowServerRequest::setOpenStackAPIVersion(const std::string& value)
{
    openStackAPIVersion_ = value;
    openStackAPIVersionIsSet_ = true;
}

bool NovaShowServerRequest::openStackAPIVersionIsSet() const
{
    return openStackAPIVersionIsSet_;
}

void NovaShowServerRequest::unsetopenStackAPIVersion()
{
    openStackAPIVersionIsSet_ = false;
}

}
}
}
}
}


